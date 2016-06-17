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

	class EUBG_Nordic_FIN_Base: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Finland) Base";
		editorPreview = "\EUBG_Main\logo\NordicBG\Finland_Flag.paa";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_FIN";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_FIN_WLD_Camo";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Finland\FIN_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Nordic_FIN_Vest","NVGoggleFIN_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Nordic_FIN_Vest","NVGoggleFIN_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_RK62","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_RK62","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		magazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};
		
	class EUBG_Nordic_FIN_Base2: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Finland) Base2";
		editorPreview = "\EUBG_Main\logo\NordicBG\Finland_Flag.paa";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_FIN";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_FIN_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Finland\FIN_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Nordic_FIN_Vest","NVGoggleFIN_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Nordic_FIN_Vest","NVGoggleFIN_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_RK62_M203","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_RK62_M203","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		magazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[]={"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};

	class EUBG_Nordic_FIN_GL: EUBG_Nordic_FIN_Base2
	{
		scope=2;
		displayName="(Finland) Grenadier";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
	};

	class EUBG_Nordic_FIN_LAT: EUBG_Nordic_FIN_Base
	{
		scope=2;
		displayName="(Finland) Light Anti Tank";
		icon = "iconManAT";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_RK62","launch_NLAW_F","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_RK62""launch_NLAW_F","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
	};

	class EUBG_Nordic_FIN_Medic: EUBG_Nordic_FIN_Base
	{
		scope=2;
		displayName="(Finland) Medic";
		icon = "iconManMedic";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
	};

	class EUBG_Nordic_FIN_Rifleman: EUBG_Nordic_FIN_Base
	{
		scope=2;
		displayName="(Finland) Rifleman";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
	};

	class EUBG_Nordic_FIN_TL: EUBG_Nordic_FIN_Base2
	{
		scope=2;
		displayName="(Finland) Team Leader";
		icon = "iconManLeader";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_RK62_M203","EUBG_NordicBG_Glock17","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_RK62_M203","EUBG_NordicBG_Glock17","Throw","Put","Laserdesignator_03"};
	};
		
	class EUBG_Nordic_FIN_HeliPilot: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Finland) HeliPilot";
		editorPreview = "\EUBG_Main\logo\NordicBG\Finland_Flag.paa";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_FIN";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass = "EUBG_Nordic_Pilot_Camo";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		backpack = "";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Universal\EUBG_Pilot_Uniform.paa"};
		linkedItems[] = {"EUBG_Nordic_HeliPilotHelmet","V_Rangemaster_belt","NVGoggleFIN_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_HeliPilotHelmet","V_Rangemaster_belt","NVGoggleFIN_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
        weapons[]={"EUBG_NordicBG_MP5","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_MP5","EUBG_NordicBG_Glock17","Throw","Put","Binocular"};
		magazines[]={"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
		respawnMagazines[]={"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
	};
		
	class EUBG_Nordic_FIN_HeliCrew: EUBG_Nordic_FIN_HeliPilot
	{
		displayName="(Finland) HeliCrew";
		faction="EUBG_Nordic_BG";
		backpack = "";
		linkedItems[] = {"EUBG_Nordic_HeliCrewHelmet","V_Rangemaster_belt","NVGoggleFIN_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_HeliCrewHelmet","V_Rangemaster_belt","NVGoggleFIN_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
	};
		
	class EUBG_Nordic_FIN_FighterPilot: EUBG_Nordic_FIN_HeliPilot
	{
		displayName="(Finland) Fighter Pilot";
		faction="EUBG_Nordic_BG";
		backpack = "";
		linkedItems[] = {"H_PilotHelmetFighter_O","V_Rangemaster_belt","NVGoggleFIN_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_O","V_Rangemaster_belt","NVGoggleFIN_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
	};

	class B_Kitbag_sgg;

	class EUBG_Nordic_FIN_Kitbag_empty : B_Kitbag_sgg 
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "[EUBG] Finland Backpack (empty)";
		picture = "EUBG_NordicBG\Gear\Finland\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"EUBG_NordicBG\Gear\Finland\FIN_Woodland_Backpack.paa"};
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

	class EUBG_Nordic_FIN_WLD_Camo: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName="[EUBG] Finland Uniform";
		picture="\EUBG_NordicBG\Gear\Finland\uim\Uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_FIN_Base";
			containerClass="Supply60";
			mass=80;
		};
	};

	class EUBG_Nordic_FIN_WLD_Camo2: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		displayName="[EUBG] Finland Uniform(Rolled)";
		picture="\EUBG_NordicBG\Gear\Finland\uim\Uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_FIN_Base2";
			containerClass="Supply60";
			mass=80;
		};
	};
	
	class EUBG_Nordic_FIN_Helmet : H_HelmetIA 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Finland Helmet";
		picture = "\EUBG_NordicBG\Gear\Finland\uim\Helmet.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Finland\FIN_Woodland_Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Finland\FIN_Woodland_Helmet.paa"};
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
	
	class EUBG_Nordic_FIN_Vest : V_PlateCarrier1_blk 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Finland Vest";
		picture = "\EUBG_NordicBG\Gear\Finland\uim\Vest.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Finland\FIN_Woodland_Vest.paa"};
		
		class ItemInfo : ItemInfo {
			mass = 20;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Finland\FIN_Woodland_Vest.paa"};
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