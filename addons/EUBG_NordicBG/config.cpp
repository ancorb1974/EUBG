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
class CfgVehicleClasses
{
	class EUBG_Nordic_EST
	{
		displayName="Men (Estonia)";
	};
	class EUBG_Nordic_FIN
	{
		displayName="Men (Finland)";
	};
	class EUBG_Nordic_IRL
	{
		displayName="Men (Ireland)";
	};
	class EUBG_Nordic_LT
	{
		displayName="Men (Lithuania)";
	};
	class EUBG_Nordic_LV
	{
		displayName="Men (Latvia)";
	};
	class EUBG_Nordic_N
	{
		displayName="Men (Norway)";
	};
	class EUBG_Nordic_S
	{
		displayName="Men (Sweden)";
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
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_FIN";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_FIN_WLD_Camo";
		canCarryBackPack=1;
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Finland\FIN_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
	};
		
	class EUBG_Nordic_FIN_Base2: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Finland) Base2";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_FIN";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_FIN_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		canCarryBackPack=1;
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Finland\FIN_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
	};

	class EUBG_Nordic_FIN_TL: EUBG_Nordic_FIN_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Finland) Team Leader";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_FIN";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_FIN_WLD_Camo";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Finland\FIN_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Nordic_FIN_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Nordic_FIN_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"EUBG_NordicBG_RK62_M203","hgun_mas_glock_F","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_RK62_M203","hgun_mas_glock_F","Throw","Put","Laserdesignator_03"};
		magazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_FIN_Medic: EUBG_Nordic_FIN_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Finland) Medic";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_FIN";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_FIN_WLD_Camo2";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Finland\FIN_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Nordic_FIN_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Sordic_FIN_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_FIN_MMG: EUBG_Nordic_FIN_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Finland) Medium Machine Gunner";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_FIN";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_FIN_WLD_Camo2";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Finland\FIN_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Nordic_FIN_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Sordic_FIN_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"LMG_mas_pkm_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"LMG_mas_pkm_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"100Rnd_mas_762x54_T_mag","100Rnd_mas_762x54_T_mag","100Rnd_mas_762x54_mag","100Rnd_mas_762x54_mag","100Rnd_mas_762x54_mag","100Rnd_mas_762x54_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"100Rnd_mas_762x54_T_mag","100Rnd_mas_762x54_T_mag","100Rnd_mas_762x54_mag","100Rnd_mas_762x54_mag","100Rnd_mas_762x54_mag","100Rnd_mas_762x54_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_FIN_Rifleman: EUBG_Nordic_FIN_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Finland) Rifleman";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_FIN";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_FIN_WLD_Camo";
		backpack = "EUBG_Nordic_FIN_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Finland\FIN_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Nordic_FIN_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_FIN_Helmet","EUBG_Nordic_FIN_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","30Rnd_mas_545x39_T_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};
		
	class EUBG_Nordic_FIN_Crew: EUBG_Nordic_FIN_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Finland) Crew";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_FIN";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_FIN_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Finland\FIN_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[] = {"EUBG_Nordic_CrewHelmet","EUBG_Nordic_CrewVest","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_CrewHelmet","EUBG_Nordic_CrewVest","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		weapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};
		
	class EUBG_Nordic_FIN_HeliPilot: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Finland) Heli Pilot";
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
		linkedItems[] = {"EUBG_Nordic_HeliPilotHelmet","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_HeliPilotHelmet","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
        weapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		magazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
		respawnMagazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
	};
		
	class EUBG_Nordic_FIN_HeliCrew: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Finland) Heli Crew";
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
		linkedItems[] = {"EUBG_Nordic_HeliCrewHelmet","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_HeliCrewHelmet","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
        weapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
		respawnMagazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
	};
		
	class EUBG_Nordic_FIN_FighterPilot: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Finland) Fighter Pilot";
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
		linkedItems[] = {"H_PilotHelmetFighter_O","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_O","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
        weapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_RK62","hgun_mas_glock_F","Throw","Put","Rangefinder"};
		magazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
		respawnMagazines[]={"30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","30Rnd_mas_545x39_mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
	};
	
	class EUBG_Nordic_IRL_Base: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Ireland) Base";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_IRL_WLD_Camo";
		canCarryBackPack=1;
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
	};
		
	class EUBG_Nordic_IRL_Base2: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Ireland) Base2";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_IRL_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		canCarryBackPack=1;
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
	};

	class EUBG_Nordic_IRL_Expl: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Ireland) Explosive Expert";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_IRL_WLD_Camo";
		backpack = "EUBG_Nordic_IRL_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_IRL_Helmet","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_IRL_Helmet","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"arifle_Katiba_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_Katiba_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_IRL_Medic: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Ireland) Medic";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_IRL_WLD_Camo";
		backpack = "EUBG_Nordic_IRL_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_IRL_Booniehat","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_IRL_Booniehat","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"arifle_Katiba_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_Katiba_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_IRL_Rifleman: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Ireland) Rifleman";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_IRL_WLD_Camo";
		backpack = "EUBG_Nordic_IRL_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_Beaniehat_Green","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_Beaniehat_Green","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"arifle_Katiba_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_Katiba_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_IRL_GL: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Ireland) Grenadier";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_IRL_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "EUBG_Nordic_IRL_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_IRL_Booniehat","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_IRL_Booniehat","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"arifle_Katiba_GL_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_Katiba_GL_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_IRL_LMG: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Ireland) Light Machine Gunner";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_IRL_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "EUBG_Nordic_IRL_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_IRL_Helmet","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_IRL_Helmet","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"LMG_mas_M249_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"LMG_mas_M249_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_T_Stanag","200Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_T_Stanag","200Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_IRL_SL: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Ireland) Squad Leader";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_IRL_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "EUBG_Nordic_IRL_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_IRL_MilCap","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_IRL_MilCap","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"arifle_Katiba_GL_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_Katiba_GL_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_IRL_TL: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Ireland) Team Leader";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_IRL_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "EUBG_Nordic_IRL_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_IRL_MilCap","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_IRL_MilCap","EUBG_Nordic_IRL_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"arifle_Katiba_GL_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_Katiba_GL_ACO_pointer_F","hgun_mas_glock_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_IRL_Sniper: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Ireland) Sniper";
		icon = "iconManRecon";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_IRL_GhillieSuit";
		model = "\A3\Characters_F\BLUFOR\b_sniper.p3d";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_IRL_Booniehat","EUBG_Nordic_CrewVest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_IRL_Booniehat","EUBG_Nordic_CrewVest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AG90","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AG90","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		magazines[]={"5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_T_Stanag","5Rnd_mas_127x99_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_T_Stanag","5Rnd_mas_127x99_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_IRL_Spotter: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Ireland) Spotter";
		icon = "iconManRecon";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_IRL";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		canDeactivateMines = true; 
		uniformClass="EUBG_Nordic_IRL_GhillieSuit";
		model = "\A3\Characters_F\BLUFOR\b_sniper.p3d";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_IRL_Booniehat","EUBG_Nordic_CrewVest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_IRL_Booniehat","EUBG_Nordic_CrewVest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_LV_Base: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Latvia) Base";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_LV";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_LV_WLD_Camo";
		canCarryBackPack=1;
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Latvia\LV_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
	};
		
	class EUBG_Nordic_LV_Base2: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Latvia) Base2";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_LV";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_LV_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		canCarryBackPack=1;
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Latvia\LV_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
	};

	class EUBG_Nordic_LV_Rifleman: EUBG_Nordic_LV_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Rifleman";
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
		weapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_Medic: EUBG_Nordic_LV_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Medic";
		icon = "iconManMedic";
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
		weapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_LAT: EUBG_Nordic_LV_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Light Anti Tank";
		icon = "iconManAT";
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
		weapons[]={"arifle_mas_g36c","mas_launch_M136_F","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_g36c","mas_launch_M136_F","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_MAT: EUBG_Nordic_LV_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Medium Anti Tank";
		icon = "iconManAT";
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
		weapons[]={"arifle_mas_g36c","mas_launch_maaws_F","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_g36c","mas_launch_maaws_F","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_HAT: EUBG_Nordic_LV_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Heavy Anti Tank";
		icon = "iconManAT";
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
		weapons[]={"arifle_mas_g36c","mas_launch_TitanS_F","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_g36c","mas_launch_TitanS_F","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_AA: EUBG_Nordic_LV_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Anti Air";
		icon = "iconManAT";
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
		weapons[]={"arifle_mas_g36c","mas_launch_Stinger_F","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_g36c","mas_launch_Stinger_F","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_AMMO: EUBG_Nordic_LV_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Ammobearer";
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
		weapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_Point: EUBG_Nordic_LV_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Pointman";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_LV";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		canDeactivateMines = true; 
		uniformClass="EUBG_Nordic_LV_WLD_Camo";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Latvia\LV_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_LV_Helmet","EUBG_Nordic_LV_Vest","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_LV_Helmet","EUBG_Nordic_LV_Vest","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_ENG: EUBG_Nordic_LV_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Engineer";
		icon = "iconManEngineer";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_LV";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		canDeactivateMines = true; 
		uniformClass="EUBG_Nordic_LV_WLD_Camo";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Latvia\LV_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_LV_Helmet","EUBG_Nordic_LV_Vest","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_LV_Helmet","EUBG_Nordic_LV_Vest","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_GL: EUBG_Nordic_LV_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Grenadier";
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
		weapons[]={"arifle_mas_m16_gl","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_m16_gl","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_TL: EUBG_Nordic_LV_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Team Leader";
		icon = "iconManLeader";
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
		weapons[]={"arifle_mas_m16_gl","hgun_mas_acp_F","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"arifle_mas_m16_gl","hgun_mas_acp_F","Throw","Put","Laserdesignator_03"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_SL: EUBG_Nordic_LV_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Squad Leader";
		icon = "iconManLeader";
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
		weapons[]={"arifle_mas_m16_gl","hgun_mas_acp_F","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"arifle_mas_m16_gl","hgun_mas_acp_F","Throw","Put","Laserdesignator_03"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_MMG: EUBG_Nordic_LV_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Medium Machine Gunner";
		icon = "iconManMG";
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
		weapons[]={"LMG_mas_m240_F","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"LMG_mas_m240_F","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_Expl: EUBG_Nordic_LV_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Explosive Expert";
		icon = "iconManExplosive";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_LV";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		canDeactivateMines = true; 
		uniformClass="EUBG_Nordic_LV_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "EUBG_Nordic_LV_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Latvia\LV_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_LV_Helmet","EUBG_Nordic_LV_Vest","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_LV_Helmet","EUBG_Nordic_LV_Vest","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_mas_g36c","hgun_mas_acp_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_LV_MM: EUBG_Nordic_LV_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Latvia) Marksman";
		icon = "iconManRecon";
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
		weapons[]={"srifle_mas_mk17s","hgun_mas_acp_F","Throw","Put","Rangefinder"};
		respawnWeapons[]={"srifle_mas_mk17s","hgun_mas_acp_F","Throw","Put","Rangefinder"};
		magazines[]={"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
		respawnMagazines[]={"20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","20Rnd_mas_762x51_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag","12Rnd_mas_45acp_Mag"};
	};

	class EUBG_Nordic_N_Base: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Norway) Base";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_N";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_N_WLD_Camo";
		canCarryBackPack=1;
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Norway\N_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
	};
		
	class EUBG_Nordic_N_Base2: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Norway) Base2";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_N";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_N_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		canCarryBackPack=1;
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Norway\N_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
	};

	class EUBG_Nordic_N_Rifleman: EUBG_Nordic_N_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Norway) Rifleman";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_N";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_N_WLD_Camo";
		backpack = "EUBG_Nordic_N_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Norway\N_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_N_Helmet","EUBG_Nordic_N_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_N_Helmet","EUBG_Nordic_N_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
	};

	class EUBG_Nordic_N_GL: EUBG_Nordic_N_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Norway) Grenadier";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_N";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_N_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "EUBG_Nordic_N_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Norway\N_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_N_Helmet","EUBG_Nordic_N_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[]={"EUBG_Nordic_N_Helmet","EUBG_Nordic_N_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[]={"arifle_MX_GL_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[]={"arifle_MX_GL_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[]={"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
	};

	class EUBG_Nordic_S_Base: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Sweden) Base";
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_N";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_S_WLD_Camo";
		canCarryBackPack=1;
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
	};
		
	class EUBG_Nordic_S_Base2: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		side = 1;
		displayName="(Sweden) Base2";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_N";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_S_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		canCarryBackPack=1;
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
	};

	class EUBG_Nordic_S_Rifleman: EUBG_Nordic_S_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Rifleman";
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
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_Medic: EUBG_Nordic_S_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Medic";
		icon = "iconManMedic";
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
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_LAT: EUBG_Nordic_S_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Light Anti Tank";
		icon = "iconManAT";
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
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pskottm86","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pskottm86","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_MAT: EUBG_Nordic_S_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Medium Anti Tank";
		icon = "iconManAT";
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
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Grgm86","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Grgm86","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_HAT: EUBG_Nordic_S_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Heavy Anti Tank";
		icon = "iconManAT";
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
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_RBS56","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_RBS56","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_AA: EUBG_Nordic_S_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Anti Air";
		icon = "iconManAT";
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
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_RBS69","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_RBS69","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_AMMO: EUBG_Nordic_S_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Ammobearer";
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
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_Point: EUBG_Nordic_S_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Pointman";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		canDeactivateMines = true; 
		uniformClass="EUBG_Nordic_S_WLD_Camo";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_S_Helmet","EUBG_Nordic_S_Vest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_S_Helmet","EUBG_Nordic_S_Vest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_ENG: EUBG_Nordic_S_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Engineer";
		icon = "iconManEngineer";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		canDeactivateMines = true; 
		uniformClass="EUBG_Nordic_S_WLD_Camo";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_S_Helmet","EUBG_Nordic_S_Vest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_S_Helmet","EUBG_Nordic_S_Vest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_GL: EUBG_Nordic_S_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Grenadier";
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
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_TL: EUBG_Nordic_S_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Team Leader";
		icon = "iconManLeader";
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
		weapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_SL: EUBG_Nordic_S_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Squad Leader";
		icon = "iconManLeader";
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
		weapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_LMG: EUBG_Nordic_S_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Light machine Gunner";
		icon = "iconManMG";
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
		weapons[]={"EUBG_NordicBG_Ksp90","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_Ksp90","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_T_Stanag","200Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_T_Stanag","200Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_MMG: EUBG_Nordic_S_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Medium Machine Gunner";
		icon = "iconManMG";
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
		weapons[]={"EUBG_NordicBG_Ksp58","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_Ksp58","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_Stanag","100Rnd_mas_762x51_T_Stanag","100Rnd_mas_762x51_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_Expl: EUBG_Nordic_S_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Explosive Expert";
		icon = "iconManExplosive";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		canDeactivateMines = true; 
		uniformClass="EUBG_Nordic_S_WLD_Camo2";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_S_Helmet","EUBG_Nordic_S_Vest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_S_Helmet","EUBG_Nordic_S_Vest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_MM: EUBG_Nordic_S_Base2
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Marksman";
		icon = "iconManRecon";
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
		weapons[]={"EUBG_NordicBG_Psg90","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_Psg90","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		magazines[]={"10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","10Rnd_mas_338_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};
		
	class EUBG_Nordic_S_Officer: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Officer";
		icon = "iconManOfficer";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		uniformClass="EUBG_Nordic_S_Officer_Camo";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		backpack = "";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_OfficerUniform.paa"};
		linkedItems[] = {"EUBG_Nordic_S_MilCap","V_Rangemaster_belt", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_S_MilCap","V_Rangemaster_belt", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
        weapons[]={"EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		magazines[]={"17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_Sniper: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Sniper";
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
		magazines[]={"5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_T_Stanag","5Rnd_mas_127x99_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_Stanag","5Rnd_mas_127x99_T_Stanag","5Rnd_mas_127x99_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_Spotter: B_Recon_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Spotter";
		icon = "iconManRecon";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		canDeactivateMines = true; 
		uniformClass="EUBG_Nordic_S_GhillieSuit";
		model = "\A3\Characters_F\BLUFOR\b_sniper.p3d";
		backpack = "EUBG_Nordic_S_Kitbag_empty";
		hiddenSelections[]={"Camo","Insignia"};
		hiddenSelectionsTextures[]={"EUBG_NordicBG\Gear\Sweden\S_Woodland_Uniform.paa"};
		hiddenSelectionsMaterials[]={"EUBG_Main\rvmat\uniform\data\Uniform.rvmat"};
		linkedItems[]={"EUBG_Nordic_S_Booniehat","EUBG_Nordic_CrewVest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"EUBG_Nordic_S_Booniehat","EUBG_Nordic_CrewVest","NVGoggles_INDEP","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","30Rnd_mas_556x45_T_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag"};
	};

	class EUBG_Nordic_S_Diver_Operator: B_diver_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Diver Operator";
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
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag"};
	};

	class EUBG_Nordic_S_Diver_Medic: B_diver_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Diver Medic";
		icon = "iconManMedic";
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
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag"};
	};

	class EUBG_Nordic_S_Diver_Expl: B_diver_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Diver Explosive Specialist";
		icon = "iconManExplosive";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		canDeactivateMines = true; 
		uniformClass="U_B_Wetsuit";
		model = "\A3\characters_F\Common\diver_slotable";
		backpack = "EUBG_Nordic_Black_Kitbag_empty";
		linkedItems[]={"V_RebreatherB","G_B_Diving","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"V_RebreatherB","G_B_Diving","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag"};
	};

	class EUBG_Nordic_S_Diver_ENG: B_diver_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Diver Engineer";
		icon = "iconManEngineer";
		faction="EUBG_Nordic_BG";
		genericNames = "EUBG_NordicNames_S";
		vehicleClass="EUBG_Nordic_S";
		nakedUniform="U_BasicBody";
		hasDriver = 1;
		canDeactivateMines = true; 
		uniformClass="U_B_Wetsuit";
		model = "\A3\characters_F\Common\diver_slotable";
		backpack = "EUBG_Nordic_Black_Kitbag_empty";
		linkedItems[]={"V_RebreatherB","G_B_Diving","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[]={"V_RebreatherB","G_B_Diving","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag"};
	};

	class EUBG_Nordic_S_Diver_LMG: B_diver_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Diver Light machine Gunner";
		icon = "iconManMG";
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
		weapons[]={"EUBG_NordicBG_Ksp90","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		respawnWeapons[]={"EUBG_NordicBG_Ksp90","EUBG_NordicBG_Pist88","Throw","Put","Rangefinder"};
		magazines[]={"200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag"};
		respawnMagazines[]={"200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag","200Rnd_mas_556x45_Stanag"};
	};

	class EUBG_Nordic_S_Diver_TL: B_diver_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Diver Team Leader";
		icon = "iconManLeader";
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
		weapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C_M203","EUBG_NordicBG_Pist88","Throw","Put","Laserdesignator_03"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag"};
	};
		
	class EUBG_Nordic_S_Crew: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) Crew";
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
        weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
	};
		
	class EUBG_Nordic_S_HeliPilot: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) HeliPilot";
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
        weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
	};
		
	class EUBG_Nordic_S_HeliCrew: B_Soldier_base_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		side = 1;
		displayName="(Sweden) HeliCrew";
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
		linkedItems[] = {"EUBG_Nordic_HeliCrewHelmet","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
		respawnLinkedItems[] = {"EUBG_Nordic_HeliCrewHelmet","V_Rangemaster_belt","NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","ItemGPS","FirstAidKit"};
        weapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		respawnWeapons[]={"EUBG_NordicBG_AK5C","EUBG_NordicBG_Pist88","Throw","Put","Binocular"};
		magazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
		respawnMagazines[]={"30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","30Rnd_mas_556x45_Stanag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","17Rnd_mas_9x21_Mag","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","B_IR_Grenade"};
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

	class EUBG_Nordic_IRL_Kitbag_empty : B_Kitbag_sgg 
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "[EUBG] Ireland Backpack (empty)";
		picture = "EUBG_NordicBG\Gear\Ireland\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Backpack.paa"};
		maximumLoad = 360;
	};

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

	class EUBG_Nordic_N_Kitbag_empty : B_Kitbag_sgg 
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "[EUBG] Norway Backpack (empty)";
		picture = "EUBG_NordicBG\Gear\Norway\uim\Backpack.paa";
		hiddenSelectionsTextures[] = {"EUBG_NordicBG\Gear\Norway\N_Woodland_Backpack.paa"};
		maximumLoad = 360;
	};

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

	class EUBG_Nordic_Black_Kitbag_empty : B_Kitbag_sgg 
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "[EUBG] Backpack Black (empty)";
		picture = "EUBG_NordicBG\Gear\Universal\uim\Backpack_Black.paa";
		hiddenSelectionsTextures[] = {"EUBG_NordicBG\Gear\Universal\Backpack_Black.paa"};
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
		displayName="[EUBG] Finland Uniform  (Rolled)";
		picture="\EUBG_NordicBG\Gear\Finland\uim\Uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_FIN_base2";
			containerClass="Supply60";
			mass=80;
		};
	};

	class EUBG_Nordic_IRL_WLD_Camo: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName="[EUBG] Ireland Uniform";
		picture="\EUBG_NordicBG\Gear\Ireland\uim\Uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_IRL_Base";
			containerClass="Supply60";
			mass=80;
		};
	};

	class EUBG_Nordic_IRL_WLD_Camo2: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		displayName="[EUBG] Ireland Uniform  (Rolled)";
		picture="\EUBG_NordicBG\Gear\Ireland\uim\Uniform.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_IRL_Base2";
			containerClass="Supply60";
			mass=80;
		};
	};

	class EUBG_Nordic_IRL_GhillieSuit: Uniform_Base
	{
		dlc="NordicBG";
        scope = 2;
        displayName = "[EUBG] Ireland Ghillie suit";
		picture="\EUBG_NordicBG\Gear\Sweden\uim\Ghillie.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_IRL_Sniper";
			containerClass="Supply60";
			mass=60;
		};
	};

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
		displayName="[EUBG] Latvia Uniform  (Rolled)";
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

	class EUBG_Nordic_N_WLD_Camo: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName="[EUBG] Norway Uniform";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_N_Base";
			containerClass="Supply60";
			mass=80;
		};
	};

	class EUBG_Nordic_N_WLD_Camo2: Uniform_Base
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=1;
		displayName="[EUBG] Norway Uniform  (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EUBG_Nordic_N_Base2";
			containerClass="Supply60";
			mass=80;
		};
	};

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

    class EUBG_Nordic_Pilot_Camo : Uniform_Base
    {
		dlc="NordicBG";
        scope = 2;
        displayName = "[EUBG] Pilot Camo";
		picture="\EUBG_NordicBG\Gear\Universal\uim\Pilot.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "EUBG_Nordic_S_HeliPilot";
            containerClass = "Supply60";
            mass = 80;
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
	
	class EUBG_Nordic_IRL_Helmet : H_HelmetIA 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Ireland Helmet";
		picture = "\EUBG_NordicBG\Gear\Ireland\uim\Helmet.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Helmet.paa"};
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
	
	class EUBG_Nordic_IRL_MilCap: HelmetBase
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName = "[EUBG] Ireland Military Cap";
		picture = "\EUBG_NordicBG\Gear\Ireland\uim\MilCap.paa";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Ireland\IRL_Woodland_MilCap.paa"};

		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={901,701,605};
			uniformModel="\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[]={6};
		};
	};

	class EUBG_Nordic_IRL_Booniehat: HelmetBase
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName = "[EUBG] Ireland Booniehat";
		picture = "\EUBG_NordicBG\Gear\Ireland\uim\Booniehat.paa";
		model="\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Booniehat.paa"};

		class ItemInfo: ItemInfo
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			modelSides[]={6};
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
	
	class EUBG_Nordic_N_Helmet : H_HelmetIA 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Norway Helmet";
		picture = "\EUBG_NordicBG\Gear\Norway\N_Woodland_Helmet.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Norway\N_Woodland_Helmet.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			modelSides[] = {3, 1};
			hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Norway\N_Woodland_Helmet.paa"};
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
	
	class EUBG_Nordic_N_MilCap: HelmetBase
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName = "[EUBG] Norway Military Cap";
		picture = "\EUBG_NordicBG\Gear\Norway\uim\MilCap.paa";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Norway\N_Woodland_MilCap.paa"};

		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={901,701,605};
			uniformModel="\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[]={6};
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
	
	class EUBG_Nordic_CrewHelmet : H_HelmetCrew_O 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Crew Helmet";
		picture = "\EUBG_NordicBG\Gear\Universal\uim\CrewHelmet.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
			modelSides[] = {3, 1};
			hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"};
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
	
	class EUBG_Nordic_HeliPilotHelmet : H_PilotHelmetHeli_O
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Heli Pilot Helmet";
		picture = "\EUBG_NordicBG\Gear\Universal\uim\HeliPilotHelmet.paa";
		model="A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_co.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel="A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {3, 1};
			hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_co.paa"};
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
	
	class EUBG_Nordic_HeliCrewHelmet : H_CrewHelmetHeli_O 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Heli Crew Helmet";
		picture = "\EUBG_NordicBG\Gear\Universal\uim\HeliCrewHelmet.paa";
		model="A3\Characters_F\Common\headgear_helmet_heli_shield";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_co.paa"};
		
		class ItemInfo : HeadgearItem {
			mass = 1;
			uniformModel="A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {3, 1};
			hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_co.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};

	class EUBG_Nordic_Beaniehat_Green: HelmetBase
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope=2;
		displayName = "[EUBG] Beaniehat Green";
		model="\A3\Characters_F\Civil\headgear_beaniehat01";
		picture = "\EUBG_NordicBG\Gear\Universal\uim\Beaniehat.paa";
		hiddenSelectionsTextures[]={"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_green_co.paa"};

		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Civil\headgear_beaniehat01";
			modelSides[]={6};
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
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
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
	
	class EUBG_Nordic_IRL_Vest : V_PlateCarrier1_blk 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Ireland Vest";
		picture = "\EUBG_NordicBG\Gear\Ireland\uim\Vest.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Vest.paa"};
		
		class ItemInfo : ItemInfo {
			mass = 20;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Ireland\IRL_Woodland_Vest.paa"};
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
	
	class EUBG_Nordic_LV_Vest : V_PlateCarrier1_blk 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Latvia Vest";
		picture = "\EUBG_NordicBG\Gear\Latvia\uim\Vest.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
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
	
	class EUBG_Nordic_N_Vest : V_PlateCarrier1_blk 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Norway Vest";
		picture = "\EUBG_NordicBG\Gear\Norway\N_Woodland_Vest.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Norway\N_Woodland_Vest.paa"};
		
		class ItemInfo : ItemInfo {
			mass = 20;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Gear\Norway\N_Woodland_Vest.paa"};
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
	
	class EUBG_Nordic_CrewVest : V_TacVest_oli 
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[EUBG] Crew Vest";
		picture = "\EUBG_NordicBG\Gear\Universal\uim\CrewVest.paa";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_olive_co.paa"};
		
		class ItemInfo : ItemInfo {
			mass = 20;
			uniformModel="A3\Characters_F\Common\equip_tacticalvest";
			hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_olive_co.paa"};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
};