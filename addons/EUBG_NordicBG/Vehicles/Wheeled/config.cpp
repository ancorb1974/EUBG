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

	class O_APC_Wheeled_02_rcws_F;
	class B_MRAP_01_F;
	class B_MRAP_01_hmg_F;
	class I_APC_Wheeled_03_cannon_F;
	class B_APC_Wheeled_01_cannon_F;

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
		hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Wheeled\patgB203\patgB203_body_S_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\patgB203\patgB203_wheels_S_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\patgB203\patgB203_turret_S_co.paa"};

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
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
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
		hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
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
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
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
		hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
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
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
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
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
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
		hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
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
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
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
		hiddenSelections[] = {"Camo1", "Camo2","Camo3","Camo4"};
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
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
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
		hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
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
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
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
		hiddenSelections[] = {"Camo1", "Camo2","Camo3"};
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
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=10;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
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