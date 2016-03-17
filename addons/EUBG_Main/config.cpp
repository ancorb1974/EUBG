class CfgPatches
{
	class EUBG_Main
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F_BLUFOR"};
	};
};
class CfgFactionClasses
{
	class EUBG_Nordic_BG
	{
		displayName="Nordic Battlegroup";
		icon="\EUBG_Main\logo\Icon\Icon_Nordic.jpg";
		priority=1;
		side=1;
	};
};

class CfgMods
{
	class Mod_Base;

	class EUBG: Mod_Base
	{
		action="https://en.wikipedia.org/wiki/EU_Battlegroup";
		author="OldDUtchGamer";
		dir="EUBG";
		dlcColor[]={0,0,0,1};
		fieldManualTopicAndHint[]={};
		hideName=1;
		hidePicture=0;
		logo="\EUBG_Main\logo\EUBG\EUBG.paa";
		logoOver="\EUBG_Main\logo\EUBG\EUBG_Overlay.paa";
		logoSmall="\EUBG_Main\logo\EUBG\EUBG_small.paa";
		name="Euro Battlegroup: Army of the European Union.";
		overview="Euro Battlegroup: Army of the European Union.";
		picture="\EUBG_Main\logo\EUBG\EUBG.paa";
		tooltip="EUBG";
		tooltipOwned="EUBG";
	};
	class NordicBG: Mod_Base
	{
		action="https://en.wikipedia.org/wiki/Nordic_Battlegroup";
		author="OldDUtchGamer";
		dir="NordicBG";
		dlcColor[]={0,0,0,1};
		fieldManualTopicAndHint[]={};
		hideName=1;
		hidePicture=0;
		logo="\EUBG_Main\logo\NordicBG\NordicBG.paa";
		logoOver="\EUBG_Main\logo\NordicBG\NordicBG_Overlay.paa";
		logoSmall="\EUBG_Main\logo\NordicBG\NordicBG_small.paa";
		name="Nordic Battlegroup: Ad omnia paratus.";
		overview="Nordic Battlegroup: Ad omnia paratus.";
		picture="\EUBG_Main\logo\NordicBG\NordicBG.paa";
		tooltip="NordicBG";
		tooltipOwned="NordicBG";
	};
};
class CfgMarkers
{
	class flag_USA;

	class EUBG_Marker: flag_USA
	{
		name="[EUBG] Euro BattleGroup";
		icon="\EUBG_Main\logo\EUBG\EUBG.paa";
	};

	class NLD_LowTac_Marker: flag_USA
	{
		name="[EUBG] Nordic BattleGroup";
		icon="\EUBG_Main\logo\NordicBG\NordicBG.paa";
	};

	class EUBG_Sweden: flag_USA
	{
		name="Sweden";
		icon="\EUBG_Main\logo\NordicBG\Sweden_Icon.paa";
	};

	class EUBG_Finland: flag_USA
	{
		name="Finland";
		icon="\EUBG_Main\logo\NordicBG\Finland_Icon.paa";
	};
};
class CfgVehicles
{
	class FlagCarrier;

	class EUBG_NordicBG_Sweden_Flag: FlagCarrier
	{
		displayName="Flag (Sweden)";
		scope=2;
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\EUBG_Main\logo\NordicBG\Sweden_Flag.paa""";
		};
	};

	class EUBG_NordicBG_Finland_Flag: FlagCarrier
	{
		displayName="Flag (Finland)";
		scope=2;
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\EUBG_Main\logo\NordicBG\Finland_Flag.paa""";
		};
	};

	class EUBG_NordicBG_Flag: FlagCarrier
	{
		displayName="Flag (NordicBG)";
		scope=2;
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\EUBG_Main\logo\NordicBG\NordicBG_Flag.paa""";
		};
	};
};

class cfgWorlds
{
	class GenericNames
	{
		class EUBG_NordicNames_S
		{
			class FirstNames
			{
				alexander="Alexander";
				anders="Anders";
				andreas="Andreas";
				bengt="Bengt";
				carl="Carl";
				daniel="Daniel";
				emil="Emil";
				erik="Erik";
				fredrik="Fredrik";
				gunnar="Gunnar";
				gustaf="Gustaf";
				hans="Hans";
				henrik="Henrik";
				ingvar="Ingvar";
				johan="Johan";
				kristian="Kristian";
				kristoffer="Kristoffer";
				lars="Lars";
				mattias="Mattias";
				mikael="Mikael";
				niklas="Niklas";
				olof="Olof";
				oskar="Oskar";
				petter="Petter";
				rikard="Rikard";
				samuel="Samuel";
				sten="Sten";
				sven="Sven";
				tobias="Tobias";
				tomas="Tomas";
				viktor="Viktor";
			};
			class LastNames
			{
				andersson="Andersson";
				bengtsson="Bengtsson";
				berglung="Berglund";
				bergman="Bergman";
				blomqvist="Blomqvist";
				borg="Borg";
				dahl="Dahl";
				eklund="Eklund";
				englund="Englund";
				eriksson="Eriksson";
				forsberg="Forsberg";
				haglund="Haglund";
				hallberg="Hallberg";
				holm="Holm";
				jansson="Jansson";
				johansson="Johansson";
				larsson="Larsson";
				lindahl="Lindahl";
				lindgren="Lindgren";
				lund="Lund";
				lundqvist="Lundqvist";
				moberg="Moberg";
				nilsson="Nilsson";
				norberg="Norberg";
				olsson="Olsson";
				pettersson="Pettersson";
				samuelsson="Samuelsson";
				sandberg="Sandberg";
				stenberg="Stenberg";
				sundgren="Sundgren";
				svensson="Svensson";
				viklund="Viklund";
			};
		};
	};
};