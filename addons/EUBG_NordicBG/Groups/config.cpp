class CfgPatches
{
	class EUBG_NordicBG_Groups
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F_BLUFOR","EUBG_Main"};
	};
};

class CfgGroups
{
	class West
	{
		class EUBG_Nordic_BG
		{
			name = "[EUBG] Nordic BattleGroup";
			class Infantry
			{
				name = "Infantry";

				class EUBG_Nordic_BG_grp_team_FIN
				{
					name = "(Finland) Fireteam";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_FIN_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_FIN_Rifleman";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_FIN_Medic";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_FIN_LAT";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_mmgteam
				{
					name = "(Sweden) Medium machinegun team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MMG";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MMG";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AMMO";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_atteam
				{
					name = "(Sweden) Anti-Tank team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LAT";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LAT";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_engineers
				{
					name = "(Sweden) Enginering team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_ENG";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_ENG";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_ENG";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_squad
				{
					name = "(Sweden) Rifle Squad";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_SL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Medic";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LMG";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Rifleman";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_GL";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LAT";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AMMO";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};
				};

				class EUBG_Nordic_BG_grp_matteam
				{
					name = "(Sweden) Medium Anti-Tank team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LAT";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_cmdr
				{
					name = "(Sweden) HQ team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Officer";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_SL";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Medic";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};
				};

				class EUBG_Nordic_BG_grp_aateam
				{
					name = "(Sweden) Anti-Air team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AA";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AA";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Rifleman";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_weaponsquad
				{
					name = "(Sweden) Weapons Squad";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_SL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Medic";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LMG";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LAT";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MM";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_GL";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AMMO";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};
				};

				class EUBG_Nordic_BG_grp_team_S
				{
					name = "(Sweden) Fireteam";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Rifleman";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LMG";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LAT";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_explosive
				{
					name = "(Sweden) Explosives team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Expl";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Expl";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Expl";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_sentry
				{
					name = "(Sweden) Sentry";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_GL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Rifleman";
						rank = "PRIVATE";
						position[] = { -5,-5,0 };
					};
				};

				class EUBG_Nordic_BG_grp_atteam_LV
				{
					name = "(Latvia) QRF Anti-Tank team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_LAT";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_LAT";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_MAT";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_engineers_LV
				{
					name = "(Latvia) QRF Enginering team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_ENG";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_ENG";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_ENG";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_squad_LV
				{
					name = "(Latvia) QRF Rifle Squad";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_SL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_TL";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_Medic";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_LMG";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_Rifleman";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_GL";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_LAT";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_AMMO";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};
				};

				class EUBG_Nordic_BG_grp_matteam_LV
				{
					name = "(Latvia) QRF Medium Anti-Tank team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_MAT";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_MAT";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_LAT";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_cmdr_LV
				{
					name = "(Latvia) QRF HQ team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_SL";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_TL";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_Medic";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};
				};

				class EUBG_Nordic_BG_grp_aateam_LV
				{
					name = "(Latvia) QRF Anti-Air team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_AA";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_AA";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_Rifleman";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_weaponsquad_LV
				{
					name = "(Latvia) QRF Weapons Squad";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_SL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_TL";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_Medic";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_LMG";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_LAT";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_MM";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_GL";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_AMMO";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};
				};

				class EUBG_Nordic_BG_grp_team_LV
				{
					name = "(Latvia) QRF Fireteam";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_Rifleman";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_LMG";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_LAT";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_explosive_LV
				{
					name = "(Latvia) QRF Explosives team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_Expl";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_Expl";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_Expl";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_sentry_LV
				{
					name = "(Latvia) QRF Sentry";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_GL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_LV_Rifleman";
						rank = "PRIVATE";
						position[] = { -5,-5,0 };
					};
				};
			};

			class Special_Forces
			{
				name = "Special Forces";

				class EUBG_Nordic_BG_grp_sf_sniper
				{
					name = "(Sweden) Sniper team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Spotter";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Sniper";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};
				};

				class EUBG_Nordic_BG_grp_sf_diver_demo
				{
					name = "(Sweden) Diver Demolition team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_Medic";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_Expl";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_Expl";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_sf_diver_recovery
				{
					name = "(Sweden) Diver Recovery team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_Medic";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_ENG";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_Operator";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_sf_diver_assault
				{
					name = "(Sweden) Diver assault team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_Medic";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_LMG";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Diver_Expl";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};
				};
			};
			class Motorized
			{
				name = "Motorized";

				class EUBG_Nordic_BG_grp_motor_hmg
				{
					name = "(Sweden) Motorized HMG Team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MMG";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_RG32_hmg";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MMG";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};
				};

				class EUBG_Nordic_BG_grp_motor_team
				{
					name = "(Sweden) Motorized Team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_SL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_RG32";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_RG32";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Medic";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LMG";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AMMO";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LAT";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};
				};

				class EUBG_Nordic_BG_grp_motor_aa
				{
					name = "(Sweden) Motorized Air-defence Team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AA";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_RG32";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AA";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};
				};

				class EUBG_Nordic_BG_grp_motor_hq
				{
					name = "(Sweden) Motorized HQ Team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Officer";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_RG32";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Medic";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};
				};

				class EUBG_Nordic_BG_grp_motor_recon
				{
					name = "(Sweden) Motorized Recon Team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_RG32";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};
				};

				class EUBG_Nordic_BG_grp_motor_at
				{
					name = "(Sweden) Motorized Anti-Tank Team";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_RG32";
						rank = "CORPORAL";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "PRIVATE";
						position[] = { 5,-5,0 };
					};
				};

			};
			class Mechanized
			{
				name = "Mechanized";


				class EUBG_Nordic_BG_grp_mech_support
				{
					name = "(Sweden) Mechanized Support Squad";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_SL";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_patgB203";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MMG";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MMG";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MM";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MM";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};
				};

				class EUBG_Nordic_BG_grp_mech_rifle
				{
					name = "(Sweden) Mechanized Rifle Squad";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_SL";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_patgB203";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Medic";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LMG";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit5
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Rifleman";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit6
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_GL";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

					class Unit7
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LAT";
						rank = "PRIVATE";
						position[] = { 20,-20,0 };
					};

					class Unit8
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AMMO";
						rank = "PRIVATE";
						position[] = { -25,-25,0 };
					};

					class Unit9
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MMG";
						rank = "PRIVATE";
						position[] = { 25,-25,0 };
					};
				};

