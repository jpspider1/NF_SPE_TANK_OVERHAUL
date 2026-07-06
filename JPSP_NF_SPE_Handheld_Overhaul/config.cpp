#define _ARMA_

class CfgPatches
{
	class JPSP_NF_SPE_Handheld_Overhaul
	{
		units[] = {};
        vehicles[] = {};
		weapons[] = {""};
		magazines[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c"};
		ammo[] = {};
	};
};

class CfgAmmo
{
    #define MACRO_CALIBER(mm,speed) caliber=(mm /((15 * speed)/1000));

	class SPE_ammo_HEAT_penetrator;
	
	class SPE_G_PZGR_30_penetrator: SPE_ammo_HEAT_penetrator
	{
		caliber = "(50 /((15 * 1000)/1000))"; 
		MACRO_CALIBER(50,1000) //50mm 1000m/s
		hit = 95; //190
	};

	class SPE_G_PZGR_40_penetrator: SPE_ammo_HEAT_penetrator
	{
		MACRO_CALIBER(50,1000) //80mm 1000m/s
		hit = 105;
	};
};