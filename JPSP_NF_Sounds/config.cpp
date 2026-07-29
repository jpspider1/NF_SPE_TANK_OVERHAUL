#define _ARMA_

class CfgPatches
{
	class JPSP_NF_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"NORTH_vehicles_cfg","WW2_SPE_Assets_c_Vehicles_SoundFrameWork_c","NORTH_transport_cfg"};
	};
};
class CfgSoundShaders
{
	class T34_Engine_RMP0_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine-001.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - 0))";
		volume = "engineOn * 0.7 * 2 * (rpm factor [0 *800, (0 *800 + 1 *(800-0 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2, 0])";
		range = 800;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP1_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine-002.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[0, (1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2])";
		range = 2000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP2_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine-003.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1600 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2])";
		range = 2000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP3_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine-004.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 2000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP4_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine-005.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 2000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP5_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine-006.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 2000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP0_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine-001.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - 0))";
		volume = "engineOn * 1 * 1.3 * (rpm factor [0 *800, (0 *800 + 1 *(800-0 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2, 0])";
		range = 128;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP1_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine-002.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[0, (1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2])";
		range = 128;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP2_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine-003.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1600 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2])";
		range = 134;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP3_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine-004.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 140;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP4_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine-005.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 146;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP5_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine-006.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 146;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_EngineBurst_EXT_SoundShader
	{
		samples[] = {{""}};
		frequency = 1;
		range = 300;
		volume = "engineOn * 0.7 * 0.7 * (rpm factor[0,10])";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T34_EngineBurst_INT_SoundShader
	{
		samples[] = {{""}};
		frequency = 1;
		range = 300;
		volume = "engineOn * 1 * 1 * (rpm factor[0,10])";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class T34_Tracks_Slow_EXT_SoundShader
	{
		frequency = "0.9 + (0.15 * ((abs(speed)) factor [0, 7]))";
		range = 380;
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Tracks-001.ogg",1}};
		volume = "(1 - CustomSoundController13) * ((abs(speed)) factor [ 0, 1]) * ((abs(speed)) factor [7, 5]) * (1 + (0.4 * (angvelocity factor [0.4,1.2])))";
		rangeCurve[] =
        {
            { 0, 1 },{ 0.1, 0.9 },{ 0.2, 0.8 },{ 0.3, 0.7 },{ 0.4, 0.6 },
            { 0.5, 0.5 },{ 0.6, 0.4 },{ 0.7, 0.3 },{ 0.8, 0.2 },{ 0.9, 0.1 },{ 1, 0 }
        };
	};
	class T34_Tracks_Mid_EXT_SoundShader
	{
		frequency = "0.8 + (0.3 * ((abs(speed)) factor [5, 13]))";
		range = 480;
		samples[] = {
			{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Tracks-002.ogg",1},
			{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Tracks-003.ogg",1}
		};
		volume = "(1 - CustomSoundController13) * ((abs(speed)) factor [ 5, 7]) * ((abs(speed)) factor [13, 10]) * (1 + (0.4 * (angvelocity factor [0.4,1.2])))";
		rangeCurve[] =
        {
            { 0, 1 },{ 0.1, 0.9 },{ 0.2, 0.8 },{ 0.3, 0.7 },{ 0.4, 0.6 },
            { 0.5, 0.5 },{ 0.6, 0.4 },{ 0.7, 0.3 },{ 0.8, 0.2 },{ 0.9, 0.1 },{ 1, 0 }
        };
	};
	class T34_Tracks_Fast_EXT_SoundShader
	{
		frequency = "0.8 + (0.4 * ((abs(speed)) factor [10, 20]))";
		range = 560;
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Tracks-004.ogg",1}};
		volume = "(1 - CustomSoundController13) * ((abs(speed)) factor [ 10, 13]) * (1 + (0.4 * (angvelocity factor [0.4,1.2])))";
		rangeCurve[] =
        {
            { 0, 1 },{ 0.1, 0.9 },{ 0.2, 0.8 },{ 0.3, 0.7 },{ 0.4, 0.6 },
            { 0.5, 0.5 },{ 0.6, 0.4 },{ 0.7, 0.3 },{ 0.8, 0.2 },{ 0.9, 0.1 },{ 1, 0 }
        };
	};

	class T34_Tracks_Slow_INT_SoundShader
	{
		frequency = "0.9 + (0.15 * ((abs(speed)) factor [0, 7]))";
		range = 200;
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Tracks-001.ogg",1}};
		volume = "0.55 * (1 - CustomSoundController13) * ((abs(speed)) factor [ 0, 1]) * ((abs(speed)) factor [7, 5]) * (1 + (0.4 * (angvelocity factor [0.4,1.2])))";
		rangeCurve[] =
        {
            { 0, 1 },{ 0.1, 0.9 },{ 0.2, 0.8 },{ 0.3, 0.7 },{ 0.4, 0.6 },
            { 0.5, 0.5 },{ 0.6, 0.4 },{ 0.7, 0.3 },{ 0.8, 0.2 },{ 0.9, 0.1 },{ 1, 0 }
        };
	};
	class T34_Tracks_Mid_INT_SoundShader
	{
		frequency = "0.8 + (0.3 * ((abs(speed)) factor [5, 13]))";
		range = 260;
		samples[] = {
			{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Tracks-002.ogg",1},
			{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Tracks-003.ogg",1}
		};
		volume = "0.55 * (1 - CustomSoundController13) * ((abs(speed)) factor [ 5, 7]) * ((abs(speed)) factor [13, 10]) * (1 + (0.4 * (angvelocity factor [0.4,1.2])))";
		rangeCurve[] =
        {
            { 0, 1 },{ 0.1, 0.9 },{ 0.2, 0.8 },{ 0.3, 0.7 },{ 0.4, 0.6 },
            { 0.5, 0.5 },{ 0.6, 0.4 },{ 0.7, 0.3 },{ 0.8, 0.2 },{ 0.9, 0.1 },{ 1, 0 }
        };
	};
	class T34_Tracks_Fast_INT_SoundShader
	{
		frequency = "0.8 + (0.4 * ((abs(speed)) factor [10, 20]))";
		range = 300;
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Tracks-004.ogg",1}};
		volume = "0.55 * (1 - CustomSoundController13) * ((abs(speed)) factor [ 10, 13]) * (1 + (0.4 * (angvelocity factor [0.4,1.2])))";
		rangeCurve[] =
        {
            { 0, 1 },{ 0.1, 0.9 },{ 0.2, 0.8 },{ 0.3, 0.7 },{ 0.4, 0.6 },
            { 0.5, 0.5 },{ 0.6, 0.4 },{ 0.7, 0.3 },{ 0.8, 0.2 },{ 0.9, 0.1 },{ 1, 0 }
        };
	};

	class T34_Exhaust_Idle_EXT_SoundShader
	{
		frequency = "0.9 + ( 0.10 * (rpm factor [0 , 750 ]))";
		range = 800;
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Exhasut-001.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.40 * engineOn * (rpm factor [ 0, 150]) * (rpm factor [ 750, 700 ]))";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	
	class T34_Exhaust_Slow_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 2000;
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Exhasut-002.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	
	class T34_Exhaust_Mid_EXT_SoundShader
	{
		frequency = "0.8 + ( 0.26 * (rpm factor [ 1100 , 2800 ]))";
		range = 2000;
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Exhasut-004.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.35 * engineOn * ((rpm factor [ 1100 , 1600 ]) * (rpm factor [ 2800, 2200 ])) max (((rpm factor [ 1100 , 1600 ]) * (rpm factor [ 2800 , 2200 ])) * (angVelocity factor [0.2,0.4])))";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	
	class T34_Exhaust_Fast_EXT_SoundShader
	{
		frequency = "0.8 + ( 0.30 * (rpm factor [ 2200 , 3000 ])) + (0.12 * ((abs(speed)) factor [9,13]))";
		range = 2000;
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Exhasut-006.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.45 * engineOn * (rpm factor [ 2200 , 2800 ]))";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class T34_Exhaust_Idle_INT_SoundShader
	{
		frequency = "0.9 + ( 0.10 * (rpm factor [0 , 750 ]))";
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Exhasut-001.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.20 * engineOn * (rpm factor [ 200, 700]) * (rpm factor [ 750, 700 ]))";
	};
	
	class T34_Exhaust_Slow_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Exhasut-002.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};
	
	class T34_Exhaust_Mid_INT_SoundShader
	{
		frequency = "0.8 + ( 0.26 * (rpm factor [ 1100 , 2800 ]))";
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Exhasut-004.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.35 * engineOn * ((rpm factor [ 1100 , 1600 ]) * (rpm factor [ 2800, 2200 ])) max (((rpm factor [ 1100 , 1600 ]) * (rpm factor [ 2800 , 2200 ])) * (angVelocity factor [0.2,0.4])))";
	};
	
	class T34_Exhaust_Fast_INT_SoundShader
	{
		frequency = "0.8 + ( 0.30 * (rpm factor [ 2200 , 3000 ])) + (0.12 * ((abs(speed)) factor [9,13]))";
		samples[] = {{"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Exhasut-006.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.45 * engineOn * (rpm factor [ 2200 , 2800 ]))";
	};
	// T70 //////////////////////////////////////////////////////////////////////////////////

	class T70_Engine_RMP0_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine-001.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - 0))";
		volume = "engineOn * 0.7 * 2 * (rpm factor [0 *800, (0 *800 + 1 *(800-0 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2, 0])";
		range = 400;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T70_Engine_RMP1_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine-002.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[0, (1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T70_Engine_RMP2_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine-003.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1600 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T70_Engine_RMP3_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine-004.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T70_Engine_RMP4_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine-005.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class T70_Engine_RMP5_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine-006.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T70_Engine_RMP6_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine-007.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class T70_Engine_RMP0_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine-001.ogg2",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - 0))";
		volume = "engineOn * 1 * 1.3 * (rpm factor [0 *800, (0 *800 + 1 *(800-0 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2, 0])";
		range = 128;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	
	class T70_Engine_RMP1_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine-002.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[0, (1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2])";
		range = 128;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T70_Engine_RMP2_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine-003.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1600 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2])";
		range = 134;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T70_Engine_RMP3_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine-004.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 140;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T70_Engine_RMP4_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine-005.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 146;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class T70_Engine_RMP5_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine-006.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 140;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T70_Engine_RMP6_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine-007.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 146;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class T70_EngineBurst_EXT_SoundShader
	{
		samples[] = {{""}};
		frequency = 1;
		range = 300;
		volume = "engineOn * 0.7 * 0.7 * (rpm factor[0,10])";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class T70_EngineBurst_INT_SoundShader
	{
		samples[] = {{""}};
		frequency = 1;
		range = 300;
		volume = "engineOn * 1 * 1 * (rpm factor[0,10])";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class T70_Exhaust_1_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 300;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Exhaust-001.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_2_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 400;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Exhaust-002.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_3_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 500;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Exhaust-003.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_4_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 600;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Exhaust-004.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_5_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 700;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Exhaust-005.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_6_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 800;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Exhaust-006.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_7_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 1000;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Exhaust-007.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};
	

	class T70_Exhaust_1_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 300;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Exhaust-001.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_2_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 400;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Exhaust-002.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_3_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 500;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Exhaust-003.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_4_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 600;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Exhaust-004.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_5_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 700;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Exhaust-005.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_6_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 800;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Exhaust-006.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class T70_Exhaust_7_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 1000;
		samples[] = {{"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Exhaust-007.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};


	// KV1 //////////////////////////////////////////////////////////////////////////////////

	class KV1_Engine_RMP0_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine-001.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - 0))";
		volume = "engineOn * 0.7 * 2 * (rpm factor [0 *800, (0 *800 + 1 *(800-0 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2, 0])";
		range = 400;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class KV1_Engine_RMP1_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine-002.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[0, (1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class KV1_Engine_RMP2_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine-003.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1600 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class KV1_Engine_RMP3_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine-004.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class KV1_Engine_RMP4_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine-005.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class KV1_Engine_RMP5_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine-006.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class KV1_Engine_RMP6_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine-007.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class KV1_Engine_RMP0_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Engine-001.ogg2",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - 0))";
		volume = "engineOn * 1 * 1.3 * (rpm factor [0 *800, (0 *800 + 1 *(800-0 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2, 0])";
		range = 128;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	
	class KV1_Engine_RMP1_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Engine-002.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[0, (1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2])";
		range = 128;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class KV1_Engine_RMP2_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Engine-003.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1600 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2])";
		range = 134;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class KV1_Engine_RMP3_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Engine-004.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 140;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class KV1_Engine_RMP4_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Engine-005.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 146;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class KV1_Engine_RMP5_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Engine-006.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 140;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class KV1_Engine_RMP6_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Engine-007.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 146;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class KV1_EngineBurst_EXT_SoundShader
	{
		samples[] = {{""}};
		frequency = 1;
		range = 300;
		volume = "engineOn * 0.7 * 0.7 * (rpm factor[0,10])";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class KV1_EngineBurst_INT_SoundShader
	{
		samples[] = {{""}};
		frequency = 1;
		range = 300;
		volume = "engineOn * 1 * 1 * (rpm factor[0,10])";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class KV1_Exhaust_1_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 300;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Exhaust-001.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_2_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 400;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Exhaust-002.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_3_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 500;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Exhaust-003.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_4_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 600;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Exhaust-004.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_5_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 700;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Exhaust-005.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_6_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 800;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Exhaust-006.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_7_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 1000;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Exhaust-007.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};
	

	class KV1_Exhaust_1_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 300;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Exhaust-001.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_2_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 400;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Exhaust-002.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_3_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 500;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Exhaust-003.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_4_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 600;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Exhaust-004.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_5_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 700;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Exhaust-005.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_6_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 800;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Exhaust-006.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class KV1_Exhaust_7_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 1000;
		samples[] = {{"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Interior_Exhaust-007.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	// BA10 //////////////////////////////////////////////////////////////////////////////////

	class BA10_Engine_RMP0_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Engine_Exterior-001.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - 0))";
		volume = "engineOn * 0.7 * 2 * (rpm factor [0 *800, (0 *800 + 1 *(800-0 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2, 0])";
		range = 400;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class BA10_Engine_RMP1_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Engine_Exterior-002.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[0, (1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class BA10_Engine_RMP2_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Engine_Exterior-003.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1600 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class BA10_Engine_RMP3_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Engine_Exterior-004.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class BA10_Engine_RMP4_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Engine_Exterior-005.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class BA10_Engine_RMP5_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Engine_Exterior-006.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class BA10_Engine_RMP6_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Engine_Exterior-007.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class BA10_Engine_RMP0_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Engine_Interior-001.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - 0))";
		volume = "engineOn * 1 * 1.3 * (rpm factor [0 *800, (0 *800 + 1 *(800-0 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2, 0])";
		range = 128;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	
	class BA10_Engine_RMP1_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Engine_Interior-002.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[0, (1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2])";
		range = 128;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class BA10_Engine_RMP2_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Engine_Interior-003.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1600 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2])";
		range = 134;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class BA10_Engine_RMP3_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Engine_Interior-004.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 140;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class BA10_Engine_RMP4_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Engine_Interior-005.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 146;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class BA10_Engine_RMP5_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Engine_Interior-006.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 140;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class BA10_Engine_RMP6_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Engine_Interior-007.ogg",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 146;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class BA10_EngineBurst_EXT_SoundShader
	{
		samples[] = {{""}};
		frequency = 1;
		range = 300;
		volume = "engineOn * 0.7 * 0.7 * (rpm factor[0,10])";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};
	class BA10_EngineBurst_INT_SoundShader
	{
		samples[] = {{""}};
		frequency = 1;
		range = 300;
		volume = "engineOn * 1 * 1 * (rpm factor[0,10])";
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.8 },
            { 0.3, 0.7 },
            { 0.4, 0.6 },
            { 0.5, 0.5 },
            { 0.6, 0.4 },
            { 0.7, 0.3 },
            { 0.8, 0.2 },
            { 0.9, 0.1 },
            { 1, 0 }
        };
	};

	class BA10_Exhaust_1_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 300;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Exhaust_Exterior-001.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_2_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 400;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Exhaust_Exterior-002.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_3_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 500;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Exhaust_Exterior-003.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_4_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 600;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Exhaust_Exterior-004.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_5_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 700;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Exhaust_Exterior-005.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_6_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 800;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Exhaust_Exterior-006.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_7_EXT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 1000;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Exhaust_Exterior-007.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};
	

	class BA10_Exhaust_1_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 300;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Exhaust_Interior-001.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_2_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 400;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Exhaust_Interior-002.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_3_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 500;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Exhaust_Interior-003.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_4_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 600;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Exhaust_Interior-004.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_5_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 700;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Exhaust_Interior-005.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_6_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 800;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Exhaust_Interior-006.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

	class BA10_Exhaust_7_INT_SoundShader
	{
		frequency = "0.8 + ((0.23 * (rpm factor [ 700 , 1600 ])) max (0.3 * (angVelocity factor [0,1])))";
		range = 1000;
		samples[] = {{"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Exhaust_Interior-007.ogg",1}};
		volume = "(1 - CustomSoundController13) * (1.25 * engineOn * ((rpm factor [ 700, 750 ]) * (rpm factor [ 1600 , 1100 ])) max (((rpm factor [ 700 , 750 ]) * (rpm factor [ 1600 , 1100 ])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2])))";
	};

};
class Engine_Base_RPM0_EXT_SoundSet;
class Engine_Base_RPM0_INT_SoundSet;
class CfgSoundSets
{
	class T34_Engine_RMP0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP0_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = "2.25 * 0.555";
	};
	class T34_Engine_RMP1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP1_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = "2.25 * 0.70";
	};
	class T34_Engine_RMP2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP2_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = "2.25 * 0.80";
	};
	class T34_Engine_RMP3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP3_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = "2.25 * 0.80";
	};
	class T34_Engine_RMP4_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP4_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = "2.25 * 0.90";
	};
	class T34_Engine_RMP5_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP5_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = "2.25 * 1.00";
	};
	class T34_EngineBurst_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_EngineBurst_EXT_SoundShader"};
		volumeFactor = 1;
		playTrigger = "thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1";
		spatial = 1;
		loop = 0;
	};
	class T34_Engine_RMP0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP0_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1;
	};
	class T34_Engine_RMP1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP1_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.15;
	};
	class T34_Engine_RMP2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP2_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class T34_Engine_RMP3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP3_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class T34_Engine_RMP4_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP4_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class T34_Engine_RMP5_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP5_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class T34_EngineBurst_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T34_EngineBurst_INT_SoundShader"};
		volumeFactor = 1.1;
		playTrigger = "thrust - 0.1";
		spatial = 1;
		loop = 0;
	};


	class T34_Tracks_Slow_EXT_SoundSet
	{
		soundShaders[] = {"T34_Tracks_Slow_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		volumeFactor = 1;
		spatial = 1;
		loop = 1;
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		doppler = 1;
		obstructionFactor = 0.3;
		occlusionFactor = 0.5;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.7,-0.75};
		volumeCurve = "InverseSquare3Curve";
	};
	class T34_Tracks_Mid_EXT_SoundSet
	{
		soundShaders[] = {"T34_Tracks_Mid_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		volumeFactor = 1;
		spatial = 1;
		loop = 1;
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		doppler = 1;
		obstructionFactor = 0.3;
		occlusionFactor = 0.5;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.7,-0.75};
		volumeCurve = "InverseSquare3Curve";
	};
	class T34_Tracks_Fast_EXT_SoundSet
	{
		soundShaders[] = {"T34_Tracks_Fast_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		volumeFactor = 1;
		spatial = 1;
		loop = 1;
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		doppler = 1;
		obstructionFactor = 0.3;
		occlusionFactor = 0.5;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.7,-0.75};
		volumeCurve = "InverseSquare3Curve";
	};


	class T34_Tracks_Slow_INT_SoundSet
	{
		soundShaders[] = {"T34_Tracks_Slow_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		volumeFactor = 1;
		spatial = 1;
		loop = 1;
	};
	class T34_Tracks_Mid_INT_SoundSet
	{
		soundShaders[] = {"T34_Tracks_Mid_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		volumeFactor = 1;
		spatial = 1;
		loop = 1;
	};
	class T34_Tracks_Fast_INT_SoundSet
	{
		soundShaders[] = {"T34_Tracks_Fast_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		volumeFactor = 1;
		spatial = 1;
		loop = 1;
	};

	class T34_Exhaust_Idle_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T34_Exhaust_Idle_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};
	
	class T34_Exhaust_Slow_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T34_Exhaust_Slow_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;	
	};
	
	class T34_Exhaust_Mid_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T34_Exhaust_Mid_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};
	
	class T34_Exhaust_Fast_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T34_Exhaust_Fast_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	
	class T34_Exhaust_Idle_INT_SoundSet
	{
		loop = 1;
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		soundShaders[] = {"T34_Exhaust_Idle_INT_SoundShader"};
		spatial = 0;
		volumeFactor = 0.7;
	};
	
	class T34_Exhaust_Slow_INT_SoundSet
	{
		loop = 1;
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		soundShaders[] = {"T34_Exhaust_Slow_INT_SoundShader"};
		spatial = 0;
		volumeFactor = 0.7;
	};
	
	class T34_Exhaust_Mid_INT_SoundSet
	{
		loop = 1;
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		soundShaders[] = {"T34_Exhaust_Mid_INT_SoundShader"};
		spatial = 0;
		volumeFactor = 0.7;
	};
	
	class T34_Exhaust_Fast_INT_SoundSet
	{
		loop = 1;
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		soundShaders[] = {"T34_Exhaust_Fast_INT_SoundShader"};
		spatial = 0;
		volumeFactor = 0.7;
	};
	// T70 //////////////////////////////////////////////////////////////////////////////////////

	class T70_Engine_RMP0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP0_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1;
	};
	class T70_Engine_RMP1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP1_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.1;
	};
	class T70_Engine_RMP2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP2_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.2;
	};
	class T70_Engine_RMP3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP3_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class T70_Engine_RMP4_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP4_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0,0,-4};
		volumeFactor = 1.4;
	};
	class T70_Engine_RMP5_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP5_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.5;
	};
	class T70_Engine_RMP6_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP6_EXT_SoundShader"};
		volumeFactor = 1.6;
		spatial = 1;
		loop = 1;
	};

	class T70_EngineBurst_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T70_EngineBurst_EXT_SoundShader"};
		volumeFactor = 1;
		playTrigger = "thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1";
		spatial = 1;
		loop = 0;
	};
	class T70_Engine_RMP0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP0_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1;
	};
	class T70_Engine_RMP1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP1_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.15;
	};
	class T70_Engine_RMP2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP2_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class T70_Engine_RMP3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP3_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class T70_Engine_RMP4_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP4_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};

	class T70_Engine_RMP5_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP5_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class T70_Engine_RMP6_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T70_Engine_RMP6_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};

	class T70_EngineBurst_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T70_EngineBurst_INT_SoundShader"};
		volumeFactor = 1.1;
		playTrigger = "thrust - 0.1";
		spatial = 1;
		loop = 0;
	};

	class T70_Exhaust_1_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_1_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_2_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_2_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_3_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_3_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_4_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_4_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_5_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_5_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_6_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_6_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_7_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_7_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	
	class T70_Exhaust_1_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_1_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_2_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_2_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_3_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_3_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_4_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_4_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_5_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_5_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_6_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_6_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class T70_Exhaust_7_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"T70_Exhaust_7_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	// KV1 //////////////////////////////////////////////////////////////////////////////////////

	class KV1_Engine_RMP0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP0_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1;
	};
	class KV1_Engine_RMP1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP1_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.1;
	};
	class KV1_Engine_RMP2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP2_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.2;
	};
	class KV1_Engine_RMP3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP3_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class KV1_Engine_RMP4_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP4_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0,0,-4};
		volumeFactor = 1.4;
	};
	class KV1_Engine_RMP5_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP5_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.5;
	};
	class KV1_Engine_RMP6_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP6_EXT_SoundShader"};
		volumeFactor = 1.6;
		spatial = 1;
		loop = 1;
	};

	class KV1_EngineBurst_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"KV1_EngineBurst_EXT_SoundShader"};
		volumeFactor = 1;
		playTrigger = "thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1";
		spatial = 1;
		loop = 0;
	};
	class KV1_Engine_RMP0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP0_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1;
	};
	class KV1_Engine_RMP1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP1_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.15;
	};
	class KV1_Engine_RMP2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP2_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class KV1_Engine_RMP3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP3_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class KV1_Engine_RMP4_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP4_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};

	class KV1_Engine_RMP5_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP5_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class KV1_Engine_RMP6_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"KV1_Engine_RMP6_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};

	class KV1_EngineBurst_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"KV1_EngineBurst_INT_SoundShader"};
		volumeFactor = 1.1;
		playTrigger = "thrust - 0.1";
		spatial = 1;
		loop = 0;
	};

	class KV1_Exhaust_1_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_1_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_2_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_2_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_3_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_3_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_4_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_4_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_5_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_5_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_6_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_6_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_7_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_7_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	
	class KV1_Exhaust_1_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_1_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_2_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_2_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_3_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_3_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_4_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_4_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_5_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_5_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_6_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_6_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class KV1_Exhaust_7_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"KV1_Exhaust_7_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	// BA10 //////////////////////////////////////////////////////////////////////////////////////

	class BA10_Engine_RMP0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP0_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1;
	};
	class BA10_Engine_RMP1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP1_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.1;
	};
	class BA10_Engine_RMP2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP2_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.2;
	};
	class BA10_Engine_RMP3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP3_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class BA10_Engine_RMP4_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP4_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
        posOffset[] = {0,0,-4};
		volumeFactor = 1.4;
	};
	class BA10_Engine_RMP5_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP5_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.5;
	};
	class BA10_Engine_RMP6_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP6_EXT_SoundShader"};
		volumeFactor = 1.6;
		spatial = 1;
		loop = 1;
	};

	class BA10_EngineBurst_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"BA10_EngineBurst_EXT_SoundShader"};
		volumeFactor = 1;
		playTrigger = "thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1";
		spatial = 1;
		loop = 0;
	};
	class BA10_Engine_RMP0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP0_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1;
	};
	class BA10_Engine_RMP1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP1_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.15;
	};
	class BA10_Engine_RMP2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP2_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class BA10_Engine_RMP3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP3_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class BA10_Engine_RMP4_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP4_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};

	class BA10_Engine_RMP5_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP5_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class BA10_Engine_RMP6_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"BA10_Engine_RMP6_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};

	class BA10_EngineBurst_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"BA10_EngineBurst_INT_SoundShader"};
		volumeFactor = 1.1;
		playTrigger = "thrust - 0.1";
		spatial = 1;
		loop = 0;
	};

	class BA10_Exhaust_1_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_1_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_2_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_2_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_3_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_3_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_4_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_4_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_5_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_5_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_6_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_6_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_7_EXT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_7_EXT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	
	class BA10_Exhaust_1_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_1_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_2_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_2_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_3_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_3_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_4_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_4_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_5_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_5_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_6_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_6_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

	class BA10_Exhaust_7_INT_SoundSet
	{
		distanceFilter = "SPE_defaultVehicleDistanceFilter";
		loop = 1;
		obstructionFactor = 0.2;
		occlusionFactor = 0.2;
		occlusionObstruction = 1;
		posOffset[] = {0,-1.8,0};
		shape = "SPE_tank_exhaust_rearSemispace";
		sound3DProcessingType = "SPE_tank_exhaust_ext_3DProcessingType";
		soundShaders[] = {"BA10_Exhaust_7_INT_SoundShader"};
		spatial = 1;
		volumeCurve = "InverseSquare2Curve";
		volumeFactor = 0.7;
	};

};
class CfgVehicles
{
	class NORTH_Tank_Base;
	class NORTH_Truck_base;

