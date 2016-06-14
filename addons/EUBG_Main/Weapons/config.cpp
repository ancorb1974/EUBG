class CfgPatches {
	class EUBG_NordicBG_Weapons {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

// Weapons
class CfgWeapons 
{

	// ext class ref
	class arifle_MX_F;
	class arifle_MXC_F;
	class arifle_MX_GL_F;
	class arifle_MX_Black_F;
	class arifle_MX_GL_Black_F;
	class arifle_Katiba_F;
	class arifle_Katiba_GL_F;
	class arifle_TRG21_F;
	class arifle_TRG21_GL_F;
	class arifle_TRG20_F;
	class arifle_AK12_F;
	class arifle_AK12_GL_F;
	class hgun_P07_F;
	class srifle_GM6_F;
	class srifle_DMR_06_olive_F;
	class LMG_03_F;
	class MMG_02_black_F;
//Sweden
	class EUBG_NordicBG_AK5C_F: arifle_MX_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AK5C";
		Scope=1;
		picture = "\EUBG_Main\Weapons\data\ui\AK5C_ca.paa";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"\EUBG_Main\Weapons\data\AK5C_base_co.paa",			
			"\EUBG_Main\Weapons\data\AK5D_base_co.paa"
		};
	};

	class EUBG_NordicBG_AK5C: EUBG_NordicBG_AK5C_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AK5C";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
		};
	};

	class EUBG_NordicBG_AK5D_F: arifle_MXC_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AK5D";
		Scope=1;
		picture = "\EUBG_Main\Weapons\data\ui\AK5D_ca.paa";
		hiddenselections[]=
		{
			"camo1"
		};
		hiddenselectionstextures[]=
		{			
			"\EUBG_Main\Weapons\data\AK5D_base_co.paa"
		};
	};

	class EUBG_NordicBG_AK5D: EUBG_NordicBG_AK5D_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AK5D";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
		};
	};

	class EUBG_NordicBG_AK5C_M203_F: arifle_MX_GL_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AK5C M203";
		Scope=1;
		picture = "\EUBG_Main\Weapons\data\ui\AK5C_M203_ca.paa";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"\EUBG_Main\Weapons\data\AK5C_base_co.paa",			
			"\EUBG_Main\Weapons\data\glx_black_co.paa"
		};
	};

	class EUBG_NordicBG_AK5C_M203: EUBG_NordicBG_AK5C_M203_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AK5C M203";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
		};
	};
	
	class EUBG_NordicBG_Ksp58: MMG_02_black_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Ksp 58";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn_smg";
			};
		};
	};
	
	class EUBG_NordicBG_Ksp90: LMG_03_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Ksp 90";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_smg_blk_F";
			};
		};
	};
	
	class EUBG_NordicBG_Psg90: srifle_DMR_06_olive_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Psg 90";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	
	class EUBG_NordicBG_AG90: srifle_GM6_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AG 90 C";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	
	class EUBG_NordicBG_Pist88: hgun_P07_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Pist 88";
		Scope=1;
	};

//Finland
	class EUBG_NordicBG_RK62: arifle_AK12_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] RK62M";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
		};
	};

	class EUBG_NordicBG_RK62_M203: arifle_AK12_GL_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] RK62TP";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
		};
	};

//Ireland
	class EUBG_NordicBG_Steyr: arifle_TRG21_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Steyr AUG";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
		};
	};

	class EUBG_NordicBG_Steyr_M203: arifle_TRG21_GL_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Steyr AUG M203";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
		};
	};

//Latvia
	class EUBG_NordicBG_G36: arifle_Katiba_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] HK G36";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
		};
	};

	class EUBG_NordicBG_G38_M203: arifle_Katiba_GL_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] HK G38 M203";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
		};
	};
	
	//Universal
	class EUBG_NordicBG_Glock17: hgun_P07_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Glock 17";
		Scope=1;
	};
	
	class EUBG_NordicBG_FNMAG: MMG_02_black_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] FN MAG";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn_smg";
			};
		};
	};
	
	class EUBG_NordicBG_FNMinimi: LMG_03_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] FN Minimi";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_smg_blk_F";
			};
		};
	};
	
	class EUBG_NordicBG_AWM: srifle_DMR_06_olive_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AWM";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	
	class EUBG_NordicBG_M107: srifle_GM6_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] M107";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
};