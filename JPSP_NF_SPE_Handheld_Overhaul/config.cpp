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

	class SPE_HEAT_Rocket_penetrator_Base;

	class SPE_PzFaust_30m_penetrator: SPE_HEAT_Rocket_penetrator_Base
	{
        MACRO_CALIBER(250,1000) //originally 200mm and 1000m/s in SPE. mm value multipled by 1.25
		hit = 250;
	};

	class SPE_PzFaust_60m_penetrator: SPE_HEAT_Rocket_penetrator_Base
	{
        MACRO_CALIBER(250,1000) //originally 200mm and 1000m/s in SPE. mm value multipled by 1.25
		hit = 250;
	};

	class SPE_R_88mm_RPzBGr_penetrator: SPE_HEAT_Rocket_penetrator_Base
	{
		MACRO_CALIBER(237.5,1000)  //originall 190mm and 1000m/s in SPEmm value multipled by 1.25
		hit = 250;
	};
};