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
	class B_Kitbag_sgg;

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