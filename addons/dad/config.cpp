class CfgPatches 
{ 
    class tg_dadpat_uniforms
    { 
		name = "DADPAT";
		author = "Trenchgun";
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
    class tg_dadpat_faction // 
    { 
        displayName = "DADPAT Units"; 
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

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class B_Soldier_base_F;  

	class tg_dadpat_blue_hi: B_Soldier_base_F 
	{
        author = "Trenchgun"; 
        _generalMacro = "B_soldier_F"; 
        scope = 1; 
        displayName = "DADPAT (Hawaiian, Blue)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\characters_f\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,2,1,0};
        uniformClass = "tg_u_dadpat_blue_hi"; 	// class of uniform
        hiddenSelections[] = 
		{
			"Camo",
			"Insignia"
		}; 
        hiddenSelectionsTextures[] = 
		{ // set texture .paa
			"\tg\dad\Data\tg_u_dadpat_1_01_co.paa"
		};	
        hiddenSelectionsMaterials[] = 
		{ // set rvmat
			"\A3\characters_f\Civil\Data\c_poloshirtpants.rvmat"
		};  
    };

	class tg_dadpat_white: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Pants) (White)";
		uniformClass = "tg_u_dadpat_white";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\ig_poloshirt_1_co.paa"
		};
	};
	
	class tg_dadpat_brown: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Pants) (Brown)";
		uniformClass = "tg_u_dadpat_brown";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\ig_poloshirt_2_co.paa"
		};
	};

	class tg_dadpat_red_hi: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Hawaiian, Red)";
		uniformClass = "tg_u_dadpat_red_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_02_co.paa"
		};
	};
	
	class tg_dadpat_grn_palm: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Palm, Green)";
		uniformClass = "tg_u_dadpat_grn_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_03_co.paa"
		};
	};
	
	class tg_dadpat_prp_palm: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Palm. Purple)";
		uniformClass = "tg_u_dadpat_prp_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_04_co.paa"
		};
	};
	
	class tg_dadpat_tacky: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Floral)";
		uniformClass = "tg_u_dadpat_tacky";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_05_co.paa"
		};
	};
	
	class tg_dadpat_floral: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Floral)";
		uniformClass = "tg_u_dadpat_floral";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_06_co.paa"
		};
	};
	
	class tg_dadpat_orng_plaid: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Orange)";
		uniformClass = "tg_u_dadpat_orng_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_07_co.paa"
		};
	};
	
	class tg_dadpat_blue_plaid: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Blue)";
		uniformClass = "tg_u_dadpat_blue_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_08_co.paa"
		};
	};
	
	class tg_dadpat_red_plaid: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Red)";
		uniformClass = "tg_u_dadpat_red_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_09_co.paa"
		};
	};
	
	class tg_dadpat_grn_plaid: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Green)";
		uniformClass = "tg_u_dadpat_grn_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_10_co.paa"
		};
	};
	
	class tg_dadpat_herringbone: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Herringbone)";
		uniformClass = "tg_u_dadpat_herringbone";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_11_co.paa"
		};
	};
	
	class tg_dadpat_flamingo_dark: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Flamingo, Dark)";
		uniformClass = "tg_u_dadpat_flamingo_dark";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_12_co.paa"
		};
	};
	
	class tg_dadpat_orng_grn_palm: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Palm, Orange/Green)";
		uniformClass = "tg_u_dadpat_orng_grn_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_13_co.paa"
		};
	};
	
	class tg_dadpat_red_grn_hi: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Hawaiian, Red/Green)";
		uniformClass = "tg_u_dadpat_red_grn_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_14_co.paa"
		};
	};
	
	class tg_dadpat_sunset: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Sunset)";
		uniformClass = "tg_u_dadpat_sunset";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_15_co.paa"
		};
	};
	
	class tg_dadpat_pineapple: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Pineapple)";
		uniformClass = "tg_u_dadpat_pineapple";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_16_co.paa"
		};
	};
	
	class tg_dadpat_blu_yllw_hi: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Hawaiian, Blue/Yellow)";
		uniformClass = "tg_u_dadpat_blu_yllw_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_17_co.paa"
		};
	};
	
	/*
	class tg_dadpat_tiki: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Tiki)";
		uniformClass = "tg_u_dadpat_tiki";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_18_co.paa"
		};
	};
	*/
	
	class tg_dadpat_orng_grn_hi: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Hawaiian, Orange/Green)";
		uniformClass = "tg_u_dadpat_orng_grn_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_19_co.paa"
		};
	};
	
	class tg_dadpat_flamingo_light: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Flamingo, Light)";
		uniformClass = "tg_u_dadpat_flamingo_light";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_20_co.paa"
		};
	};
	
	class tg_dadpat_dark_palm: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Palm, Dark)";
		uniformClass = "tg_u_dadpat_dark_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_21_co.paa"
		};
	};
	
	class tg_dadpat_gold_plaid: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Gold)";
		uniformClass = "tg_u_dadpat_gold_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_22_co.paa"
		};
	};
	
	class tg_dadpat_pink_plaid: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Pink)";
		uniformClass = "tg_u_dadpat_pink_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_23_co.paa"
		};
	};
	
	class tg_dadpat_bw_plaid_1: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, B&W)";
		uniformClass = "tg_u_dadpat_bw_plaid_1";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_24_co.paa"
		};
	};
	
	class tg_dadpat_bw_plaid_2: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, B&W alt)";
		uniformClass = "tg_u_dadpat_bw_plaid_2";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_25_co.paa"
		};
	};
	
	class tg_dadpat_prp_plaid: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Purple)";
		uniformClass = "tg_u_dadpat_prp_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_26_co.paa"
		};
	};
	
	class tg_dadpat_yllw_plaid: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Yellow)";
		uniformClass = "tg_u_dadpat_yllw_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_27_co.paa"
		};
	};
	
	class tg_dadpat_cream_plaid: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Cream)";
		uniformClass = "tg_u_dadpat_cream_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_28_co.paa"
		};
	};
	
	class tg_dadpat_scotland_red_grn_plaid: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Red/Green Scottish)";
		uniformClass = "tg_u_dadpat_scotland_red_grn_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_29_co.paa"
		};
	};
	
	class tg_dadpat_tattersall: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Tattersall)";
		uniformClass = "tg_u_dadpat_tattersall";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_30_co.paa"
		};
	};
	
	class tg_dadpat_red_tartan: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Red Tartan)";
		uniformClass = "tg_u_dadpat_red_tartan";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_31_co.paa"
		};
	};
	
	class tg_dadpat_red_buffalo: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Red Buffalo)";
		uniformClass = "tg_u_dadpat_red_buffalo";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_32_co.paa"
		};
	};
	
	class tg_dadpat_grn_tartan: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Green Tartan)";
		uniformClass = "tg_u_dadpat_grn_tartan";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_33_co.paa"
		};
	};
	
	class tg_dadpat_grn_buffalo: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Green Buffalo)";
		uniformClass = "tg_u_dadpat_grn_buffalo";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_34_co.paa"
		};
	};
	
	class tg_dadpat_red_sawtooth: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Red Sawtooth)";
		uniformClass = "tg_u_dadpat_red_sawtooth";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_35_co.paa"
		};
	};
	
	class tg_dadpat_grn_sawtooth: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Green Sawtooth)";
		uniformClass = "tg_u_dadpat_grn_sawtooth";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_36_co.paa"
		};
	};
	
	class tg_dadpat_red_check: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Red Check)";
		uniformClass = "tg_u_dadpat_red_check";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_37_co.paa"
		};
	};
	
	class tg_dadpat_grn_check: tg_dadpat_blue_hi
	{
		displayName = "DADPAT (Plaid, Green Check)";
		uniformClass = "tg_u_dadpat_grn_check";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_1_38_co.paa"
		};
	};
	
	//*********************
	//*** Polo & Shorts ***
	//*********************
	
	class tg_dadpat_shorts_blue_hi: B_Soldier_base_F 
	{
        author = "Trenchgun"; 
        _generalMacro = "B_soldier_F"; 
        scope = 1; 
        displayName = "DADPAT (Shorts) (Hawaiian, Blue)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\characters_f\Civil\c_poloshirt.p3d";
		modelSides[] = {3,2,1,0};
        uniformClass = "tg_u_dadpat_shorts_blue_hi"; 	// class of uniform
        hiddenSelections[] = 
		{
			"Camo",
			"Insignia"
		}; 
        hiddenSelectionsTextures[] = 
		{ // set texture .paa
			"\tg\dad\Data\tg_u_dadpat_3_01_co.paa"
		};	
        hiddenSelectionsMaterials[] = 
		{ // set rvmat
			"\A3\characters_f\Civil\Data\c_poloshirt.rvmat"
		};  
    };

	class tg_dadpat_shorts_red_hi: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Hawaiian, Red)";
		uniformClass = "tg_u_dadpat_shorts_red_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_02_co.paa"
		};
	};
	
	class tg_dadpat_shorts_grn_palm: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Palm, Green)";
		uniformClass = "tg_u_dadpat_shorts_grn_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_03_co.paa"
		};
	};
	
	class tg_dadpat_shorts_prp_palm: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Palm, Purple)";
		uniformClass = "tg_u_dadpat_shorts_prp_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_04_co.paa"
		};
	};
	
	class tg_dadpat_shorts_tacky: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Floral)";
		uniformClass = "tg_u_dadpat_shorts_tacky";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_05_co.paa"
		};
	};
	
	class tg_dadpat_shorts_floral: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Floral)";
		uniformClass = "tg_u_dadpat_shorts_floral";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_06_co.paa"
		};
	};
	
	class tg_dadpat_shorts_orng_plaid: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Orange)";
		uniformClass = "tg_u_dadpat_shorts_orng_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_07_co.paa"
		};
	};
	
	class tg_dadpat_shorts_blue_plaid: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Blue)";
		uniformClass = "tg_u_dadpat_shorts_blue_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_08_co.paa"
		};
	};
	
	class tg_dadpat_shorts_red_plaid: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Red)";
		uniformClass = "tg_u_dadpat_shorts_red_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_09_co.paa"
		};
	};
	
	class tg_dadpat_shorts_grn_plaid: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Green)";
		uniformClass = "tg_u_dadpat_shorts_grn_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_10_co.paa"
		};
	};
	
	class tg_dadpat_shorts_herringbone: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Herringbone)";
		uniformClass = "tg_u_dadpat_shorts_herringbone";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_11_co.paa"
		};
	};
	
	class tg_dadpat_shorts_flamingo_dark: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Flamingo, Dark)";
		uniformClass = "tg_u_dadpat_shorts_flamingo_dark";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_12_co.paa"
		};
	};
	
	class tg_dadpat_shorts_orng_grn_palm: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Palm, Orange/Green)";
		uniformClass = "tg_u_dadpat_shorts_orng_grn_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_13_co.paa"
		};
	};
	
	class tg_dadpat_shorts_red_grn_hi: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Hawaiian, Red/Green)";
		uniformClass = "tg_u_dadpat_shorts_red_grn_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_14_co.paa"
		};
	};
	
	class tg_dadpat_shorts_sunset: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Sunset)";
		uniformClass = "tg_u_dadpat_shorts_sunset";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_15_co.paa"
		};
	};
	
	class tg_dadpat_shorts_pineapple: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Pineapple)";
		uniformClass = "tg_u_dadpat_shorts_pineapple";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_16_co.paa"
		};
	};
	
	class tg_dadpat_shorts_blu_yllw_hi: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Hawaiian, Blue/Yellow)";
		uniformClass = "tg_u_dadpat_shorts_blu_yllw_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_17_co.paa"
		};
	};
	
	/*
	class tg_dadpat_shorts_tiki: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Tiki)";
		uniformClass = "tg_u_dadpat_shorts_tiki";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_18_co.paa"
		};
	};
	*/
	
	class tg_dadpat_shorts_orng_grn_hi: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Hawaiian, Orange/Green)";
		uniformClass = "tg_u_dadpat_shorts_orng_grn_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_19_co.paa"
		};
	};
	
	class tg_dadpat_shorts_flamingo_light: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Flamingo, Light)";
		uniformClass = "tg_u_dadpat_shorts_flamingo_light";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_20_co.paa"
		};
	};
	
	class tg_dadpat_shorts_dark_palm: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Palm, Dark)";
		uniformClass = "tg_u_dadpat_shorts_dark_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_21_co.paa"
		};
	};
	
	class tg_dadpat_shorts_gold_plaid: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Gold)";
		uniformClass = "tg_u_dadpat_shorts_gold_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_22_co.paa"
		};
	};
	
	class tg_dadpat_shorts_pink_plaid: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Pink)";
		uniformClass = "tg_u_dadpat_shorts_pink_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_23_co.paa"
		};
	};
	
	class tg_dadpat_shorts_bw_plaid_1: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, B&W)";
		uniformClass = "tg_u_dadpat_shorts_bw_plaid_1";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_24_co.paa"
		};
	};
	
	class tg_dadpat_shorts_bw_plaid_2: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, B&W alt)";
		uniformClass = "tg_u_dadpat_shorts_bw_plaid_2";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_25_co.paa"
		};
	};
	
	class tg_dadpat_shorts_prp_plaid: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Purple)";
		uniformClass = "tg_u_dadpat_shorts_prp_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_26_co.paa"
		};
	};
	
	class tg_dadpat_shorts_yllw_plaid: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Yellow)";
		uniformClass = "tg_u_dadpat_shorts_yllw_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_27_co.paa"
		};
	};
	
	class tg_dadpat_shorts_cream_plaid: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Cream)";
		uniformClass = "tg_u_dadpat_shorts_cream_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_28_co.paa"
		};
	};
	
	class tg_dadpat_shorts_scotland_red_grn_plaid: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Red/Green Scottish)";
		uniformClass = "tg_u_dadpat_shorts_scotland_red_grn_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_29_co.paa"
		};
	};
	
	class tg_dadpat_shorts_tattersall: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Tattersall)";
		uniformClass = "tg_u_dadpat_shorts_tattersall";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_30_co.paa"
		};
	};
	
	class tg_dadpat_shorts_red_tartan: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Red Tartan)";
		uniformClass = "tg_u_dadpat_shorts_red_tartan";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_31_co.paa"
		};
	};
	
	class tg_dadpat_shorts_red_buffalo: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Red Buffalo)";
		uniformClass = "tg_u_dadpat_shorts_red_buffalo";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_32_co.paa"
		};
	};
	
	class tg_dadpat_shorts_grn_tartan: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Green Tartan)";
		uniformClass = "tg_u_dadpat_shorts_grn_tartan";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_33_co.paa"
		};
	};
	
	class tg_dadpat_shorts_grn_buffalo: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Green Buffalo)";
		uniformClass = "tg_u_dadpat_shorts_grn_buffalo";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_34_co.paa"
		};
	};
	
	class tg_dadpat_shorts_red_sawtooth: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Red Sawtooth)";
		uniformClass = "tg_u_dadpat_shorts_red_sawtooth";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_35_co.paa"
		};
	};
	
	class tg_dadpat_shorts_grn_sawtooth: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Green Sawtooth)";
		uniformClass = "tg_u_dadpat_shorts_grn_sawtooth";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_36_co.paa"
		};
	};
	
	class tg_dadpat_shorts_red_check: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Red Check)";
		uniformClass = "tg_u_dadpat_shorts_red_check";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_37_co.paa"
		};
	};
	
	class tg_dadpat_shorts_grn_check: tg_dadpat_shorts_blue_hi
	{
		displayName = "DADPAT (Shorts) (Plaid, Green Check)";
		uniformClass = "tg_u_dadpat_shorts_grn_check";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_3_38_co.paa"
		};
	};
	
	//**********************
	//*** Tactical Pants ***
	//**********************
	
	class tg_dadpat_tactical_blue_hi: B_Soldier_base_F 
	{
        author = "Trenchgun"; 
        _generalMacro = "B_soldier_F"; 
        scope = 1; 
        displayName = "DADPAT (Tactical) (Hawaiian, Blue)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\characters_f_epb\guerrilla\ig_guerrilla5_1.p3d";
		modelSides[] = {3,2,1,0};
        uniformClass = "tg_u_dadpat_tactical_blue_hi"; 	// class of uniform
        hiddenSelections[] = 
		{
			"Camo1",
			"Camo2",
			"Insignia"
		}; 
        hiddenSelectionsTextures[] = 
		{ // set texture .paa
			"\tg\dad\Data\tg_u_dadpat_2_01_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};	
        /*
		hiddenSelectionsMaterials[] = 
		{ // set rvmat
			"\A3\characters_f\BLUFOR\Data\clothing1.rvmat"
		};
		*/		
    };

	class tg_dadpat_tactical_red_hi: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Hawaiian, Red)";
		uniformClass = "tg_u_dadpat_tactical_red_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_02_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_grn_palm: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Palm, Green)";
		uniformClass = "tg_u_dadpat_tactical_grn_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_03_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_prp_palm: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Palm, Purple)";
		uniformClass = "tg_u_dadpat_tactical_prp_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_04_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_tacky: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Floral)";
		uniformClass = "tg_u_dadpat_tactical_tacky";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_05_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_floral: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Floral)";
		uniformClass = "tg_u_dadpat_tactical_floral";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_06_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_orng_plaid: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Orange)";
		uniformClass = "tg_u_dadpat_Tactical_orng_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_07_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_blue_plaid: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Blue)";
		uniformClass = "tg_u_dadpat_tactical_blue_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_08_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_red_plaid: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Red)";
		uniformClass = "tg_u_dadpat_tactical_red_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_09_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_grn_plaid: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Green)";
		uniformClass = "tg_u_dadpat_tactical_grn_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_10_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_herringbone: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Herringbone)";
		uniformClass = "tg_u_dadpat_tactical_herringbone";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_11_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_flamingo_dark: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Flamingo, Dark)";
		uniformClass = "tg_u_dadpat_tactical_flamingo_dark";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_12_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_orng_grn_palm: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Palm, Orange/Green)";
		uniformClass = "tg_u_dadpat_tactical_orng_grn_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_13_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_red_grn_hi: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Hawaiian, Red/Green)";
		uniformClass = "tg_u_dadpat_tactical_red_grn_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_14_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_sunset: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Sunset)";
		uniformClass = "tg_u_dadpat_tactical_sunset";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_15_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_pineapple: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Pineapple)";
		uniformClass = "tg_u_dadpat_tactical_pineapple";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_16_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_blu_yllw_hi: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Hawaiian, Blue/Yellow)";
		uniformClass = "tg_u_dadpat_tactical_blu_yllw_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_17_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	/*
	class tg_dadpat_tactical_tiki: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Tiki)";
		uniformClass = "tg_u_dadpat_tactical_tiki";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_18_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	*/
	
	class tg_dadpat_tactical_orng_grn_hi: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Hawaiian, Orange/Green)";
		uniformClass = "tg_u_dadpat_tactical_orng_grn_hi";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_19_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_flamingo_light: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Flamingo, Light)";
		uniformClass = "tg_u_dadpat_tactical_flamingo_light";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_20_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_dark_palm: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Palm, Dark)";
		uniformClass = "tg_u_dadpat_tactical_dark_palm";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_21_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_gold_plaid: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Gold)";
		uniformClass = "tg_u_dadpat_tactical_gold_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_22_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_pink_plaid: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Pink)";
		uniformClass = "tg_u_dadpat_tactical_pink_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_23_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_bw_plaid_1: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, B&W)";
		uniformClass = "tg_u_dadpat_tactical_bw_plaid_1";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_24_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_bw_plaid_2: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, B&W alt)";
		uniformClass = "tg_u_dadpat_tactical_bw_plaid_2";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_25_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_prp_plaid: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Purple)";
		uniformClass = "tg_u_dadpat_tactical_prp_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_26_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_yllw_plaid: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Yellow)";
		uniformClass = "tg_u_dadpat_tactical_yllw_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_27_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_cream_plaid: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Cream)";
		uniformClass = "tg_u_dadpat_tactical_cream_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_28_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_scotland_red_grn_plaid: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Red/Green Scottish)";
		uniformClass = "tg_u_dadpat_tactical_scotland_red_grn_plaid";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_29_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_tattersall: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Tattersall)";
		uniformClass = "tg_u_dadpat_tactical_tattersall";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_30_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_red_tartan: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Red Tartan)";
		uniformClass = "tg_u_dadpat_tactical_red_tartan";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_31_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_red_buffalo: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Red Buffalo)";
		uniformClass = "tg_u_dadpat_tactical_red_buffalo";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_32_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_grn_tartan: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Green Tartan)";
		uniformClass = "tg_u_dadpat_tactical_grn_tartan";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_33_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_grn_buffalo: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Green Buffalo)";
		uniformClass = "tg_u_dadpat_tactical_grn_buffalo";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_34_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_red_sawtooth: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Red Sawtooth)";
		uniformClass = "tg_u_dadpat_tactical_red_sawtooth";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_35_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
	class tg_dadpat_tactical_grn_sawtooth: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Green Sawtooth)";
		uniformClass = "tg_u_dadpat_tactical_grn_sawtooth";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_36_co.paa",
			"\tg\dad\Data\tg_b_u_tan_co.paa" // TAN
		};
	};
	
	class tg_dadpat_tactical_red_check: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Red Check)";
		uniformClass = "tg_u_dadpat_tactical_red_check";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_37_co.paa",
			"\A3\characters_f\BLUFOR\Data\clothing1_co.paa" // MTP
		};
	};
	
	class tg_dadpat_tactical_grn_check: tg_dadpat_tactical_blue_hi
	{
		displayName = "DADPAT (Tactical) (Plaid, Green Check)";
		uniformClass = "tg_u_dadpat_tactical_grn_check";
		hiddenSelectionsTextures[] =
		{
			"\tg\dad\Data\tg_u_dadpat_2_38_co.paa",
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa" // SAGE
		};
	};
	
};

