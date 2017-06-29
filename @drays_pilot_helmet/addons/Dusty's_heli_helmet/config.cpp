#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Dusty_headgear
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
		author="Dusty";
		version="1";
	};
};
class CfgWeapons
{
	class ItemCore;
	class H_HelmetB: ItemCore
	{};
	class H_PilotHelmetHeli_B: H_HelmetB
	{};
	class Dusty_Helmet_PilotHeli_Tan: H_PilotHelmetHeli_B
	{
		scope=2;
		author="Dray";
		displayName="Casco Piloto 1";
		picture="\Dusty's_heli_helmet\UI\Gentex HGU-56P.paa";
		hiddenSelectionsTextures[]=
		{
			"\Dusty's_heli_helmet\data\Colibri1.paa"
		};
	};
	class Dusty_Helmet_PilotHeli_Tan1: H_PilotHelmetHeli_B
	{
		scope=2;
		author="Dray";
		displayName="Casco Piloto 2";
		picture="\Dusty's_heli_helmet\UI\Gentex HGU-56P.paa";
		hiddenSelectionsTextures[]=
		{
			"\Dusty's_heli_helmet\data\Colibri2.paa"
		};
	};
	class Dusty_Helmet_PilotHeli_Tan2: H_PilotHelmetHeli_B
	{
		scope=2;
		author="Dray";
		displayName="Casco Piloto 3";
		picture="\Dusty's_heli_helmet\UI\Gentex HGU-56P.paa";
		hiddenSelectionsTextures[]=
		{
			"\Dusty's_heli_helmet\data\Colibri3.paa"
		};
	};
	class Dusty_Helmet_PilotHeli_Tan3: H_PilotHelmetHeli_B
	{
		scope=2;
		author="Dray";
		displayName="Casco Piloto 4";
		picture="\Dusty's_heli_helmet\UI\Gentex HGU-56P.paa";
		hiddenSelectionsTextures[]=
		{
			"\Dusty's_heli_helmet\data\Colibri4.paa"
		};
	};
};
