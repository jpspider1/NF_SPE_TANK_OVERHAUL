#define _ARMA_

class CfgPatches
{
	class JPSP_NF_SPE_German_Soviet_Rebalance
	{
		units[] = {};
        vehicles[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_UI_F","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","A3_Map_Stratis","A3_Data_F_Enoch_Loadorder","WW2_SPE_Assets_c_Vehicles_Weapons_c","WW2_SPE_Assets_c_Vehicles_AmmoParameters_c","JPSP_NF_SPE_Tank_Overhaul"};
		ammo[] = {};
	};
};

class CfgAmmo
{
    #define MACRO_CALIBER(mm,speed) caliber=(mm /((15 * speed)/1000));
    
	// Inherit
	class SPE_Shell_base;
	class SPE_ShellAPCR_base;
	class SPE_ammo_APHE_penetrator;
	class SPE_ammo_apcr_penetrator;

	// Panzer IV
	class SPE_PzGr39_KWK40_AP: SPE_Shell_base
	{
		hit = 205; //205
		// ALL deflecting values changed to 0 for tanks above the Panzer IV in lineage and 75mm barrel caliber
		deflecting = 0; //29
	};
	class SPE_PzGr39_KWK40_AP_penetrator: SPE_ammo_APHE_penetrator
	{
		hit = 205; //205
		// All mm values multipled by 1.25 due to NF modeling
        MACRO_CALIBER(186.25,792) //149mm 792m/s
		deflecting = 0; //29
	};

	class SPE_PzGr40_KWK40_APCR: SPE_ShellAPCR_base
	{
		hit = 215; //215
		deflecting = 0; //34
	};
	class SPE_PzGr40_KWK40_APCR_penetrator: SPE_ammo_apcr_penetrator
	{
		hit = 215; //215
		MACRO_CALIBER(251.25,989) //201mm 989m/s
		deflecting = 0; //34
	};
	// Panther
	class SPE_PzGr3942_KwK42_AP: SPE_Shell_base
	{
		hit = 230; //230
		deflecting = 0; //29
	};
	class SPE_PzGr3942_KwK42_AP_penetrator: SPE_ammo_APHE_penetrator
	{
		hit = 230; //230
		MACRO_CALIBER(236.25,935) //189mm 935/s
		deflecting = 0; //29
	};

	class SPE_PzGr4042_KwK42_APCR: SPE_ShellAPCR_base
	{
		hit = 240; //240
		deflecting = 0; //34
	};
	class SPE_PzGr4042_KwK42_APCR_penetrator: SPE_ammo_apcr_penetrator
	{
		hit = 240; //240
		MACRO_CALIBER(337.5,1120) //270mm 1120/s
		deflecting = 0; //34
	};
	// Tiger
	class SPE_PzGr39_KwK36_AP: SPE_Shell_base
	{
		hit = 235; //235
		deflecting = 0; //29
	};
	class SPE_PzGr39_KwK36_AP_penetrator: SPE_ammo_APHE_penetrator
	{
		hit = 235; //235
		MACRO_CALIBER(207.5,779) //166mm 779/s
		deflecting = 0; //29
	};
	
	class SPE_PzGr40_KwK36_APCR: SPE_ShellAPCR_base
	{
		hit = 250; //250
		deflecting = 0; //34
	};
	class SPE_PzGr40_KwK36_APCR_penetrator: SPE_ammo_apcr_penetrator
	{
		hit = 250; //250
		MACRO_CALIBER(275,930) //220mm 930/s
		deflecting = 0; //34
	};

	// Jagdpanther
	class SPE_PzGr43_AP: SPE_Shell_base
	{
		hit = 240; //240
		deflecting = 0; //29
	};
	class SPE_PzGr43_AP_penetrator: SPE_ammo_APHE_penetrator
	{
		hit = 240; //240
		MACRO_CALIBER(293.75,1000) //235mm 1000/s
		deflecting = 0; //29
	};

	class SPE_PzGr40_APCR: SPE_ShellAPCR_base
	{
		hit = 260; //260
		deflecting = 0; //34
	};
	class SPE_PzGr40_APCR_penetrator: SPE_ammo_apcr_penetrator
	{
		hit = 260; //260
		MACRO_CALIBER(386.25,1130) //309mm 1130/s
		deflecting = 0; //34
	};

	// Panzer III J, L, M
	class SPE_50mm_PzGr39_AP: SPE_Shell_base
	{
		hit = 195; //195
		deflecting = 14; //29
	};
	class SPE_50mm_PzGr39_AP_penetrator: SPE_ammo_APHE_penetrator
	{
		hit = 195; //195
		MACRO_CALIBER(131.25,834) //105mm 834/s
		deflecting = 14; //29
	};

	class SPE_50mm_PzGr40_APCR: SPE_ShellAPCR_base
	{
		hit = 195; //195
		deflecting = 17; //34
	};
	class SPE_50mm_PzGr40_APCR_penetrator: SPE_ammo_apcr_penetrator
	{
		hit = 195; //195
		MACRO_CALIBER(176.25,1198) //141mm 1198/s
		deflecting = 17; //34
	};

	// T-34-85 (and M10)
	class SPE_76mm_M7_M62_APHE: SPE_Shell_base
	{
		deflecting = 33.5; //29 x 1.5
	};
};