				class EUBG_Nordic_BG_grp_mech_aa
				{
					name = "(Sweden) Mechanized Air-defence Squad";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_SL";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_patgB203";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AA";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AA";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Rifleman";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_mech_at
				{
					name = "(Sweden) Mechanized Anti-armor Squad";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_SL";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_patgB203";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};
				};

				class EUBG_Nordic_BG_grp_mech_supportheavy
				{
					name = "(Sweden) Mechanized Support Squad Heavy";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_SL";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_patgB360";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MMG";
						rank = "CORPORAL";
						position[] = { 5,-5,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MMG";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit5
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MAT";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit6
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MM";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit7
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MM";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};
				};

				class EUBG_Nordic_BG_grp_mech_rifleheavy
				{
					name = "(Sweden) Mechanized Rifle Squad Heavy";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_SL";
						rank = "LIEUTENANT";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_patgB360";
						rank = "SERGEANT";
						position[] = { -5,-5,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_TL";
						rank = "PRIVATE";
						position[] = { -10,-10,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Medic";
						rank = "PRIVATE";
						position[] = { 10,-10,0 };
					};

					class Unit4
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LMG";
						rank = "PRIVATE";
						position[] = { -15,-15,0 };
					};

					class Unit5
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_MMG";
						rank = "PRIVATE";
						position[] = { 15,-15,0 };
					};

					class Unit6
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_GL";
						rank = "PRIVATE";
						position[] = { -20,-20,0 };
					};

					class Unit7
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_LAT";
						rank = "PRIVATE";
						position[] = { 20,-20,0 };
					};

					class Unit8
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_AMMO";
						rank = "PRIVATE";
						position[] = { -25,-25,0 };
					};
				};
			};
			class Armor
			{
				name = "Armor";

				class EUBG_Nordic_BG_grp_armor_platoon
				{
					name = "(Sweden) Armor Platoon (Strf90)";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Strf90";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Strf90";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};

					class Unit2
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Strf90";
						rank = "SERGEANT";
						position[] = { 15,-15,0 };
					};

					class Unit3
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Strf90";
						rank = "CORPORAL";
						position[] = { -30,-30,0 };
					};
				};

				class EUBG_Nordic_BG_grp_armor_section
				{
					name = "(Sweden) Armor Section (Strf90)";
					side = "1";
					faction = "EUBG_Nordic_BG";
					rarityGroup = 0.5;
					icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

					class Unit0
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Strf90";
						rank = "CAPTAIN";
						position[] = { 0,0,0 };
					};

					class Unit1
					{
						side = 1;
						vehicle = "EUBG_Nordic_S_Strf90";
						rank = "LIEUTENANT";
						position[] = { -15,-15,0 };
					};
				};
			};
		};
	};
};