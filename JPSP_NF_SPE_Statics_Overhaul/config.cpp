#define _ARMA_

class CfgPatches
{
	class JPSP_NF_SPE_Statics_Overhaul
	{
		units[] = {};
        vehicles[] = {};
		weapons[] = {"JPSP_NF_45mm_static"};
		magazines[] = {"JPSP_Shell_UShch243_Shrapnel","JPSP_10x_Shell_UShch243_Shrapnel","JPSP_Shell_UO243_FRAG","JPSP_10x_Shell_UO243_FRAG"
		};
		requiredVersion = 1;
		requiredAddons[] = {"A3_UI_F","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","A3_Map_Stratis","A3_Data_F_Enoch_Loadorder","NORTH_StaticWeapons_cfg","JPSP_NF_SPE_Tank_Overhaul"};
		ammo[] = {};
	};
};

class CfgVehicles
{
	//Inherit start
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Hitpoints;
		class Turrets;
		class MainTurret;
	};
	class StaticMGWeapon: StaticWeapon{};
	class StaticCannon: StaticWeapon
	{
		class Hitpoints;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class NORTH_staticCannon: StaticCannon{};
	//Inherit end

	class NORTH_45pstk37: NORTH_staticCannon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				// SPE Components
				class Components
				{
					class VehicleSystemsTemplateLeftGunner;
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						forcedDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};

					class VehicleSystemsTemplateRightGunner;
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "AmmoDisplay";
						forcedDisplay = "AmmoDisplay";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};
				};

				weapons[] = {"JPSP_NF_45mm_static"};
				magazines[] = {"JPSP_10x_BR240_APHEBC","JPSP_10x_BR240_APHEBC","JPSP_10x_BR240_APHEBC","JPSP_10x_BR240_APHEBC","JPSP_10x_BR240_APHEBC",
					"JPSP_10x_BR240SP_APBC","JPSP_10x_BR240SP_APBC",
					"JPSP_10x_Shell_UShch243_Shrapnel",
					"JPSP_10x_Shell_UO243_FRAG","JPSP_10x_Shell_UO243_FRAG"
				};
			};
		};
	};
};

class CfgWeapons
{
	class SPE_M6_L53_base;
	class SPE_M6_L53;
	class SPE_M6_L53_HE_AI;
	class JPSP_NF_45mm_static: SPE_M6_L53
	{
		displayName = "45 mm 20K Obr. 1932-34";
		class MODE_AI_HE: SPE_M6_L53_HE_AI
		{
            displayName = "45 mm 20K Obr. 1932-34";
			magazines[] = {"JPSP_BR240_APHEBC", "JPSP_10x_BR240_APHEBC", "JPSP_BR240SP_APBC", "JPSP_10x_BR240SP_APBC", "JPSP_Shell_UShch243_Shrapnel", "JPSP_10x_Shell_UShch243_Shrapnel", "JPSP_Shell_UO243_FRAG", "JPSP_10x_Shell_UO243_FRAG"};
			magazineWell[] = {""};
		};
		class MODE_PLAYER_ALL: SPE_M6_L53_base
        {
            displayName = "45 mm 20K Obr. 1932-34";
			magazines[] = {"JPSP_BR240_APHEBC", "JPSP_10x_BR240_APHEBC", "JPSP_BR240SP_APBC", "JPSP_10x_BR240SP_APBC", "JPSP_Shell_UShch243_Shrapnel", "JPSP_10x_Shell_UShch243_Shrapnel", "JPSP_Shell_UO243_FRAG", "JPSP_10x_Shell_UO243_FRAG"};
			magazineWell[] = {""};
        };
	};
};

class cfgMagazines
{
	// Shrapnel
	class SPE_Shell_37L57_M2_Canister;
	class JPSP_Shell_UShch243_Shrapnel: SPE_Shell_37L57_M2_Canister
	{
		displayName = "UShch-243 (Shrapnel)";
		displayNameShort = "Shrapnel";
	};
	class JPSP_10x_Shell_UShch243_Shrapnel: JPSP_Shell_UShch243_Shrapnel
	{
		count = 10;
	};
	//Fragmentation
	class SPE_Shell_37L57_M63_HE;
	class JPSP_Shell_UO243_FRAG: SPE_Shell_37L57_M63_HE
	{
		displayName = "UO-243 (FRAG)";
		displayNameShort = "FRAG";
	};
	class JPSP_10x_Shell_UO243_FRAG: JPSP_Shell_UO243_FRAG
	{
		count = 10;
	};
};
