#pragma once

namespace Data
{
	inline static std::map<std::string, RE::FormType> FormTypeMap = {
		{ "", RE::FormType::None },
		{ "Ammo", RE::FormType::Ammo },
		{ "Armor", RE::FormType::Armor },
		{ "Book", RE::FormType::Book },
		{ "Enchantment", RE::FormType::Enchantment },
		{ "Ingredient", RE::FormType::Ingredient },
		{ "Key", RE::FormType::KeyMaster },
		{ "Light", RE::FormType::Light },
		{ "MiscItem", RE::FormType::Misc },
		{ "Potion", RE::FormType::AlchemyItem },
		{ "Scroll", RE::FormType::Scroll },
		{ "Spell", RE::FormType::Spell },
		{ "SoulGem", RE::FormType::SoulGem },
		{ "Weapon", RE::FormType::Weapon },
	};

	inline static std::vector<RE::BIPED_MODEL::BipedObjectSlot> PartMaskPrecedence = {
		RE::BIPED_MODEL::BipedObjectSlot::kBody,
		RE::BIPED_MODEL::BipedObjectSlot::kHair,
		RE::BIPED_MODEL::BipedObjectSlot::kHands,
		RE::BIPED_MODEL::BipedObjectSlot::kForearms,
		RE::BIPED_MODEL::BipedObjectSlot::kFeet,
		RE::BIPED_MODEL::BipedObjectSlot::kCalves,
		RE::BIPED_MODEL::BipedObjectSlot::kShield,
		RE::BIPED_MODEL::BipedObjectSlot::kAmulet,
		RE::BIPED_MODEL::BipedObjectSlot::kRing,
		RE::BIPED_MODEL::BipedObjectSlot::kLongHair,
		RE::BIPED_MODEL::BipedObjectSlot::kEars,
		RE::BIPED_MODEL::BipedObjectSlot::kHead,
		RE::BIPED_MODEL::BipedObjectSlot::kCirclet,
		RE::BIPED_MODEL::BipedObjectSlot::kTail,
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 14),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 15),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 16),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 17),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 18),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 19),
		RE::BIPED_MODEL::BipedObjectSlot::kDecapitateHead,
		RE::BIPED_MODEL::BipedObjectSlot::kDecapitate,
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 22),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 23),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 24),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 25),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 26),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 27),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 28),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 29),
		static_cast<RE::BIPED_MODEL::BipedObjectSlot>(1 << 30),
		RE::BIPED_MODEL::BipedObjectSlot::kFX01,
	};

	enum class WeaponType
	{
		Melee = 0,
		Sword = 1,
		Dagger = 2,
		WarAxe = 3,
		Mace = 4,
		Greatsword = 5,
		Battleaxe = 6,
		Warhammer = 7,
		Bow = 8,
		Crossbow = 9,
		Staff = 10,
		Pickaxe = 11,
		WoodAxe = 12,
		Spear = 13,
		Javelin = 14,
		Pike = 15,
		Halberd = 16,
		Rapier = 17,
		Quarterstaff = 18,
		Claw = 19,
		Whip = 20,
		Katana = 21,
		Scythe = 22,
		Gun = 23,
	};

	inline static std::map<std::string, WeaponType> WeaponSubTypeMap = {
		{ "melee", WeaponType::Melee },
		{ "sword", WeaponType::Sword },
		{ "dagger", WeaponType::Dagger },
		{ "waraxe", WeaponType::WarAxe },
		{ "mace", WeaponType::Mace },
		{ "greatsword", WeaponType::Greatsword },
		{ "battleaxe", WeaponType::Battleaxe },
		{ "bow", WeaponType::Bow },
		{ "crossbow", WeaponType::Crossbow },
		{ "staff", WeaponType::Staff },
		{ "pickaxe", WeaponType::Pickaxe },
		{ "woodaxe", WeaponType::WoodAxe },
	};

	inline static std::map<std::string, std::wstring> WeaponSubTypeDisplayMap = {
		{ "melee", L"$Melee" },
		{ "sword", L"$Sword" },
		{ "dagger", L"$Dagger" },
		{ "waraxe", L"$War Axe" },
		{ "mace", L"$Mace" },
		{ "greatsword", L"$Greatsword" },
		{ "battleaxe", L"$Battleaxe" },
		{ "bow", L"$Bow" },
		{ "crossbow", L"$Crossbow" },
		{ "staff", L"$Staff" },
		{ "pickaxe", L"$Pickaxe" },
		{ "woodaxe", L"$Wood Axe" },
	};

	enum class MiscType
	{
		Gem = 0,
		DragonClaw = 1,
		Artifact = 2,
		Leather = 3,
		LeatherStrips = 4,
		Hide = 5,
		Remains = 6,
		Ingot = 7,
		Tool = 8,
		ChildrensClothes = 9,
		Toy = 10,
		Firewood = 11,

		Fastener = 12,
		WeaponRack = 13,
		Shelf = 14,
		Furniture = 15,
		Exterior = 16,
		Container = 17,

		HousePart = 18,
		Clutter = 19,
		Lockpick = 20,
		Gold = 21,
	};

	inline static std::map<std::string, MiscType> MiscSubTypeMap = {
		{ "gem", MiscType::Gem },
		{ "dragonclaw", MiscType::DragonClaw },
		{ "artifact", MiscType::Artifact },
		{ "leather", MiscType::Leather },
		{ "leatherstrips", MiscType::LeatherStrips },
		{ "hide", MiscType::Hide },
		{ "remains", MiscType::Remains },
		{ "ingot", MiscType::Ingot },
		{ "tool", MiscType::Tool },
		{ "childrensclothes", MiscType::ChildrensClothes },
		{ "toy", MiscType::Toy },
		{ "firewood", MiscType::Firewood },
		{ "fastener", MiscType::Fastener },
		{ "weaponrack", MiscType::WeaponRack },
		{ "shelf", MiscType::Shelf },
		{ "furniture", MiscType::Furniture },
		{ "exterior", MiscType::Exterior },
		{ "container", MiscType::Container },
		{ "housepart", MiscType::HousePart },
		{ "clutter", MiscType::Clutter },
		{ "lockpick", MiscType::Lockpick },
		{ "gold", MiscType::Gold },
	};

	inline static std::map<std::string, std::wstring> MiscSubTypeDisplayMap = {
		{ "gem", L"$Gem" },
		{ "dragonclaw", L"$Claw" },
		{ "artifact", L"$Artifact" },
		{ "leather", L"$Leather" },
		{ "leatherstrips", L"$Strips" },
		{ "hide", L"$Hide" },
		{ "remains", L"$Remains" },
		{ "ingot", L"$Ingot" },
		{ "tool", L"$Tool" },
		{ "childrensclothes", L"$Clothing" },
		{ "toy", L"$Toy" },
		{ "firewood", L"$Firewood" },
		//{ "fastener", L"" },
		//{ "weaponrack", L"" },
		//{ "shelf", L"" },
		//{ "furniture", L"" },
		//{ "exterior", L"" },
		//{ "container", L"" },
		{ "housepart", L"$House Part" },
		{ "clutter", L"$Clutter" },
		{ "lockpick", L"$Lockpick" },
		{ "gold", L"$Gold" },
	};
}
