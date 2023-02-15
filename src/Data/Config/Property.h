#pragma once

namespace Data
{
	class Property
	{
	public:
		[[nodiscard]] virtual bool Match(const RE::GFxValue& a_value) const = 0;
	};

	class AnyOfProperty final : public Property
	{
	public:
		bool Match(const RE::GFxValue& a_value) const override;

		void AddProperty(std::shared_ptr<Property> a_subProperty);

	private:
		std::vector<std::shared_ptr<Property>> _subProperties;
	};

	class MatchProperty final : public Property
	{
	public:
		MatchProperty(bool a_boolean) : _value{ a_boolean } {}
		MatchProperty(double a_number) : _value{ a_number } {}
		MatchProperty(std::int32_t a_number) : _value{ a_number } {}
		MatchProperty(std::uint32_t a_number) : _value{ a_number } {}

		MatchProperty(std::string_view a_string)
			: _cachedString{ a_string },
			  _value{ _cachedString }
		{
		}

		bool Match(const RE::GFxValue& a_value) const override;

	private:
		std::string _cachedString;
		RE::GFxValue _value;
	};

	class MainPartProperty final : public Property
	{
	public:
		MainPartProperty(std::uint32_t a_slot) : _slot{ a_slot } {}

		bool Match(const RE::GFxValue& a_value) const override;

	private:
		std::uint32_t _slot;
	};
}