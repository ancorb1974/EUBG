class CfgPatches
{
	class EUBG_NordicBG_Armored
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F_BLUFOR","EUBG_Main"};
	};
};
class CfgVehicles
{

	class I_APC_tracked_03_cannon_F;

	class EUBG_Nordic_S_Strf90: I_APC_tracked_03_cannon_F
	{
		dlc="NordicBG";
		author = "OldDutchGamer";
		scope = 2;
		displayName = "Stridsfordon 90";
		side = 1;
		faction="EUBG_Nordic_BG";
		vehicleClass="EUBG_Nordic_S_Armored";
		crew = "EUBG_Nordic_S_Crew";
		typicalCargo[] = {"EUBG_Nordic_S_Crew"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\EUBG_NordicBG\Vehicles\Armored\Stridsfordon90\Strf90_Turret_co.paa", "\EUBG_NordicBG\Vehicles\Armored\Stridsfordon90\Strf90_Body_co.paa"};

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