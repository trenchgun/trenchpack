#include "BIS_AddonInfo.hpp"
class CfgPatches 
{ 
    class tg_trench_oc
    { 
        units[] = 
		{}; 
        weapons[] = 
		{}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {
			"A3_Characters_F",
			"A3_Characters_F_INDEP",
			"A3_Characters_F_Common",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_epc"
		}; 
    }; 
}; 

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 
    class tg_trench_faction // 
    { 
        displayName = "Trench's Units"; 
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
	 
};

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class cfgWeapons 
{ 

	//*********************
	//*** Pilot Headset ***
	//*********************
	class ItemCore; 
	class HeadgearItem;
	class H_HelmetB: ItemCore 
    { 
        class ItemInfo; 
    };  
	
	class tg_pilot_headset: H_HelmetB
    {
		author = "Trenchgun"
		scope = 2;
        displayName = "Pilot Headset";
        model = "\tg_oc\tru_c_h_pilot_headset";
		picture = "\tg_oc\Data\logo_small.paa";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\tg_oc\Data\tru_c_h_pilot_headset_co.paa"};
		hiddenSelectionsMaterials[] = {"\tg_oc\Data\tru_c_h_pilot_headset.rvmat"};
        class ItemInfo: ItemInfo
        {
            mass = 5;
            allowedSlots[] = {901,605};
            uniformModel = "\tg_oc\tru_c_h_pilot_headset";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo"};
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
        };
    };
}; 


class cfgGlasses
{
    class None;
    class tg_pilot_headset_face: None
    {
        author = "Trenchgun";
        displayname = "Pilot Headset";
        model = "\tg_oc\tru_c_h_pilot_headset";
        picture = "\tg_oc\Data\logo_small.paa";
        mass = 5;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\tg_oc\Data\tru_c_h_pilot_headset_co.paa"
		};
    };
};
