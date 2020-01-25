class CfgPatches 
{ 
    class tg_opf_uniforms
    { 
		name = "Trenchpack";
		author = "Trenchgun";
        units[] = {}; 
        weapons[] = {}; 
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
    class tg_opf_faction // 
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

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class O_Soldier_base_F;  

	class tg_opf_gorka_afghan: O_Soldier_base_F 
	{
		requiredAddons[] = {"A3_Data_F_Enoch"};
        author = "Trenchgun"; 
        _generalMacro = "O_soldier_F";
		DLC = "Enoch";
        scope = 1; 
        displayName = "Gorka (Afghan)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\characters_f_enoch\Uniforms\Gorka_01_F.p3d";
		modelSides[] = {3,2,1,0};
        uniformClass = "tg_u_gorka_afghan"; 	// class of uniform
        hiddenSelections[] = 
		{
			"camo_1",
			"camo_2",
			"Insignia"
		}; 
        hiddenSelectionsTextures[] = 
		{ // set texture .paa
			"\tg\opf\Data\tg_o_u_gorka_afghan_co.paa"
		};	
        hiddenSelectionsMaterials[] = 
		{ // set rvmat
			"\tg\opf\Data\tg_o_u_gorka.rvmat"
		};  
    };

	class tg_opf_gorka_blue_black: tg_opf_gorka_afghan
	{
		requiredAddons[] = {"A3_Data_F_Enoch"};
		displayName = "Gorka (Blue/Black)";
		uniformClass = "tg_u_gorka_blue_black";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_blue_black_co.paa"
		};
	};
	
	class tg_opf_gorka_blue: tg_opf_gorka_afghan
	{
		requiredAddons[] = {"A3_Data_F_Enoch"};
		displayName = "Gorka (Blue)";
		uniformClass = "tg_u_gorka_blue";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_blue_co.paa"
		};
	};
	
	class tg_opf_gorka_cbrn_black: tg_opf_gorka_afghan
	{
		requiredAddons[] = {"A3_Data_F_Enoch"};
		displayName = "Gorka (CBRN Black)";
		uniformClass = "tg_u_gorka_cbrn_black";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_cbrn_black_co.paa"
		};
	};
	
	class tg_opf_gorka_cbrn_black_alt: tg_opf_gorka_afghan
	{
		requiredAddons[] = {"A3_Data_F_Enoch"};
		displayName = "Gorka (CBRN Black) (alt)";
		uniformClass = "tg_u_gorka_cbrn_black_alt";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_cbrn_black_alt_co.paa"
		};
	};
	
	class tg_opf_gorka_cbrn: tg_opf_gorka_afghan
	{
		requiredAddons[] = {"A3_Data_F_Enoch"};
		displayName = "Gorka (CBRN)";
		uniformClass = "tg_u_gorka_cbrn";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_cbrn_co.paa"
		};
	};
	
	class tg_opf_gorka_grey: tg_opf_gorka_afghan
	{
		requiredAddons[] = {"A3_Data_F_Enoch"};
		displayName = "Gorka (Grey)";
		uniformClass = "tg_u_gorka_grey";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_grey_co.paa"
		};
	};
	
	class tg_opf_gorka_klmk: tg_opf_gorka_afghan
	{
		displayName = "Gorka (KLMK)";
		uniformClass = "tg_u_gorka_klmk";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_klmk_co.paa"
		};
	};
	
	class tg_opf_gorka_klmk_alt: tg_opf_gorka_afghan
	{
		displayName = "Gorka (KLMK) (alt)";
		uniformClass = "tg_u_gorka_klmk_alt";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_klmk_alt_co.paa"
		};
	};
	
	class tg_opf_gorka_klmk_reverse: tg_opf_gorka_afghan
	{
		displayName = "Gorka (KLMK Reverse)";
		uniformClass = "tg_u_gorka_klmk_reverse";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_klmk_reverse_co.paa"
		};
	};
	
	class tg_opf_gorka_klmk_reverse_alt: tg_opf_gorka_afghan
	{
		displayName = "Gorka (KLMK Reverse) (alt)";
		uniformClass = "tg_u_gorka_klmk_reverse_alt";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_klmk_reverse_alt_co.paa"
		};
	};
	
	class tg_opf_gorka_partizan: tg_opf_gorka_afghan
	{
		displayName = "Gorka (Partizan)";
		uniformClass = "tg_u_gorka_partizan";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_partizan_co.paa"
		};
	};
	
	class tg_opf_gorka_partizan_alt: tg_opf_gorka_afghan
	{
		displayName = "Gorka (Partizan) (alt)";
		uniformClass = "tg_u_gorka_partizan_alt";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_partizan_alt_co.paa"
		};
	};
	
	class tg_opf_gorka_partizan_autumn: tg_opf_gorka_afghan
	{
		displayName = "Gorka (Partizan Autumn)";
		uniformClass = "tg_u_gorka_partizan_autumn";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_partizan_autumn_co.paa"
		};
	};
	
	class tg_opf_gorka_partizan_autumn_alt: tg_opf_gorka_afghan
	{
		displayName = "Gorka (Partizan Autumn) (alt)";
		uniformClass = "tg_u_gorka_partizan_autumn_alt";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_gorka_partizan_autumn_alt_co.paa"
		};
	};
	
	/* NOT WORKING? Try to fix later
	class tg_opf_csat_black: O_Soldier_base_F 
	{
        author = "Trenchgun"; 
        _generalMacro = "O_soldier_F"; 
        scope = 1; 
        displayName = "CSAT Fatigues (Black)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\characters_f\OPFOR\o_soldier_01.p3d";
		modelSides[] = {3,2,1,0};
        uniformClass = "tg_u_csat_black"; 	// class of uniform
        hiddenSelections[] = 
		{
			"Camo",
			"insignia"
		}; 
        hiddenSelectionsTextures[] = 
		{ // set texture .paa
			"\tg\opf\Data\tg_o_u_csat_black_co.paa"
		};	
        hiddenSelectionsMaterials[] = 
		{ // set rvmat
			"\tg\opf\Data\tg_o_u_csat.rvmat"
		};  
    };
	
	class tg_opf_csat_blue: tg_opf_csat_black
	{
		displayName = "CSAT Fatigues (Blue)";
		uniformClass = "tg_u_csat_blue";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_csat_blue_co.paa"
		};
	};
	
	class tg_opf_csat_yellow: tg_opf_csat_black
	{
		displayName = "CSAT Fatigues (CBRN)";
		uniformClass = "tg_u_csat_yellow";
		hiddenSelectionsTextures[] =
		{
			"\tg\opf\Data\tg_o_u_csat_yellow_co.paa"
		};
	};
	*/
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
	
    class tg_u_gorka_afghan: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (Afghan)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_afghan"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_blue_black: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (Blue/Black)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_blue_black"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_blue: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (Blue)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_blue"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_cbrn_black: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (CBRN Black)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_cbrn_black"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_cbrn_black_alt: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (CBRN Black) (alt)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_cbrn_black_alt"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_cbrn: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (CBRN)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_cbrn"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_grey: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (Grey)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_grey"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_klmk: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (KLMK)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_klmk"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_klmk_alt: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (KLMK) (alt)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_klmk_alt"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_klmk_reverse: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (KLMK Reverse)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_klmk_reverse"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_klmk_reverse_alt: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (KLMK Reverse) (alt)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_klmk_reverse_alt"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_partizan: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (Partizan)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_partizan"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_partizan_alt: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (Partizan) (alt)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_partizan_alt"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_partizan_autumn: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (Partizan Autumn)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_partizan_autumn"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_gorka_partizan_autumn_alt: Uniform_Base
    { 
        scope = 2; 
        displayName = "Gorka (Partizan Autumn) (alt)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_gorka_partizan_autumn_alt"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	/*
	class tg_u_csat_black: Uniform_Base
    { 
        scope = 2; 
        displayName = "CSAT Fatigues (Black)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_csat_black"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_csat_blue: Uniform_Base
    { 
        scope = 2; 
        displayName = "CSAT Fatigues (Blue)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_csat_blue"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_csat_yellow: Uniform_Base
    { 
        scope = 2; 
        displayName = "CSAT Fatigues (CBRN)";
		picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_opf_csat_yellow"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	*/
};