	class NORTH_FIN_T34_76_1941: NORTH_Tank_Base
	{
		soundEngineOnInt[] = {"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine_On-001.ogg",0.63095737,1.0};
		soundEngineOnExt[] = {"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine_On-001.ogg",0.7943282,1.0,200};

		soundEngineOffInt[] = {"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine_Off-001.ogg",0.63095737,1.0};
		soundEngineOffExt[] = {"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine_Off-001.ogg",0.7943282,1.0,200};

		class Sounds
		{
			soundSetsInt[] = {
				"T34_Engine_RMP0_INT_SoundSet","T34_Engine_RMP1_INT_SoundSet","T34_Engine_RMP2_INT_SoundSet","T34_Engine_RMP3_INT_SoundSet","T34_Engine_RMP4_INT_SoundSet","T34_Engine_RMP5_INT_SoundSet","T34_EngineBurst_INT_SoundSet",
				"T34_Exhaust_Idle_INT_SoundSet","T34_Exhaust_Slow_INT_SoundSet","T34_Exhaust_Mid_INT_SoundSet","T34_Exhaust_Fast_INT_SoundSet",
				"T34_Tracks_Slow_INT_SoundSet","T34_Tracks_Mid_INT_SoundSet","T34_Tracks_Fast_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {
				"T34_Engine_RMP0_EXT_SoundSet","T34_Engine_RMP1_EXT_SoundSet","T34_Engine_RMP2_EXT_SoundSet","T34_Engine_RMP3_EXT_SoundSet","T34_Engine_RMP4_EXT_SoundSet","T34_Engine_RMP5_EXT_SoundSet","T34_EngineBurst_EXT_SoundSet",
				"T34_Exhaust_Idle_EXT_SoundSet","T34_Exhaust_Slow_EXT_SoundSet","T34_Exhaust_Mid_EXT_SoundSet","T34_Exhaust_Fast_EXT_SoundSet",
				"T34_Tracks_Slow_EXT_SoundSet","T34_Tracks_Mid_EXT_SoundSet","T34_Tracks_Fast_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};
	class NORTH_FIN_T34_76_1943: NORTH_Tank_Base
    {
		soundEngineOnInt[] = {"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine_On-001.ogg",0.63095737,1.0};
		soundEngineOnExt[] = {"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine_On-001.ogg",0.7943282,1.0,200};

		soundEngineOffInt[] = {"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine_Off-001.ogg",0.63095737,1.0};
		soundEngineOffExt[] = {"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine_Off-001.ogg",0.7943282,1.0,200};

		class Sounds
		{
			soundSetsInt[] = {
				"T34_Engine_RMP0_INT_SoundSet","T34_Engine_RMP1_INT_SoundSet","T34_Engine_RMP2_INT_SoundSet","T34_Engine_RMP3_INT_SoundSet","T34_Engine_RMP4_INT_SoundSet","T34_Engine_RMP5_INT_SoundSet","T34_EngineBurst_INT_SoundSet",
				"T34_Exhaust_Idle_INT_SoundSet","T34_Exhaust_Slow_INT_SoundSet","T34_Exhaust_Mid_INT_SoundSet","T34_Exhaust_Fast_INT_SoundSet",
				"T34_Tracks_Slow_INT_SoundSet","T34_Tracks_Mid_INT_SoundSet","T34_Tracks_Fast_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {
				"T34_Engine_RMP0_EXT_SoundSet","T34_Engine_RMP1_EXT_SoundSet","T34_Engine_RMP2_EXT_SoundSet","T34_Engine_RMP3_EXT_SoundSet","T34_Engine_RMP4_EXT_SoundSet","T34_Engine_RMP5_EXT_SoundSet","T34_EngineBurst_EXT_SoundSet",
				"T34_Exhaust_Idle_EXT_SoundSet","T34_Exhaust_Slow_EXT_SoundSet","T34_Exhaust_Mid_EXT_SoundSet","T34_Exhaust_Fast_EXT_SoundSet",
				"T34_Tracks_Slow_EXT_SoundSet","T34_Tracks_Mid_EXT_SoundSet","T34_Tracks_Fast_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};
	class NORTH_FIN_T34_85_45: NORTH_Tank_Base
    {
		soundEngineOnInt[] = {"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine_On-001.ogg",0.63095737,1.0};
		soundEngineOnExt[] = {"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine_On-001.ogg",0.7943282,1.0,200};

		soundEngineOffInt[] = {"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine_Off-001.ogg",0.63095737,1.0};
		soundEngineOffExt[] = {"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine_Off-001.ogg",0.7943282,1.0,200};

		class Sounds
		{
			soundSetsInt[] = {
				"T34_Engine_RMP0_INT_SoundSet","T34_Engine_RMP1_INT_SoundSet","T34_Engine_RMP2_INT_SoundSet","T34_Engine_RMP3_INT_SoundSet","T34_Engine_RMP4_INT_SoundSet","T34_Engine_RMP5_INT_SoundSet","T34_EngineBurst_INT_SoundSet",
				"T34_Exhaust_Idle_INT_SoundSet","T34_Exhaust_Slow_INT_SoundSet","T34_Exhaust_Mid_INT_SoundSet","T34_Exhaust_Fast_INT_SoundSet",
				"T34_Tracks_Slow_INT_SoundSet","T34_Tracks_Mid_INT_SoundSet","T34_Tracks_Fast_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {
				"T34_Engine_RMP0_EXT_SoundSet","T34_Engine_RMP1_EXT_SoundSet","T34_Engine_RMP2_EXT_SoundSet","T34_Engine_RMP3_EXT_SoundSet","T34_Engine_RMP4_EXT_SoundSet","T34_Engine_RMP5_EXT_SoundSet","T34_EngineBurst_EXT_SoundSet",
				"T34_Exhaust_Idle_EXT_SoundSet","T34_Exhaust_Slow_EXT_SoundSet","T34_Exhaust_Mid_EXT_SoundSet","T34_Exhaust_Fast_EXT_SoundSet",
				"T34_Tracks_Slow_EXT_SoundSet","T34_Tracks_Mid_EXT_SoundSet","T34_Tracks_Fast_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};
	class NORTH_FIN_T34_85: NORTH_Tank_Base
    {
		soundEngineOnInt[] = {"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine_On-001.ogg",0.63095737,1.0};
		soundEngineOnExt[] = {"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine_On-001.ogg",0.7943282,1.0,200};

		soundEngineOffInt[] = {"JPSP_NF_Sounds\sounds\T34\Int\T-34_Interior_Engine_Off-001.ogg",0.63095737,1.0};
		soundEngineOffExt[] = {"JPSP_NF_Sounds\sounds\T34\Ext\T-34_Exterior_Engine_Off-001.ogg",0.7943282,1.0,200};

		class Sounds
		{
			soundSetsInt[] = {
				"T34_Engine_RMP0_INT_SoundSet","T34_Engine_RMP1_INT_SoundSet","T34_Engine_RMP2_INT_SoundSet","T34_Engine_RMP3_INT_SoundSet","T34_Engine_RMP4_INT_SoundSet","T34_Engine_RMP5_INT_SoundSet","T34_EngineBurst_INT_SoundSet",
				"T34_Exhaust_Idle_INT_SoundSet","T34_Exhaust_Slow_INT_SoundSet","T34_Exhaust_Mid_INT_SoundSet","T34_Exhaust_Fast_INT_SoundSet",
				"T34_Tracks_Slow_INT_SoundSet","T34_Tracks_Mid_INT_SoundSet","T34_Tracks_Fast_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {
				"T34_Engine_RMP0_EXT_SoundSet","T34_Engine_RMP1_EXT_SoundSet","T34_Engine_RMP2_EXT_SoundSet","T34_Engine_RMP3_EXT_SoundSet","T34_Engine_RMP4_EXT_SoundSet","T34_Engine_RMP5_EXT_SoundSet","T34_EngineBurst_EXT_SoundSet",
				"T34_Exhaust_Idle_EXT_SoundSet","T34_Exhaust_Slow_EXT_SoundSet","T34_Exhaust_Mid_EXT_SoundSet","T34_Exhaust_Fast_EXT_SoundSet",
				"T34_Tracks_Slow_EXT_SoundSet","T34_Tracks_Mid_EXT_SoundSet","T34_Tracks_Fast_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};

	class NORTH_SOV_T70: NORTH_Tank_Base
	{

		soundEngineOnInt[] = {"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine_Start-001.ogg",0.63095737,1.0};
		soundEngineOnExt[] = {"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine_Start-001.ogg",0.7943282,1.0,200};

		soundEngineOffInt[] = {"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine_Stop-001.ogg",0.63095737,1.0};
		soundEngineOffExt[] = {"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine_Stop-001.ogg",0.7943282,1.0,200};

		class Sounds
		{
			soundSetsInt[] = {
				"T70_Engine_RMP0_INT_SoundSet",
				"T70_Engine_RMP1_INT_SoundSet",
				"T70_Engine_RMP2_INT_SoundSet",
				"T70_Engine_RMP3_INT_SoundSet",
				"T70_Engine_RMP4_INT_SoundSet",
				"T70_Engine_RMP5_INT_SoundSet",
				"T70_Engine_RMP6_INT_SoundSet",
				"T70_EngineBurst_INT_SoundSet",
				"T34_Tracks_Slow_INT_SoundSet","T34_Tracks_Mid_INT_SoundSet","T34_Tracks_Fast_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {
				"T70_Engine_RMP0_EXT_SoundSet",
				"T70_Engine_RMP1_EXT_SoundSet",
				"T70_Engine_RMP2_EXT_SoundSet",
				"T70_Engine_RMP3_EXT_SoundSet",
				"T70_Engine_RMP4_EXT_SoundSet",
				"T70_Engine_RMP5_EXT_SoundSet",
				"T70_Engine_RMP6_EXT_SoundSet",
				"T70_EngineBurst_EXT_SoundSet",
				"T34_Tracks_Slow_EXT_SoundSet","T34_Tracks_Mid_EXT_SoundSet","T34_Tracks_Fast_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};

	class NORTH_SOV_T60: NORTH_Tank_Base
	{

		soundEngineOnInt[] = {"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine_Start-001.ogg",0.63095737,1.0};
		soundEngineOnExt[] = {"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine_Start-001.ogg",0.7943282,1.0,200};

		soundEngineOffInt[] = {"JPSP_NF_Sounds\sounds\T70\Int\T-70_Interior_Engine_Stop-001.ogg",0.63095737,1.0};
		soundEngineOffExt[] = {"JPSP_NF_Sounds\sounds\T70\Ext\T-70_Exterior_Engine_Stop-001.ogg",0.7943282,1.0,200};

		class Sounds
		{
			soundSetsInt[] = {
				"T70_Engine_RMP0_INT_SoundSet",
				"T70_Engine_RMP1_INT_SoundSet",
				"T70_Engine_RMP2_INT_SoundSet",
				"T70_Engine_RMP3_INT_SoundSet",
				"T70_Engine_RMP4_INT_SoundSet",
				"T70_Engine_RMP5_INT_SoundSet",
				"T70_Engine_RMP6_INT_SoundSet",
				"T70_EngineBurst_INT_SoundSet",
				"T70_Exhaust_1_INT_SoundSet",
				"T70_Exhaust_2_INT_SoundSet",
				"T70_Exhaust_3_INT_SoundSet",
				"T70_Exhaust_4_INT_SoundSet",
				"T70_Exhaust_5_INT_SoundSet",
				"T70_Exhaust_6_INT_SoundSet",
				"T70_Exhaust_7_INT_SoundSet",
				"T34_Tracks_Slow_INT_SoundSet","T34_Tracks_Mid_INT_SoundSet","T34_Tracks_Fast_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {
				"T70_Engine_RMP0_EXT_SoundSet",
				"T70_Engine_RMP1_EXT_SoundSet",
				"T70_Engine_RMP2_EXT_SoundSet",
				"T70_Engine_RMP3_EXT_SoundSet",
				"T70_Engine_RMP4_EXT_SoundSet",
				"T70_Engine_RMP5_EXT_SoundSet",
				"T70_Engine_RMP6_EXT_SoundSet",
				"T70_EngineBurst_EXT_SoundSet",
				"T70_Exhaust_1_EXT_SoundSet",
				"T70_Exhaust_2_EXT_SoundSet",
				"T70_Exhaust_3_EXT_SoundSet",
				"T70_Exhaust_4_EXT_SoundSet",
				"T70_Exhaust_5_EXT_SoundSet",
				"T70_Exhaust_6_EXT_SoundSet",
				"T70_Exhaust_7_EXT_SoundSet",
				"T34_Tracks_Slow_EXT_SoundSet","T34_Tracks_Mid_EXT_SoundSet","T34_Tracks_Fast_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};

	class NORTH_FIN_KV1_1940: NORTH_Tank_Base
	{

		soundEngineOnInt[] = {"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Internal_Exhaust_StarUp-001.ogg",0.63095737,1.0};
		soundEngineOnExt[] = {"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine_StartUp-001.ogg",0.7943282,1.0,200};

		soundEngineOffInt[] = {"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Internal_Exhaust_Shutdown-001.ogg",0.63095737,1.0};
		soundEngineOffExt[] = {"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine_Shutdown-001.ogg",0.7943282,1.0,200};

		class Sounds
		{
			soundSetsInt[] = {
				"KV1_Engine_RMP0_INT_SoundSet",
				"KV1_Engine_RMP1_INT_SoundSet",
				"KV1_Engine_RMP2_INT_SoundSet",
				"KV1_Engine_RMP3_INT_SoundSet",
				"KV1_Engine_RMP4_INT_SoundSet",
				"KV1_Engine_RMP5_INT_SoundSet",
				"KV1_Engine_RMP6_INT_SoundSet",
				"KV1_EngineBurst_INT_SoundSet",
				"KV1_Exhaust_1_INT_SoundSet",
				"KV1_Exhaust_2_INT_SoundSet",
				"KV1_Exhaust_3_INT_SoundSet",
				"KV1_Exhaust_4_INT_SoundSet",
				"KV1_Exhaust_5_INT_SoundSet",
				"KV1_Exhaust_6_INT_SoundSet",
				"KV1_Exhaust_7_INT_SoundSet",
				"T34_Tracks_Slow_INT_SoundSet","T34_Tracks_Mid_INT_SoundSet","T34_Tracks_Fast_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {
				"KV1_Engine_RMP0_EXT_SoundSet",
				"KV1_Engine_RMP1_EXT_SoundSet",
				"KV1_Engine_RMP2_EXT_SoundSet",
				"KV1_Engine_RMP3_EXT_SoundSet",
				"KV1_Engine_RMP4_EXT_SoundSet",
				"KV1_Engine_RMP5_EXT_SoundSet",
				"KV1_Engine_RMP6_EXT_SoundSet",
				"KV1_EngineBurst_EXT_SoundSet",
				"KV1_Exhaust_1_EXT_SoundSet",
				"KV1_Exhaust_2_EXT_SoundSet",
				"KV1_Exhaust_3_EXT_SoundSet",
				"KV1_Exhaust_4_EXT_SoundSet",
				"KV1_Exhaust_5_EXT_SoundSet",
				"KV1_Exhaust_6_EXT_SoundSet",
				"KV1_Exhaust_7_EXT_SoundSet",
				"T34_Tracks_Slow_EXT_SoundSet","T34_Tracks_Mid_EXT_SoundSet","T34_Tracks_Fast_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};

	class NORTH_FIN_KV1_1942: NORTH_Tank_Base
	{

		soundEngineOnInt[] = {"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Internal_Exhaust_StarUp-001.ogg",0.63095737,1.0};
		soundEngineOnExt[] = {"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine_StartUp-001.ogg",0.7943282,1.0,200};

		soundEngineOffInt[] = {"JPSP_NF_Sounds\sounds\KV1\Int\IS-1_Internal_Exhaust_Shutdown-001.ogg",0.63095737,1.0};
		soundEngineOffExt[] = {"JPSP_NF_Sounds\sounds\KV1\Ext\IS-1_Exterior_Engine_Shutdown-001.ogg",0.7943282,1.0,200};

		class Sounds
		{
			soundSetsInt[] = {
				"KV1_Engine_RMP0_INT_SoundSet",
				"KV1_Engine_RMP1_INT_SoundSet",
				"KV1_Engine_RMP2_INT_SoundSet",
				"KV1_Engine_RMP3_INT_SoundSet",
				"KV1_Engine_RMP4_INT_SoundSet",
				"KV1_Engine_RMP5_INT_SoundSet",
				"KV1_Engine_RMP6_INT_SoundSet",
				"KV1_EngineBurst_INT_SoundSet",
				"KV1_Exhaust_1_INT_SoundSet",
				"KV1_Exhaust_2_INT_SoundSet",
				"KV1_Exhaust_3_INT_SoundSet",
				"KV1_Exhaust_4_INT_SoundSet",
				"KV1_Exhaust_5_INT_SoundSet",
				"KV1_Exhaust_6_INT_SoundSet",
				"KV1_Exhaust_7_INT_SoundSet",
				"T34_Tracks_Slow_INT_SoundSet","T34_Tracks_Mid_INT_SoundSet","T34_Tracks_Fast_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {
				"KV1_Engine_RMP0_EXT_SoundSet",
				"KV1_Engine_RMP1_EXT_SoundSet",
				"KV1_Engine_RMP2_EXT_SoundSet",
				"KV1_Engine_RMP3_EXT_SoundSet",
				"KV1_Engine_RMP4_EXT_SoundSet",
				"KV1_Engine_RMP5_EXT_SoundSet",
				"KV1_Engine_RMP6_EXT_SoundSet",
				"KV1_EngineBurst_EXT_SoundSet",
				"KV1_Exhaust_1_EXT_SoundSet",
				"KV1_Exhaust_2_EXT_SoundSet",
				"KV1_Exhaust_3_EXT_SoundSet",
				"KV1_Exhaust_4_EXT_SoundSet",
				"KV1_Exhaust_5_EXT_SoundSet",
				"KV1_Exhaust_6_EXT_SoundSet",
				"KV1_Exhaust_7_EXT_SoundSet",
				"T34_Tracks_Slow_EXT_SoundSet","T34_Tracks_Mid_EXT_SoundSet","T34_Tracks_Fast_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};
	
	class NORTH_FIN_BA10: NORTH_Truck_base
	{
		
		soundEngineOnInt[] = {"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Engine_Interior_StartUp.ogg",0.63095737,1.0};
		soundEngineOnExt[] = {"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Engine_Exterior_StartUp.ogg",0.7943282,1.0,200};

		soundEngineOffInt[] = {"JPSP_NF_Sounds\sounds\BA10\Int\BA-10_Engine_Interior_Shutdown.ogg",0.63095737,1.0};
		soundEngineOffExt[] = {"JPSP_NF_Sounds\sounds\BA10\Ext\BA-10_Engine_Exterior_Shutdown.ogg",0.7943282,1.0,200};

		class Sounds
		{
			soundSetsExt[] = {
				"BA10_Engine_RMP0_EXT_SoundSet",
				"BA10_Engine_RMP1_EXT_SoundSet",
				"BA10_Engine_RMP2_EXT_SoundSet",
				"BA10_Engine_RMP3_EXT_SoundSet",
				"BA10_Engine_RMP4_EXT_SoundSet",
				"BA10_Engine_RMP5_EXT_SoundSet",
				"BA10_Engine_RMP6_EXT_SoundSet",
				"BA10_EngineBurst_EXT_SoundSet",
				"BA10_Exhaust_1_EXT_SoundSet",
				"BA10_Exhaust_2_EXT_SoundSet",
				"BA10_Exhaust_3_EXT_SoundSet",
				"BA10_Exhaust_4_EXT_SoundSet",
				"BA10_Exhaust_5_EXT_SoundSet",
				"BA10_Exhaust_6_EXT_SoundSet",
				"BA10_Exhaust_7_EXT_SoundSet",
				"Van_01_Rattling_EXT_SoundSet","Van_01_Stress_EXT_SoundSet","SPE_truck_ext_tires_rock_slow_SoundSet","SPE_truck_ext_tires_rock_fast_SoundSet","SPE_truck_ext_tires_grass_slow_SoundSet","SPE_truck_ext_tires_grass_fast_SoundSet","SPE_truck_ext_tires_sand_slow_SoundSet","SPE_truck_ext_tires_sand_fast_SoundSet","SPE_truck_ext_tires_gravel_slow_SoundSet","SPE_truck_ext_tires_gravel_fast_SoundSet","SPE_truck_ext_tires_mud_slow_SoundSet","SPE_truck_ext_tires_mud_fast_SoundSet","SPE_truck_ext_tires_asphalt_slow_SoundSet","SPE_truck_ext_tires_asphalt_fast_SoundSet","SPE_truck_ext_tires_water_slow_SoundSet","SPE_truck_ext_tires_water_fast_SoundSet","Van_01_Tires_Turn_Hard_EXT_SoundSet","Van_01_Tires_Turn_Soft_EXT_SoundSet","Van_01_Tires_Brake_Hard_EXT_SoundSet","Van_01_Tires_Brake_Soft_EXT_SoundSet","SPE_car_Ext_rain_light_soundSet","SPE_car_Ext_rain_hard_soundSet","SPE_truck_ext_rattling_offroad_low_soundSet","SPE_truck_ext_rattling_offroad_high_soundSet","SPE_truck_ext_distantTires_soundSet","SPE_truck_ext_distantTires_wet_soundSet","SPE_truck_ext_tires_wetLayer_soundSet","SPE_truck_ext_suspension_soundSet","SPE_tank_ext_internalFire_soundSet"
			};
			soundSetsInt[] = {
				"BA10_Engine_RMP0_INT_SoundSet",
				"BA10_Engine_RMP1_INT_SoundSet",
				"BA10_Engine_RMP2_INT_SoundSet",
				"BA10_Engine_RMP3_INT_SoundSet",
				"BA10_Engine_RMP4_INT_SoundSet",
				"BA10_Engine_RMP5_INT_SoundSet",
				"BA10_Engine_RMP6_INT_SoundSet",
				"BA10_EngineBurst_INT_SoundSet",
				"BA10_Exhaust_1_INT_SoundSet",
				"BA10_Exhaust_2_INT_SoundSet",
				"BA10_Exhaust_3_INT_SoundSet",
				"BA10_Exhaust_4_INT_SoundSet",
				"BA10_Exhaust_5_INT_SoundSet",
				"BA10_Exhaust_6_INT_SoundSet",
				"BA10_Exhaust_7_INT_SoundSet",
				"SPE_int_vehicleStrain_truckInterior_soundSet","Van_01_Rattling_INT_SoundSet","Van_01_Stress_INT_SoundSet","SPE_truck_int_tires_rock_slow_SoundSet","SPE_truck_int_tires_rock_fast_SoundSet","SPE_truck_int_tires_grass_slow_SoundSet","SPE_truck_int_tires_grass_fast_SoundSet","SPE_truck_int_tires_sand_slow_SoundSet","SPE_truck_int_tires_sand_fast_SoundSet","SPE_truck_int_tires_gravel_slow_SoundSet","SPE_truck_int_tires_gravel_fast_SoundSet","SPE_truck_int_tires_mud_slow_SoundSet","SPE_truck_int_tires_mud_fast_SoundSet","SPE_truck_int_tires_asphalt_slow_SoundSet","SPE_truck_int_tires_asphalt_fast_SoundSet","SPE_truck_int_tires_water_slow_SoundSet","SPE_truck_int_tires_water_fast_SoundSet","Van_01_Tires_Turn_Hard_INT_SoundSet","Van_01_Tires_Turn_Soft_INT_SoundSet","Van_01_Tires_Brake_Hard_INT_SoundSet","SPE_truck_int_tires_brake_soft_soundSet","SPE_car_Int_rain_light_soundSet","SPE_car_Int_rain_hard_soundSet","SPE_truck_int_rattling_offroad_low_soundSet","SPE_truck_int_rattling_offroad_high_soundSet","SPE_truck_int_suspension_soundSet","SPE_tank_int_internalFire_soundSet"
			};
		};
	};
};