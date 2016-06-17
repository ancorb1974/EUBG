class CfgPatches
{
	class EUBG_NordicBG
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F_BLUFOR","EUBG_Main"};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class I_Soldier_base_F;
	class B_Recon_F;
	class B_diver_F;

	class EUBG_Nordic_LV_Base: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Latvia) Base";
		editorPreview = "\EUBG_Main\logo\NordicBG\Latvia_Flag.paa";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_LV";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_LV_WLD_Camo";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Latvia\LV_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_LV_Helmet","EUBG_Nordic_LV_Vest","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_LV_Helmet","EUBG_Nordic_LV_Vest","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_G36","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_G36","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green"};
		respawnMagazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green"};
	};
		
	class EUBG_Nordic_LV_Base2: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Latvia) Base2";
		editorPreview = "\EUBG_Main\logo\NordicBG\Latvia_Flag.paa";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_LV";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_LV_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Latvia\LV_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_LV_Helmet","EUBG_Nordic_LV_Vest","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_LV_Helmet","EUBG_Nordic_LV_Vest","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_G38_M203","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_G38_M203","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green"};
		respawnMagazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green"};
	};

	class EUBG_Nordic_LV_AA: EUBG_Nordic_LV_Base
	{
		scope=2;
		displayName="(Latvia) Anti Air";
		icon = "iconManAT";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_G36","launch_B_Titan_F","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_G36","launch_B_Titan_F","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
	};

	class EUBG_Nordic_LV_AMMO: EUBG_Nordic_LV_Base
	{
		scope=2;
		displayName="(Latvia) Ammobearer";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
	};

	class EUBG_Nordic_LV_ENG: EUBG_Nordic_LV_Base
	{
		scope=2;
		displayName="(Latvia) Engineer";
		icon = "iconManEngineer";
		canDeactivateMines = true; 
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
	};

	class EUBG_Nordic_LV_Expl: EUBG_Nordic_LV_Base
	{
		scope=2;
		displayName="(Latvia) Explosive Expert";
		icon = "iconManExplosive";
		canDeactivateMines = true; 
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
	};

	class EUBG_Nordic_LV_GL: EUBG_Nordic_LV_Base2
	{
		scope=2;
		displayName="(Latvia) Grenadier";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
	};

	class EUBG_Nordic_LV_LAT: EUBG_Nordic_LV_Base
	{
		scope=2;
		displayName="(Latvia) Light Anti Tank";
		icon = "iconManAT";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_G36","EUBG_NordicBG_RBS57","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_G36","EUBG_NordicBG_RBS57","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
	};

	class EUBG_Nordic_LV_LMG: EUBG_Nordic_LV_Base2
	{
		scope=2;
		displayName="(Latvia) Light machine Gunner";
		icon = "iconManMG";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_FNMinimi","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_FNMinimi","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		magazines[]={"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green"};
		respawnMagazines[]={"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green"};
	};

	class EUBG_Nordic_LV_MAT: EUBG_Nordic_LV_Base
	{
		scope=2;
		displayName="(Latvia) Medium Anti Tank";
		icon = "iconManAT";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_G36","launch_B_Titan_short_F","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_G36","launch_B_Titan_short_F","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
	};

	class EUBG_Nordic_LV_Medic: EUBG_Nordic_LV_Base
	{
		scope=2;
		displayName="(Latvia) Medic";
		icon = "iconManMedic";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
	};

	class EUBG_Nordic_LV_MM: EUBG_Nordic_LV_Base2
	{
		scope=2;
		displayName="(Latvia) Marksman";
		icon = "iconManRecon";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_FRF2","EUBG_NordicBG_Glock17","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_FRF2","EUBG_NordicBG_Glock17","Throw","Put","Rangefinder"};
		magazines[]={"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green"};
		respawnMagazines[]={"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green"};
	};

	class EUBG_Nordic_LV_Point: EUBG_Nordic_LV_Base
	{
		scope=2;
		displayName="(Latvia) Pointman";
		canDeactivateMines = true; 
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
	};

	class EUBG_Nordic_LV_Rifleman: EUBG_Nordic_LV_Base
	{
		scope=2;
		displayName="(Latvia) Rifleman";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
	};

	class EUBG_Nordic_LV_SL: EUBG_Nordic_LV_Base2
	{
		scope=2;
		displayName="(Latvia) Squad Leader";
		icon = "iconManLeader";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_G38_M203","EUBG_NordicBG_Glock17","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_G38_M203","EUBG_NordicBG_Glock17","Throw","Put","Laserdesignator_03"};
	};

	class EUBG_Nordic_LV_TL: EUBG_Nordic_LV_Base2
	{
		scope=2;
		displayName="(Latvia) Team Leader";
		icon = "iconManLeader";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_G38_M203","EUBG_NordicBG_Glock17","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_G38_M203","EUBG_NordicBG_Glock17","Throw","Put","Laserdesignator_03"};
	};

	class B_Kitbag_sgg;

	class EUBG_Nordic_LV_Kitbag_empty : B_Kitbag_sgg 
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "[EUBG] Latvia Backpack (empty)";
		picture = "EUBG_NordicBG\Gear\Latvia\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"EUBG_NordicBG\Gear\Latvia\LV_Woodland_Backpack.paa"};
		maximumLoad = 360;
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class HelmetBase;
	class H_HelmetIA;
	class H_HelmetCrew_O;
	class H_PilotHelmetHeli_O;
	class H_CrewHelmetHeli_O;
	class HeadgearItem;
	class V_PlateCarrier1_blk;
	class V_TacVest_oli;
	class ItemInfo;

	class EUBG_Nordic_LV_WLD_Camo: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName="[EUBG] Latvia Uniform";
		picture="\EUBG_NordicBG\Gear\Latvia\uim\Uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_LV_Base";
			containerClass="Supply60";
			mass=80;
		};
	};

	class EUBG_Nordic_LV_WLD_Camo2: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		displayName="[EUBG] Latvia Uniform(Rolled)";
		picture="\EUBG_NordicBG\Gear\Latvia\uim\Uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_LV_Base2";
			containerClass="Supply60";
			mass=80;
		};
	};
	
	class EUBG_Nordic_LV_Helmet : H_HelmetIA 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Latvia Helmet";
		picture = "\EUBG_NordicBG\Gear\Latvia\uim\Helmet.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Latvia\LV_Woodland_Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Latvia\LV_Woodland_Helmet.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	
	class EUBG_Nordic_LV_MilCap: HelmetBase
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName = "[EUBG] Latvia Military Cap";
		picture = "\EUBG_NordicBG\Gear\Latvia\uim\MilCap.paa";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Latvia\LV_Woodland_MilCap.paa"};

		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={901,701,605};
			uniformModel="\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[]={6};
		};
	};
	
	
	class EUBG_Nordic_LV_Vest : V_PlateCarrier1_blk 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Latvia Vest";
		picture = "\EUBG_NordicBG\Gear\Latvia\uim\Vest.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Latvia\LV_Woodland_Vest.paa"};
		
		class ItemInfo : ItemInfo {
			mass = 20;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Latvia\LV_Woodland_Vest.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
};