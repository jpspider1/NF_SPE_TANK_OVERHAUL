#define _ARMA_

class CfgPatches
{
	class JPSP_NF_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"NORTH_vehicles_cfg"};
	};
};
class CfgSoundShaders
{
	class T34_Engine_RMP0_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\t34idle2",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - 0))";
		volume = "engineOn * 0.7 * 2 * (rpm factor [0 *800, (0 *800 + 1 *(800-0 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2, 0])";
		range = 400;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP1_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\t34motor",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[0, (1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP2_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\t34motor",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1600 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP3_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\t34motor",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP4_EXT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\t34motor",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 0.7 * 2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 1000;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP0_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\t34idle2",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - 0))";
		volume = "engineOn * 1 * 1.3 * (rpm factor [0 *800, (0 *800 + 1 *(800-0 *800))]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2, 0])";
		range = 128;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP1_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\t34motor",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[0, (1200 - 800)/(2200 - 800) - (((1200 - 800)/(2200 - 800) - 0) - (1 * ((1200 - 800)/(2200 - 800) - 0)))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2])";
		range = 128;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP2_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\t34motor",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1600 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1200 - 800)/(2200 - 800) + (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) - (((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800)) - (1.1 * ((1600 - 800)/(2200 - 800) - (1200 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2])";
		range = 134;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP3_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\t34motor",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (1950 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1600 - 800)/(2200 - 800) + (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) - (((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800)) - (1.2 * ((1950 - 800)/(2200 - 800) - (1600 - 800)/(2200 - 800))))/2]) * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor [(2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 140;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
            { 1, 0 }
        };
	};
	class T34_Engine_RMP4_INT_SoundShader
	{
		samples[] = {{"JPSP_NF_Sounds\sounds\t34motor",1}};
		frequency = "1 * (1 + 1.2 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) - (2200 - 800)/(2200 - 800)))";
		volume = "engineOn * 1 * 1.3 * (((1+0.1*1 *thrust) * ((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-0.9  ) * (speed factor [0, 15]) + 0.9   * (rpm factor [800, 2300])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [800, 2300])) factor[(1950 - 800)/(2200 - 800) + (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2, (2200 - 800)/(2200 - 800) - (((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800)) - (1.3 * ((2200 - 800)/(2200 - 800) - (1950 - 800)/(2200 - 800))))/2])";
		range = 146;
		rangeCurve[] =
        {
            { 0, 1 },
            { 0.1, 0.9 },
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
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
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
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
            { 0.2, 0.3 },
            { 0.3, 0.35 },
            { 0.4, 0.2 },
            { 0.5, 0.25 },
            { 0.6, 0.225 },
            { 0.7, 0.1 },
            { 0.8, 0.05 },
            { 0.9, 0.025 },
            { 1, 0 }
        };
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
		volumeFactor = 1;
	};
	class T34_Engine_RMP1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP1_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.15;
	};
	class T34_Engine_RMP2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP2_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class T34_Engine_RMP3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP3_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class T34_Engine_RMP4_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"T34_Engine_RMP4_EXT_SoundShader"};
		volumeFactor = 1.5;
		spatial = 1;
		loop = 1;
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
	class T34_EngineBurst_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"T34_EngineBurst_INT_SoundShader"};
		volumeFactor = 1.1;
		playTrigger = "thrust - 0.1";
		spatial = 1;
		loop = 0;
	};
};
class CfgVehicles
{
	class NORTH_Tank_Base;
	class NORTH_FIN_T34_76_1941: NORTH_Tank_Base
	{
		class Sounds
		{
			soundSetsInt[] = {"T34_Engine_RMP0_INT_SoundSet","T34_Engine_RMP1_INT_SoundSet","T34_Engine_RMP2_INT_SoundSet","T34_Engine_RMP3_INT_SoundSet","T34_Engine_RMP4_INT_SoundSet","T34_EngineBurst_INT_SoundSet","MBT_01_Tracks_01_INT_SoundSet","MBT_01_Tracks_02_INT_SoundSet","MBT_01_Tracks_03_INT_SoundSet","MBT_01_Tracks_04_INT_SoundSet","MBT_01_Tracks_05_INT_SoundSet","MBT_01_Tracks_06_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {"T34_Engine_RMP0_EXT_SoundSet","T34_Engine_RMP1_EXT_SoundSet","T34_Engine_RMP2_EXT_SoundSet","T34_Engine_RMP3_EXT_SoundSet","T34_Engine_RMP4_EXT_SoundSet","T34_EngineBurst_EXT_SoundSet","MBT_02_Tracks_01_EXT_SoundSet","MBT_02_Tracks_02_EXT_SoundSet","MBT_02_Tracks_03_EXT_SoundSet","MBT_02_Tracks_04_EXT_SoundSet","MBT_02_Tracks_05_EXT_SoundSet","MBT_02_Tracks_06_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};
	class NORTH_FIN_T34_76_1943: NORTH_Tank_Base
    {
		class Sounds
		{
			soundSetsInt[] = {"T34_Engine_RMP0_INT_SoundSet","T34_Engine_RMP1_INT_SoundSet","T34_Engine_RMP2_INT_SoundSet","T34_Engine_RMP3_INT_SoundSet","T34_Engine_RMP4_INT_SoundSet","T34_EngineBurst_INT_SoundSet","MBT_01_Tracks_01_INT_SoundSet","MBT_01_Tracks_02_INT_SoundSet","MBT_01_Tracks_03_INT_SoundSet","MBT_01_Tracks_04_INT_SoundSet","MBT_01_Tracks_05_INT_SoundSet","MBT_01_Tracks_06_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {"T34_Engine_RMP0_EXT_SoundSet","T34_Engine_RMP1_EXT_SoundSet","T34_Engine_RMP2_EXT_SoundSet","T34_Engine_RMP3_EXT_SoundSet","T34_Engine_RMP4_EXT_SoundSet","T34_EngineBurst_EXT_SoundSet","MBT_02_Tracks_01_EXT_SoundSet","MBT_02_Tracks_02_EXT_SoundSet","MBT_02_Tracks_03_EXT_SoundSet","MBT_02_Tracks_04_EXT_SoundSet","MBT_02_Tracks_05_EXT_SoundSet","MBT_02_Tracks_06_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};
	class NORTH_FIN_T34_85_45: NORTH_Tank_Base
    {
		class Sounds
		{
			soundSetsInt[] = {"T34_Engine_RMP0_INT_SoundSet","T34_Engine_RMP1_INT_SoundSet","T34_Engine_RMP2_INT_SoundSet","T34_Engine_RMP3_INT_SoundSet","T34_Engine_RMP4_INT_SoundSet","T34_EngineBurst_INT_SoundSet","MBT_01_Tracks_01_INT_SoundSet","MBT_01_Tracks_02_INT_SoundSet","MBT_01_Tracks_03_INT_SoundSet","MBT_01_Tracks_04_INT_SoundSet","MBT_01_Tracks_05_INT_SoundSet","MBT_01_Tracks_06_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {"T34_Engine_RMP0_EXT_SoundSet","T34_Engine_RMP1_EXT_SoundSet","T34_Engine_RMP2_EXT_SoundSet","T34_Engine_RMP3_EXT_SoundSet","T34_Engine_RMP4_EXT_SoundSet","T34_EngineBurst_EXT_SoundSet","MBT_02_Tracks_01_EXT_SoundSet","MBT_02_Tracks_02_EXT_SoundSet","MBT_02_Tracks_03_EXT_SoundSet","MBT_02_Tracks_04_EXT_SoundSet","MBT_02_Tracks_05_EXT_SoundSet","MBT_02_Tracks_06_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};
	class NORTH_FIN_T34_85: NORTH_Tank_Base
    {
		class Sounds
		{
			soundSetsInt[] = {"T34_Engine_RMP0_INT_SoundSet","T34_Engine_RMP1_INT_SoundSet","T34_Engine_RMP2_INT_SoundSet","T34_Engine_RMP3_INT_SoundSet","T34_Engine_RMP4_INT_SoundSet","T34_EngineBurst_INT_SoundSet","MBT_01_Tracks_01_INT_SoundSet","MBT_01_Tracks_02_INT_SoundSet","MBT_01_Tracks_03_INT_SoundSet","MBT_01_Tracks_04_INT_SoundSet","MBT_01_Tracks_05_INT_SoundSet","MBT_01_Tracks_06_INT_SoundSet","MBT_01_Interior_Tone_Engine_Off_SoundSet","MBT_01_Interior_Tone_Engine_On_SoundSet","MBT_01_Rattling_INT_SoundSet","MBT_01_Rain_INT_SoundSet","MBT_01_Tracks_Brake_Hard_INT_SoundSet","MBT_01_Tracks_Brake_Soft_INT_SoundSet","MBT_01_Tracks_Turn_Hard_INT_SoundSet","MBT_01_Tracks_Turn_Soft_INT_SoundSet","MBT_01_Drive_Water_INT_SoundSet","Tracks_Movement_Dirt_Int_01_SoundSet","Tracks_Surface_Soft_Int_SoundSet","Tracks_Surface_Sand_Int_SoundSet","Tracks_Surface_Squeaks_Soft_Int_SoundSet","Tracks_Surface_Squeaks_Hard_Int_SoundSet","Tanks_Material_Strain_Int_SoundSet"};
			soundSetsExt[] = {"T34_Engine_RMP0_EXT_SoundSet","T34_Engine_RMP1_EXT_SoundSet","T34_Engine_RMP2_EXT_SoundSet","T34_Engine_RMP3_EXT_SoundSet","T34_Engine_RMP4_EXT_SoundSet","T34_EngineBurst_EXT_SoundSet","MBT_02_Tracks_01_EXT_SoundSet","MBT_02_Tracks_02_EXT_SoundSet","MBT_02_Tracks_03_EXT_SoundSet","MBT_02_Tracks_04_EXT_SoundSet","MBT_02_Tracks_05_EXT_SoundSet","MBT_02_Tracks_06_EXT_SoundSet","MBT_02_Rain_EXT_SoundSet","MBT_02_Tracks_Brake_Hard_EXT_SoundSet","MBT_02_Tracks_Brake_Soft_EXT_SoundSet","MBT_02_Tracks_Turn_Hard_EXT_SoundSet","MBT_02_Tracks_Turn_Soft_EXT_SoundSet","MBT_02_Drive_Water_EXT_SoundSet","Tracks_Movement_Dirt_Ext_01_SoundSet","Tracks_Surface_Soft_Ext_SoundSet","Tracks_Surface_Hard_Ext_SoundSet","Tracks_Surface_Sand_Ext_SoundSet","Tracks_Surface_Squeaks_Soft_Ext_SoundSet","Tracks_Surface_Squeaks_Hard_Ext_SoundSet"};
		};
	};
		
};