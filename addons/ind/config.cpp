class CfgPatches 
{ 
    class tg_ind_uniforms
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
    class tg_ind_faction // 
    { 
        displayName = "Trench's Units"; 
        priority = 3; // Position in list. 
        side = 2; // Opfor = 0, Blufor = 1, Indep = 2. 
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
    class I_Soldier_base_F; 

	//*********************
	//*** fatigues 
	//*********************
	
	/*
	class tg_fatigues_base: I_Soldier_base_F
	{
		author="Trenchgun";
		scope=0;
		picture="\tg_ind\Data\logo_small.paa";
		model="\tg_ind\U_UNTUCKED.p3d";
		modelSides[]={3,1};
		hiddenSelections[]=
		{
			"camo1", // shirt
			"camo2", // pants
			"camo3", // gloves
			"insignia"
		};
	};
	
	class tg_fatigues_black: tg_fatigues_base
	{
		scope = 2;
		displayName="Combat Fatigues (Black)";
		uniformClass="tg_u_fatigues_black";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_shirt_black_co.paa",
			"\tg_ind\Data\tg_i_u_pants_black_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	
	class tg_fatigues_olive: tg_fatigues_base
	{
		scope = 2;
		displayName="Combat Fatigues (Olive)";
		uniformClass="tg_u_fatigues_olive";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_shirt_olive_co.paa",
			"\tg_ind\Data\tg_i_u_pants_olive_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	
	class tg_fatigues_khaki: tg_fatigues_base
	{
		scope = 2;
		displayName="Combat Fatigues (Khaki)";
		uniformClass="tg_u_fatigues_khaki";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_shirt_khaki_co.paa",
			"\tg_ind\Data\tg_i_u_pants_khaki_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	
	class tg_fatigues_coyote: tg_fatigues_base
	{
		scope = 2;
		displayName="Combat Fatigues (Coyote)";
		uniformClass="tg_u_fatigues_coyote";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_shirt_coyote_co.paa",
			"\tg_ind\Data\tg_i_u_pants_coyote_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	
	//*********************
	//*** fatigues rolled sleeves
	//*********************

	class tg_fatigues_rs_base: I_Soldier_base_F
	{
		author="Trenchgun";
		scope=0;
		picture="\tg_ind\Data\logo_small.paa";
		model="\tg_ind\U_UNTUCKED_SHORT_SLEEVE.p3d";
		modelSides[]={3,1};
		hiddenSelections[]=
		{
			"camo1", // shirt
			"camo2", // pants
			"camo3", // gloves
			"insignia"
		};
	};
	
	class tg_fatigues_rs_black: tg_fatigues_rs_base
	{
		scope = 2;
		displayName="Combat Fatigues (Black) (RS)";
		uniformClass="tg_u_fatigues_rs_black";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_shirt_black_co.paa",
			"\tg_ind\Data\tg_i_u_pants_black_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	
	class tg_fatigues_rs_olive: tg_fatigues_rs_base
	{
		scope = 2;
		displayName="Combat Fatigues (Olive) (RS)";
		uniformClass="tg_u_fatigues_rs_olive";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_shirt_olive_co.paa",
			"\tg_ind\Data\tg_i_u_pants_olive_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	
	class tg_fatigues_rs_khaki: tg_fatigues_rs_base
	{
		scope = 2;
		displayName="Combat Fatigues (Khaki) (RS)";
		uniformClass="tg_u_fatigues_rs_khaki";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_shirt_khaki_co.paa",
			"\tg_ind\Data\tg_i_u_pants_khaki_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	
	class tg_fatigues_rs_coyote: tg_fatigues_rs_base
	{
		scope = 2;
		displayName="Combat Fatigues (Coyote) (RS)";
		uniformClass="tg_u_fatigues_rs_coyote";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_shirt_coyote_co.paa",
			"\tg_ind\Data\tg_i_u_pants_coyote_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	*/

	//*********************
	//*** fatigues tank top
	//*********************

	class tg_fatigues_tanktop_base: I_Soldier_base_F
	{
		author="Trenchgun";
		scope=0;
		picture="\tg_ind\Data\logo_small.paa";
		model="\A3\characters_f_enoch\Uniforms\I_E_Soldier_01_TankTop_F.p3d";
		modelSides[]={3,1};
		hiddenSelections[]=
		{
			"camo1", // shirt
			"camo2", // pants
			"camo3", // gloves
			"insignia"
		};
	};
	
	class tg_fatigues_tanktop_black: tg_fatigues_tanktop_base
	{
		scope = 2;
		displayName="Combat Fatigues (Black) (Tank Top)";
		uniformClass="tg_u_fatigues_tanktop_black";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_tanktop_white_co.paa",
			"\tg_ind\Data\tg_i_u_pants_black_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	
	class tg_fatigues_tanktop_olive: tg_fatigues_tanktop_base
	{
		scope = 2;
		displayName="Combat Fatigues (Olive) (Tank Top)";
		uniformClass="tg_u_fatigues_tanktop_olive";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_tanktop_black_co.paa",
			"\tg_ind\Data\tg_i_u_pants_olive_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	
	class tg_fatigues_tanktop_khaki: tg_fatigues_tanktop_base
	{
		scope = 2;
		displayName="Combat Fatigues (Khaki) (Tank Top)";
		uniformClass="tg_u_fatigues_tanktop_khaki";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_tanktop_olive_co.paa",
			"\tg_ind\Data\tg_i_u_pants_khaki_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
		};
	};
	
	class tg_fatigues_tanktop_coyote: tg_fatigues_tanktop_base
	{
		scope = 2;
		displayName="Combat Fatigues (Coyote) (Tank Top)";
		uniformClass="tg_u_fatigues_tanktop_coyote";
		hiddenSelectionsTextures[]=
		{
			"\tg_ind\Data\tg_i_u_tanktop_black_co.paa",
			"\tg_ind\Data\tg_i_u_pants_coyote_co.paa",
			"\tg_ind\Data\tg_i_u_gloves_black_co.paa"
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
	//*** fatigues 
	//*********************
	
	/*
    class tg_u_fatigues_black: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Black)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_black"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_fatigues_olive: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Olive)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_olive"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_fatigues_khaki: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Khaki)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_khaki"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_fatigues_coyote: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Coyote)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_coyote"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	//*********************
	//*** fatigues rolled sleeves 
	//*********************
	
	class tg_u_fatigues_rs_black: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Black) (RS)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_rs_black"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_fatigues_rs_olive: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Olive) (RS)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_rs_olive"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_fatigues_rs_khaki: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Khaki) (RS)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_rs_khaki"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_fatigues_rs_coyote: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Coyote) (RS)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_rs_coyote"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	*/
	
	//*********************
	//*** fatigues tank top
	//*********************
	
	class tg_u_fatigues_tanktop_black: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Black) (Tank Top)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_tanktop_black"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_fatigues_tanktop_olive: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Olive) (Tank Top)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_tanktop_olive"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_fatigues_tanktop_khaki: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Khaki) (Tank Top)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_tanktop_khaki"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	class tg_u_fatigues_tanktop_coyote: Uniform_Base
    { 
        scope = 2; 
        displayName = "Combat Fatigues (Coyote) (Tank Top)";
		picture = "\tg_ind\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d"; 
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_fatigues_tanktop_coyote"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
};