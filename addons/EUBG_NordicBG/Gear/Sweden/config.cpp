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

	class EUBG_Nordic_S_Base: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Sweden) Base";
		editorPreview = "\EUBG_Main\logo\NordicBG\Sweden_Flag.paa";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_S_WLD_Camo";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_S_Helmet","EUBG_Nordic_S_Vest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_S_Helmet","EUBG_Nordic_S_Vest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};
		
	class EUBG_Nordic_S_Base2: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Sweden) Base2";
		editorPreview = "\EUBG_Main\logo\NordicBG\Sweden_Flag.paa";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_S_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_S_Helmet","EUBG_Nordic_S_Vest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_S_Helmet","EUBG_Nordic_S_Vest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};

	class EUBG_Nordic_S_AA: EUBG_Nordic_S_Base
	{
		scope=2;
		displayName="(Sweden) Anti Air";
		icon = "iconManAT";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_RBS69","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_RBS69","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
	};

	class EUBG_Nordic_S_AMMO: EUBG_Nordic_S_Base
	{
		scope=2;
		displayName="(Sweden) Ammobearer";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
	};

	class EUBG_Nordic_S_ENG: EUBG_Nordic_S_Base
	{
		scope=2;
		displayName="(Sweden) Engineer";
		icon = "iconManEngineer";
		canDeactivateMines = true; 
		backpack = "EUBG_Nordic_S_Kitbag_empty";
	};

	class EUBG_Nordic_S_Expl: EUBG_Nordic_S_Base
	{
		scope=2;
		displayName="(Sweden) Explosive Expert";
		icon = "iconManExplosive";
		canDeactivateMines = true; 
		backpack = "EUBG_Nordic_S_Kitbag_empty";
	};

	class EUBG_Nordic_S_GL: EUBG_Nordic_S_Base2
	{
		scope=2;
		displayName="(Sweden) Grenadier";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
	};

	class EUBG_Nordic_S_LAT: EUBG_Nordic_S_Base
	{
		scope=2;
		displayName="(Sweden) Light Anti Tank";
		icon = "iconManAT";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_RBS57","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_RBS57","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
	};

	class EUBG_Nordic_S_LMG: EUBG_Nordic_S_Base2
	{
		scope=2;
		displayName="(Sweden) Light machine Gunner";
		icon = "iconManMG";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_Ksp90","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_Ksp90","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[]={"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_65x39_cased_Box_Tracer","200Rnd_65x39_cased_Box_Tracer","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};

	class EUBG_Nordic_S_MAT: EUBG_Nordic_S_Base
	{
		scope=2;
		displayName="(Sweden) Medium Anti Tank";
		icon = "iconManAT";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_RBS55","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_RBS55","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
	};

	class EUBG_Nordic_S_Medic: EUBG_Nordic_S_Base
	{
		scope=2;
		displayName="(Sweden) Medic";
		icon = "iconManMedic";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
	};

	class EUBG_Nordic_S_MM: EUBG_Nordic_S_Base2
	{
		scope=2;
		displayName="(Sweden) Marksman";
		icon = "iconManRecon";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_Psg90","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_Psg90","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		magazines[]={"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[]={"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};

	class EUBG_Nordic_S_MMG: EUBG_Nordic_S_Base2
	{
		scope=2;
		displayName="(Sweden) Medium Machine Gunner";
		icon = "iconManMG";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_Ksp58","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_Ksp58","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[]={"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};
		
	class EUBG_Nordic_S_Officer: EUBG_Nordic_S_Base
	{
		scope=2;
		displayName="(Sweden) Officer";
		icon = "iconManOfficer";
		uniformClass="EUBG_Nordic_S_Officer_Camo";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		backpack = "";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_OfficerUniform.paa"};
		linkedItems[] = {"EUBG_Nordic_S_MilCap","V_Rangemaster_belt", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_S_MilCap","V_Rangemaster_belt", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
        weapons[]={"EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		magazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};

	class EUBG_Nordic_S_Point: EUBG_Nordic_S_Base
	{
		scope=2;
		displayName="(Sweden) Pointman";
		canDeactivateMines = true; 
		backpack = "EUBG_Nordic_S_Kitbag_empty";
	};

	class EUBG_Nordic_S_Rifleman: EUBG_Nordic_S_Base
	{
		scope=2;
		displayName="(Sweden) Rifleman";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
	};

	class EUBG_Nordic_S_SL: EUBG_Nordic_S_Base2
	{
		scope=2;
		displayName="(Sweden) Squad Leader";
		icon = "iconManLeader";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
	};

	class EUBG_Nordic_S_TL: EUBG_Nordic_S_Base2
	{
		scope=2;
		displayName="(Sweden) Team Leader";
		icon = "iconManLeader";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
	};

	class EUBG_Nordic_S_Sniper: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Sniper";
		editorPreview = "\EUBG_Main\logo\NordicBG\Sweden_Flag.paa";
		icon = "iconManRecon";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_S_GhillieSuit";
		model = "\A3\Characters_F\BLUFOR\b_sniper.p3d";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_S_Booniehat","EUBG_Nordic_CrewVest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_S_Booniehat","EUBG_Nordic_CrewVest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AG90","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AG90","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		magazines[]={"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[]={"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};

	class EUBG_Nordic_S_Spotter: EUBG_Nordic_S_Sniper
	{
		displayName="(Sweden) Spotter";
		canDeactivateMines = true;
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};

	class EUBG_Nordic_S_Diver_Operator: B_diver_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Diver Operator";
		editorPreview = "\EUBG_Main\logo\NordicBG\Sweden_Flag.paa";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="U_B_Wetsuit";
		model = "\A3\characters_F\Common\diver_slotable";
		backpack = "EUBG_Nordic_Black_Kitbag_empty";
		linkedItems[]={"V_RebreatherB","G_B_Diving","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"V_RebreatherB","G_B_Diving","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
	};

	class EUBG_Nordic_S_Diver_Medic: EUBG_Nordic_S_Diver_Operator
	{
		displayName="(Sweden) Diver Medic";
		icon = "iconManMedic";
		backpack = "EUBG_Nordic_Black_Kitbag_empty";
	};

	class EUBG_Nordic_S_Diver_Expl: EUBG_Nordic_S_Diver_Operator
	{
		displayName="(Sweden) Diver Explosive Specialist";
		icon = "iconManExplosive";
		canDeactivateMines = true; 
		backpack = "EUBG_Nordic_Black_Kitbag_empty";
	};

	class EUBG_Nordic_S_Diver_ENG: EUBG_Nordic_S_Diver_Operator
	{
		displayName="(Sweden) Diver Engineer";
		icon = "iconManEngineer";
		canDeactivateMines = true; 
		backpack = "EUBG_Nordic_Black_Kitbag_empty";
	};

	class EUBG_Nordic_S_Diver_LMG: EUBG_Nordic_S_Diver_Operator
	{
		displayName="(Sweden) Diver Light machine Gunner";
		icon = "iconManMG";
		backpack = "EUBG_Nordic_Black_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_Ksp90","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_Ksp90","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		magazines[]={"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F"};
		respawnMagazines[]={"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F"};
	};

	class EUBG_Nordic_S_Diver_TL: EUBG_Nordic_S_Diver_Operator
	{
		displayName="(Sweden) Diver Team Leader";
		icon = "iconManLeader";
		backpack = "EUBG_Nordic_Black_Kitbag_empty";
		weapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
	};
		
	class EUBG_Nordic_S_Crew: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Crew";
		editorPreview = "\EUBG_Main\logo\NordicBG\Sweden_Flag.paa";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_S_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[] = {"EUBG_Nordic_CrewHelmet","EUBG_Nordic_CrewVest","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_CrewHelmet","EUBG_Nordic_CrewVest","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
        weapons[]={"EUBG_NordicBG_AK5D","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5D","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
		respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
	};
		
	class EUBG_Nordic_S_HeliPilot: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) HeliPilot";
		editorPreview = "\EUBG_Main\logo\NordicBG\Sweden_Flag.paa";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass = "EUBG_Nordic_Pilot_Camo";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		backpack = "";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Universal\EUBG_Pilot_Uniform.paa"};
		linkedItems[] = {"EUBG_Nordic_HeliPilotHelmet","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_HeliPilotHelmet","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
        weapons[]={"EUBG_NordicBG_AK5D","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5D","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
		respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
	};
		
	class EUBG_Nordic_S_HeliCrew: EUBG_Nordic_S_HeliPilot
	{
		displayName="(Sweden) HeliCrew";
		faction="EUBG_Nordic_BG";
		backpack = "";
		linkedItems[] = {"EUBG_Nordic_HeliCrewHelmet","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_HeliCrewHelmet","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
	};

	class B_Kitbag_sgg;

	class EUBG_Nordic_S_Kitbag_empty : B_Kitbag_sgg 
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "[EUBG] Sweden Backpack (empty)";
		picture = "EUBG_NordicBG\Gear\Sweden\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"EUBG_NordicBG\Gear\Sweden\S_Woodland_Backpack.paa"};
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

	class EUBG_Nordic_S_WLD_Camo: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName="[EUBG] Sweden Uniform";
		picture="\EUBG_NordicBG\Gear\Sweden\uim\Uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_S_Base";
			containerClass="Supply60";
			mass=80;
		};
	};

	class EUBG_Nordic_S_WLD_Camo2: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		displayName="[EUBG] Sweden Uniform(Rolled)";
		picture="\EUBG_NordicBG\Gear\Sweden\uim\Uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_S_Base2";
			containerClass="Supply60";
			mass=80;
		};
	};

	class EUBG_Nordic_S_Officer_Camo: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName="[EUBG] Sweden Officer Uniform(Rolled)";
		picture="\EUBG_NordicBG\Gear\Sweden\uim\Officer.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_S_Officer";
			containerClass="Supply60";
			mass=80;
		};
	};

	class EUBG_Nordic_S_GhillieSuit: Uniform_Base
	{
		dlc="NordicBG";
        scope = 2;
        displayName = "[EUBG] Sweden Ghillie suit";
		picture="\EUBG_NordicBG\Gear\Sweden\uim\Ghillie.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_S_Sniper";
			containerClass="Supply60";
			mass=60;
		};
	};
	
	class EUBG_Nordic_S_Helmet : H_HelmetIA 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Sweden Helmet";
		picture = "\EUBG_NordicBG\Gear\Sweden\uim\Helmet.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Sweden\S_Woodland_Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Sweden\S_Woodland_Helmet.paa"};
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
	
	class EUBG_Nordic_S_MilCap: HelmetBase
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName = "[EUBG] Sweden Military Cap";
		picture = "\EUBG_NordicBG\Gear\Sweden\uim\MilCap.paa";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Sweden\S_Woodland_MilCap.paa"};

		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={901,701,605};
			uniformModel="\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[]={6};
		};
	};

	class EUBG_Nordic_S_Booniehat: HelmetBase
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName = "[EUBG] Sweden Booniehat";
		picture = "\EUBG_NordicBG\Gear\Sweden\uim\Booniehat.paa";
		model="\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Sweden\S_Woodland_Booniehat.paa"};

		class ItemInfo: ItemInfo
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			modelSides[]={6};
		};
	};
	
	
	class EUBG_Nordic_S_Vest : V_PlateCarrier1_blk 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Sweden Vest";
		picture = "\EUBG_NordicBG\Gear\Sweden\uim\Vest.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Sweden\S_Woodland_Vest.paa"};
		
		class ItemInfo : ItemInfo {
			mass = 20;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Sweden\S_Woodland_Vest.paa"};
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