#include "BIS_AddonInfo.hpp"
class CfgPatches 

{ 
    class FAP_Vehicles
    { 
        units[] = {}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {};
    }; 
}; 	
	
	class cfgWeapons {
	
	class H_Beret_blk
	{ 
        class ItemInfo; 
    };
	
		class FAF_Beret: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "boinasoldado";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\boinasoldado.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	
		class FAF_Beret_2: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "boinasoldado1";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\boinasoldado1.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};		class FAF_Beret_3: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "boinacabo";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\boinacabo.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	class FAF_Beret_4: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "boinacabo1";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\boinacabo1.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	class FAF_Beret_5: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "boinasargento";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\boinasargento.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	class FAF_Beret_6: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "boinasargento1";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\boinasargento1.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	class FAF_Beret_7: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "boinateniente";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\boinateniente.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	class FAF_Beret_8: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "alasoldado";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\alasoldado.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	class FAF_Beret_9: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "alasoldado1";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\alasoldado1.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	class FAF_Beret_10: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "alacabo";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\alacabo.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	


		class FAF_Beret_11: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "alacabo1";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\alacabo1.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class FAF_Beret_12: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "alasargento";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\alasargento.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	
	class FAF_Beret_13: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "alasargento1";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\alasargento1.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	
	class FAF_Beret_14: H_Beret_blk // change the class name "FAP_Beret_GNR" for whatever you want
	{
		author = "MORATTY";
		displayName = "alateniente";
		picture = "\FAF_Beret\UI\boinas_icono.paa"; // icon. in here i've made my own icon
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\FAF_Beret\icon\alateniente.paa"}; //my beret texture
		class ItemInfo: ItemInfo
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {6};
			armor = 0;
			passThrough = true;
			hiddenSelections[] = {"camo"};
		};
	};	
};	
	

