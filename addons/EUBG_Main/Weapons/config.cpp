class CfgPatches {
	class EUBG_NordicBG_Weapons {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

// Weapons
class CfgWeapons {

	class arifle_mas_arx_l;
	class arifle_mas_arx_l_gl;
	class arifle_mas_ak12_sf;
	class arifle_mas_ak12_sf_gl;
	class arifle_mas_m1014;
	class hgun_mas_glock_F;
	class LMG_mas_m240_F;
	class LMG_mas_M249_F;
	class mas_launch_M136_F;
	class mas_launch_maaws_F;
	class mas_launch_TitanS_F;
	class mas_launch_Stinger_F;
	class srifle_mas_lrr;
	class srifle_mas_m107;
	
	class EUBG_NordicBG_AK5C_F: arifle_mas_arx_l
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AK5C";
		Scope=2;
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
				item="optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR_b";
			};
		};
	};
	
	class EUBG_NordicBG_AK5C_M203_F: arifle_mas_arx_l_gl
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AK5C M203";
		Scope=2;
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
				item="optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR_b";
			};
		};
	};
	
	class EUBG_NordicBG_RK62_F: arifle_mas_ak12_sf
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] RK62M";
		Scope=2;
	};

	class EUBG_NordicBG_RK62: EUBG_NordicBG_RK62_F
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
				item="optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR_b";
			};
		};
	};
	
	class EUBG_NordicBG_RK62_M203_F: arifle_mas_ak12_sf_gl
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] RK62TP";
		Scope=2;
	};

	class EUBG_NordicBG_RK62_M203: EUBG_NordicBG_RK62_M203_F
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
				item="optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR_b";
			};
		};
	};
	
	class EUBG_NordicBG_Pist88_F: hgun_mas_glock_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Pist 88";
		Scope=2;
	};
	
	class EUBG_NordicBG_Pist88: EUBG_NordicBG_Pist88_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Pist 88";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_flash_gun";
			};
		};
	};
	
	class EUBG_NordicBG_Ksp58_F: LMG_mas_m240_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Ksp 58Ksp 58";
		Scope=2;
	};
	
	class EUBG_NordicBG_Ksp58: EUBG_NordicBG_Ksp58_F
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
				item="optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR_b";
			};
		};
	};
	
	class EUBG_NordicBG_Ksp90_F: LMG_mas_m249_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Ksp 58Ksp 90";
		Scope=2;
	};
	
	class EUBG_NordicBG_Ksp90: EUBG_NordicBG_Ksp90_F
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
				item="optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR_b";
			};
		};
	};
	
	class EUBG_NordicBG_FV870_F: arifle_mas_m1014
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Förstärkningsvapen 870";
		Scope=2;
	};
	
	class EUBG_NordicBG_FV870: EUBG_NordicBG_FV870_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Förstärkningsvapen 870";
		Scope=1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	
	class EUBG_NordicBG_Psg90_F: srifle_mas_lrr
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Psg 90";
		Scope=2;
	};
	
	class EUBG_NordicBG_Psg90: EUBG_NordicBG_Psg90_F
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
				item="optic_mas_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR_b";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	
	class EUBG_NordicBG_AG90_F: srifle_mas_m107
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] AG 90 C";
		Scope=2;
	};
	
	class EUBG_NordicBG_AG90: EUBG_NordicBG_AG90_F
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
				item="optic_mas_zeiss_eo";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR_b";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	
	class EUBG_NordicBG_Pskottm86: mas_launch_M136_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Pskott m/86";
		Scope=2;
	};
	
	class EUBG_NordicBG_Grgm86: mas_launch_maaws_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] Grg m/86";
		Scope=2;
	};
	
	class EUBG_NordicBG_RBS56: mas_launch_TitanS_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] RBS 56";
		Scope=2;
	};
	
	class EUBG_NordicBG_RBS69: mas_launch_Stinger_F
	{
		dlc="NordicBG";
		author="OldDutchGamer";
		displayName="[EUBG] RBS 69 (Redeye)";
		Scope=2;
	};
};
