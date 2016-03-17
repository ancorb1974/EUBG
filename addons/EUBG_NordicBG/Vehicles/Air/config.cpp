class CfgPatches
{
	class EUBG_NordicBG_Air
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F_BLUFOR","EUBG_Main"};
	};
};
class CfgVehicles
{

	class B_Heli_Transport_01_camo_F;
	class O_Heli_Light_02_unarmed_F;
	class NH90;

	class EUBG_Nordic_S_hkp15: O_Heli_Light_02_unarmed_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "Hkp 15";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Air";
		crew = "EUBG_Nordic_S_HeliPilot";
		typicalCargo[] = {"EUBG_Nordic_S_HeliCrew"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Air\Hkp15\hkp15_body_S_grey_co.paa"};

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

	class EUBG_Nordic_S_hkp16: B_Heli_Transport_01_camo_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "Hkp 16";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Air";
		crew = "EUBG_Nordic_S_HeliPilot";
		typicalCargo[] = {"EUBG_Nordic_S_HeliCrew"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Air\Hkp16\hkp16_body_S_co.paa", "\EUBG_NordicBG\Vehicles\Air\Hkp16\hkp16_tail_S_co.paa", "\EUBG_NordicBG\Vehicles\Wheeled\PatriPasi\XA203_turret_S_co.paa"};

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

	class EUBG_Nordic_FIN_NH90: NH90
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "NH-90 (Finland)";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_FIN_Air";
		crew = "EUBG_Nordic_FIN_HeliPilot";
		typicalCargo[] = {"EUBG_Nordic_FIN_HeliPilot"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Air\NH90\NH90_outerhaul_FIN_co.paa","\EUBG_NordicBG\Vehicles\Air\NH90\NH90_uppertail_FIN_co.paa","\EUBG_NordicBG\Vehicles\Air\NH90\NH90_misc_FIN_co.paa","\EUBG_NordicBG\Vehicles\Air\NH90\NH90_doors_FIN_co.paa"};

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