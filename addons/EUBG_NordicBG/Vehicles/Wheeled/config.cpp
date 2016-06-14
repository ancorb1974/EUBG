class CfgPatches
{
	class EUBG_NordicBG_Wheeled
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F_BLUFOR","EUBG_Main"};
	};
};
class CfgVehicles
{

	class B_MRAP_01_F;
	class B_MRAP_01_hmg_F;
	class B_APC_Wheeled_01_cannon_F;
	class I_APC_Wheeled_03_cannon_F;
	class O_APC_Wheeled_02_rcws_F;
	class I_Truck_02_ammo_F;
	class I_Truck_02_box_F;
	class I_Truck_02_covered_F;
	class I_Truck_02_fuel_F;
	class I_Truck_02_medical_F;
	class I_Truck_02_transport_F;

	class EUBG_Nordic_S_PatgB203: O_APC_Wheeled_02_rcws_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "PatgB 203";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_Crew";
		typicalCargo[] = {"EUBG_Nordic_S_Crew"};
		textureList[] = {"",1};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"EUBG_NordicBG\Vehicles\Wheeled\PatgB203\PatgB203_body_S_co.paa", "EUBG_NordicBG\Vehicles\Wheeled\PatgB203\PatgB203_wheels_S_co.paa", "EUBG_NordicBG\Vehicles\Wheeled\PatgB203\PatgB203_turret_S_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
	
	class EUBG_Nordic_S_RG32: B_MRAP_01_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "RG-32";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_Rifleman";
		typicalCargo[] = {"EUBG_Nordic_S_Rifleman"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\RG32\rg32_body_S_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\RG32\rg32_wheels_S_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\patgB203\patgB203_turret_S_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_S_RG32_hmg: B_MRAP_01_hmg_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "RG-32 (Scout)";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_Rifleman";
		typicalCargo[] = {"EUBG_Nordic_S_Rifleman"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\RG32\rg32_body_S_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\RG32\rg32_wheels_S_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\patgB203\patgB203_turret_S_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_N_IvecoLMV: B_MRAP_01_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "Iveco LMV";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_N_Wheeled";
		crew = "EUBG_Nordic_N_Rifleman";
		typicalCargo[] = {"EUBG_Nordic_N_Rifleman"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\IvecoLMV\IvecoLMV_body_N_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\IvecoLMV\IvecoLMV_wheels_N_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_N_IvecoLMV_hmg: B_MRAP_01_hmg_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "Iveco LMV (Scout)";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_N_Wheeled";
		crew = "EUBG_Nordic_N_Rifleman";
		typicalCargo[] = {"EUBG_Nordic_N_Rifleman"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\IvecoLMV\IvecoLMV_body_N_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\IvecoLMV\IvecoLMV_wheels_N_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\IvecoLMV\IvecoLMV_Turret_N_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_S_PatgB360: B_APC_Wheeled_01_cannon_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "PatgB 360";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_Crew";
		typicalCargo[] = {"EUBG_Nordic_S_Crew"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\PatgB360\PatgB360_body_S_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\PatgB360\PatgB360_wheels_S_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\PatgB360\PatgB360_turret_S_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_S_Scania_Transport: I_Truck_02_transport_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		displayName="Scania (Transport)";
		side=1;
		scope=2;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_GL";
		typicalCargo[] = {"EUBG_Nordic_S_GL"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_front_co.paa","\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_covered_co.paa"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_S_Scania_Transport_Covered: I_Truck_02_covered_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		displayName="Scania (covered_";
		side=1;
		scope=2;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_GL";
		typicalCargo[] = {"EUBG_Nordic_S_GL"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_front_co.paa","\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_covered_co.paa"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_S_Scania_Fuel: I_Truck_02_fuel_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		displayName="Scania (Fuel)";
		side=1;
		scope=2;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_GL";
		typicalCargo[] = {"EUBG_Nordic_S_GL"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_front_co.paa","\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_fuel_co.paa"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_S_Scania_repair: I_Truck_02_box_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		displayName="Scania (Repair)";
		side=1;
		scope=2;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_ENG";
		typicalCargo[] = {"EUBG_Nordic_S_ENG"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_front_co.paa","\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_covered_co.paa"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_S_Scania_ammo: I_Truck_02_ammo_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		displayName="Scania (Ammo)";
		side=1;
		scope=2;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_GL";
		typicalCargo[] = {"EUBG_Nordic_S_GL"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_front_co.paa","\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_covered_co.paa"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_S_Scania_medical: I_Truck_02_medical_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		displayName="Scania (Medical)";
		side=1;
		scope=2;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_Medic";
		typicalCargo[] = {"EUBG_Nordic_S_Medic"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_front_co.paa","\EUBG_NordicBG\Vehicles\Wheeled\Scania\scania_covered_co.paa"};
		
		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
};


/*

	class EUBG_Nordic_S_PatgB203: O_APC_Wheeled_02_rcws_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "PatgB 203";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Wheeled";
		crew = "EUBG_Nordic_S_Crew";
		typicalCargo[] = {"EUBG_Nordic_S_Crew"};
		textureList[] = {"",1};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"EUBG_NordicBG\Vehicles\Wheeled\PatgB203\PatgB203_body_S_co.paa", "EUBG_NordicBG\Vehicles\Wheeled\PatgB203\PatgB203_wheels_S_co.paa", "EUBG_NordicBG\Vehicles\Wheeled\PatgB203\PatgB203_turret_S_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_IRL_Mowag: I_APC_Wheeled_03_cannon_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "Mowag Piranha III";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_IRL_Wheeled";
		crew = "EUBG_Nordic_S_Crew";
		typicalCargo[] = {"EUBG_Nordic_S_Crew"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\MowagPiranha\Mowag_body_IRL_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\MowagPiranha\Mowag_wheels_IRL_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\MowagPiranha\Mowag_turret_IRL_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\MowagPiranha\Mowag_alpha_IRL_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};

	class EUBG_Nordic_FIN_PatriaAMV: B_APC_Wheeled_01_cannon_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "Patria AMV";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_FIN_Wheeled";
		crew = "EUBG_Nordic_FIN_Crew";
		typicalCargo[] = {"EUBG_Nordic_FIN_Crew"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\patriaAMV\patria_body_FIN_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\patriaAMV\patria_wheels_FIN_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\patriaAMV\patria_turret_FIN_co.paa"};

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=5;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=10;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=25;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=10;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=10;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
		};
		class TransportWeapons {};
	};
*/