class cfgWeapons 
{ 
	//********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class ItemCore; 
    class UniformItem; 
    class Uniform_Base;
	
	//*********************
	//*** Polo & Khakis ***
	//*********************
	
    class tg_u_dadpat_blue_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Hawaiian, Blue)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_blue_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_white: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (White)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_white"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_brown: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Brown)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_brown"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_red_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Hawaiian, Red)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_red_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_grn_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Palm, Green)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_grn_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_prp_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Palm, Purple)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_prp_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tacky: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Floral, Plaid)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tacky"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_floral: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Floral)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_floral"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_orng_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Orange)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_orng_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_blue_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Blue)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_blue_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_red_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Red)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_red_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_grn_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_grn_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_herringbone: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Herringbone)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_herringbone"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_flamingo_dark: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Flamingo, Dark)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_flamingo_dark"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_orng_grn_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Palm, Orange/Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_orng_grn_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_red_grn_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Hawaiian, Red/Green)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_red_grn_hi"; // name of linked character
            containerClass = "Supply50";
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_sunset: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Sunset)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_sunset"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_pineapple: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Pineapple)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_pineapple"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_blu_yllw_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Hawaiian, Blue/Yellow)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_blu_yllw_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	/*
	class tg_u_dadpat_tiki: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Tiki)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tiki"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	*/
	
	class tg_u_dadpat_orng_grn_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Hawaiian, Orange/Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_orng_grn_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_flamingo_light: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Flamingo, Light)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_flamingo_light"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_dark_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Palm, Dark)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_dark_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_gold_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Gold)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_gold_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_pink_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Pink)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_pink_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_bw_plaid_1: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, B&W)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_bw_plaid_1"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_bw_plaid_2: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, B&W alt)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_bw_plaid_2"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_prp_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Purple)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_prp_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_yllw_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Yellow)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_yllw_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_cream_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Cream)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_cream_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_scotland_red_grn_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Red/Green Scottish)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_scotland_red_grn_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	
	class tg_u_dadpat_tattersall: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Tattersall)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tattersall"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_red_tartan: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Red Tartan)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_red_tartan"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_red_buffalo: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Red Buffalo)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_red_buffalo"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_grn_tartan: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Green Tartan)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_grn_tartan"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_grn_buffalo: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Green Buffalo)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_grn_buffalo"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_red_sawtooth: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Red Sawtooth)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_red_sawtooth"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_grn_sawtooth: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Green Sawtooth)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_grn_sawtooth"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_red_check: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Red Check)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_red_check"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_grn_check: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Pants) (Plaid, Green Check)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_grn_check"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	//*********************
	//*** Polo & Shorts ***
	//*********************
	
	class tg_u_dadpat_shorts_blue_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Hawaiian, Blue)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_blue_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_red_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Hawaiian, Red)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_red_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_grn_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Palm, Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_grn_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_prp_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Palm, Purple)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_prp_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_tacky: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Floral, Plaid)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_tacky"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_floral: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Floral)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_floral"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_orng_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Orange)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_orng_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_blue_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Blue)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_blue_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_red_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Red)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_red_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_grn_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_grn_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_herringbone: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Herringbone)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_herringbone"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_flamingo_dark: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Flamingo, Dark)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_flamingo_dark"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_orng_grn_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Palm, Orange/Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_orng_grn_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_red_grn_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Hawaiian, Red/Green)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_red_grn_hi"; // name of linked character
            containerClass = "Supply50";
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_sunset: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Sunset)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_sunset"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_pineapple: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Pineapple)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_pineapple"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_blu_yllw_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Hawaiian, Blue/Yellow)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_blu_yllw_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	/*
	class tg_u_dadpat_shorts_tiki: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Tiki)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_tiki"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	*/
	
	class tg_u_dadpat_shorts_orng_grn_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Hawaiian, Orange/Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_orng_grn_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_flamingo_light: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Flamingo, Light)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_flamingo_light"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_dark_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Palm, Dark)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_dark_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_gold_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Gold)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_gold_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_pink_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Pink)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_pink_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_bw_plaid_1: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, B&W)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_bw_plaid_1"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_bw_plaid_2: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, B&W alt)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_bw_plaid_2"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_prp_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Purple)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_prp_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_yllw_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Yellow)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_yllw_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_cream_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Cream)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_cream_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_scotland_red_grn_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Red/Green Scottish)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_scotland_red_grn_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	
	class tg_u_dadpat_shorts_tattersall: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Tattersall)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_tattersall"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_red_tartan: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Red Tartan)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_red_tartan"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_red_buffalo: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Red Buffalo)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_red_buffalo"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_grn_tartan: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Green Tartan)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_grn_tartan"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_grn_buffalo: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Green Buffalo)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_grn_buffalo"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_red_sawtooth: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Red Sawtooth)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_red_sawtooth"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_grn_sawtooth: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Green Sawtooth)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_grn_sawtooth"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_red_check: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Red Check)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_red_check"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_shorts_grn_check: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Shorts) (Plaid, Green Check)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_shorts_grn_check"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	//**********************
	//*** Tactical Pants ***
	//**********************
	
	class tg_u_dadpat_tactical_blue_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Hawaiian, Blue)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_blue_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_red_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Hawaiian, Red)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_red_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_grn_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Palm, Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_grn_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_prp_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Palm, Purple)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_prp_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_tacky: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Floral, Plaid)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_tacky"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_floral: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Floral)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_Tactical_floral"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_orng_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Orange)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_orng_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_blue_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Blue)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_blue_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_red_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Red)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_red_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_grn_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_grn_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_herringbone: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Herringbone)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_herringbone"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_flamingo_dark: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Flamingo, Dark)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_flamingo_dark"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_orng_grn_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Palm, Orange/Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_orng_grn_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_red_grn_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Hawaiian, Red/Green)";
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_red_grn_hi"; // name of linked character
            containerClass = "Supply50";
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_sunset: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Sunset)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_sunset"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_pineapple: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Pineapple)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_pineapple"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_blu_yllw_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Hawaiian, Blue/Yellow)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_blu_yllw_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	/*
	class tg_u_dadpat_tactical_tiki: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Tiki)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_tiki"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	*/
	
	class tg_u_dadpat_tactical_orng_grn_hi: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Hawaiian, Orange/Green)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_orng_grn_hi"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_flamingo_light: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Flamingo, Light)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_flamingo_light"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_dark_palm: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Palm, Dark)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_dark_palm"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_gold_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Gold)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_gold_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_pink_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Pink)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_pink_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_bw_plaid_1: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, B&W)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_bw_plaid_1"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_bw_plaid_2: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, B&W alt)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_bw_plaid_2"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_prp_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Purple)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_prp_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_yllw_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Yellow)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_yllw_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_cream_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Cream)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_cream_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_scotland_red_grn_plaid: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Red/Green Scottish)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_scotland_red_grn_plaid"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	
	class tg_u_dadpat_tactical_tattersall: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Tattersall)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_tattersall"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_red_tartan: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Red Tartan)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_red_tartan"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_red_buffalo: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Red Buffalo)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_red_buffalo"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_grn_tartan: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Green Tartan)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_grn_tartan"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_grn_buffalo: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Green Buffalo)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_grn_buffalo"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_red_sawtooth: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Red Sawtooth)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_red_sawtooth"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_grn_sawtooth: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Green Sawtooth)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_grn_sawtooth"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_red_check: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Red Check)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_red_check"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_dadpat_tactical_grn_check: Uniform_Base
    { 
        scope = 2; 
        displayName = "DADPAT (Tactical) (Plaid, Green Check)"; 
		picture = "\tg\dad\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_dadpat_tactical_grn_check"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
};