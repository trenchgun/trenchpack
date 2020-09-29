class CfgPatches
{
	class tg_blu_uniforms
	{
		name = "Trenchpack";
		author = "Trenchgun";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_INDEP",
			"A3_Characters_F_Common",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_epc"
		};
	};
};
class cfgFactionClasses
{
	class tg_blu_faction
	{
		displayName="Trench's Units";
		priority=3;
		side=1;
		icon="";
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class tg_soldier_black: B_Soldier_base_F
	{
		author="Trenchgun";
		_generalMacro="B_soldier_F";
		scope=1;
		displayName="Soldier (Black)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[]={3,1};
		uniformClass="tg_u_black";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F\BLUFOR\Data\clothing1.rvmat"
		};
	};
	class tg_soldier_black_rs: tg_soldier_black
	{
		displayName="Soldier (Black) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_u_black_rs";
	};
	class tg_soldier_black2: tg_soldier_black
	{
		displayName="Soldier (Black/Tan)";
		uniformClass="tg_u_black2";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_black2_co.paa"
		};
	};
	class tg_soldier_black2_rs: tg_soldier_black2
	{
		displayName="Soldier (Black/Tan) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_u_black2_rs";
	};
	class tg_soldier_tan: tg_soldier_black
	{
		displayName="Soldier (Tan)";
		uniformClass="tg_u_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_tan_co.paa"
		};
	};
	class tg_soldier_tan_rs: tg_soldier_tan
	{
		displayName="Soldier (Tan) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_u_tan_rs";
	};
	class tg_soldier_erdl_arvn: tg_soldier_black
	{
		displayName="Soldier (ERDL ARVN)";
		uniformClass="tg_u_erdl_arvn";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_erdl_arvn_co.paa"
		};
	};
	class tg_soldier_erdl_arvn_rs: tg_soldier_erdl_arvn
	{
		displayName="Soldier (ERDL ARVN) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_u_erdl_arvn_rs";
	};
	class tg_soldier_erdl_oce: tg_soldier_black
	{
		displayName="Soldier (ERDL Ocean)";
		uniformClass="tg_u_erdl_oce";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_erdl_oce_co.paa"
		};
	};
	class tg_soldier_erdl_oce_rs: tg_soldier_erdl_oce
	{
		displayName="Soldier (ERDL Ocean) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_u_erdl_oce_rs";
	};
	class tg_soldier_ghost: tg_soldier_black
	{
		displayName="Soldier (Ghost)";
		uniformClass="tg_u_ghost";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_ghost_co.paa"
		};
	};
	class tg_soldier_ghost_rs: tg_soldier_ghost
	{
		displayName="Soldier (Ghost) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_u_ghost_rs";
	};
	class tg_soldier_nwupat: tg_soldier_black
	{
		displayName="Soldier (NWUPAT)";
		uniformClass="tg_u_nwupat";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_nwupat_co.paa"
		};
	};
	class tg_soldier_nwupat_rs: tg_soldier_nwupat
	{
		displayName="Soldier (NWUPAT) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_u_nwupat_rs";
	};
	class tg_soldier_sage: tg_soldier_black
	{
		displayName="Soldier (Sage)";
		uniformClass="tg_u_sage";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"
		};
	};
	class tg_soldier_sage_rs: tg_soldier_sage
	{
		displayName="Soldier (Sage) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_u_sage_rs";
	};
	class tg_soldier_erdl: tg_soldier_black
	{
		displayName="Soldier (ERDL)";
		uniformClass="tg_u_erdl";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"
		};
	};
	class tg_soldier_erdl_rs: tg_soldier_erdl
	{
		displayName="Soldier (ERDL) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_u_erdl_rs";
	};
	class tg_soldier_mcam_t_black: B_Soldier_base_F
	{
		author="Trenchgun";
		scope=1;
		displayName="Soldier (MTP) (Black Tee)";
		picture="\tg\blu\Data\logo_small.paa";
		model="a3\characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[]={3,1};
		uniformClass="tg_u_mcam_t_black";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Characters_F\BLUFOR\Data\clothing1_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F\BLUFOR\Data\clothing1.rvmat"
		};
	};
	class tg_soldier_ctrg_t_black: tg_soldier_mcam_t_black
	{
		displayName="Soldier (CTRG) (Black Tee)";
		uniformClass="tg_u_ctrg_t_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tg_soldier_erdl_t_black: tg_soldier_mcam_t_black
	{
		displayName="Soldier (ERDL) (Black Tee)";
		uniformClass="tg_u_erdl_t_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tg_soldier_sage_t_black: tg_soldier_mcam_t_black
	{
		displayName="Soldier (Sage) (Black Tee)";
		uniformClass="tg_u_sage_t_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tg_soldier_tropic_t_black: tg_soldier_mcam_t_black
	{
		displayName="Soldier (Tropic) (Black Tee)";
		uniformClass="tg_u_tropic_t_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tg_soldier_ctrg_stealth_t_black: tg_soldier_mcam_t_black
	{
		displayName="Soldier (CTRG Stealth) (Black Tee)";
		uniformClass="tg_u_ctrg_tropic_t_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class B_soldier_survival_F: B_Soldier_base_F
	{
	};
	class tg_survival_black: B_soldier_survival_F
	{
		author="Trenchgun";
		_generalMacro="B_soldier_survival_F";
		scope=1;
		displayName="Survival (Black/Tan)";
		picture="\tg\blu\Data\logo_small.paa";
		model="a3\characters_F_epa\BLUFOR\b_soldier_survival_01.p3d";
		modelSides[]={3,1};
		uniformClass="U_B_survival_uniform";
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		shownUnderwaterSelections[]=
		{
			"unhide",
			"unhide2"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"a3\characters_F\common\data\diver_equip_nato_co.paa",
			"a3\characters_F\common\data\diver_equip_nato_co.paa",
			"a3\characters_f\data\visors_ca.paa"
		};
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_black2_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\characters_F\BLUFOR\Data\clothing1.rvmat",
			"",
			""
		};
	};
	class tg_survival_black2: tg_survival_black
	{
		displayName="Survival (Black)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_black_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tg_survival_tan: tg_survival_black
	{
		displayName="Survival (Tan)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_tan_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tg_survival_erdl_arvn: tg_survival_black
	{
		displayName="Survival (ERDL ARVN)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_erdl_arvn_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tg_survival_erdl_oce: tg_survival_black
	{
		displayName="Survival (ERDL Ocean)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_erdl_oce_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_blue_co.paa"
		};
	};
	class tg_survival_ghost: tg_survival_black
	{
		displayName="Survival (Ghost)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_ghost_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tg_survival_nwupat: tg_survival_black
	{
		displayName="Survival (NWUPAT)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_nwupat_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tg_survival_sage: tg_survival_black
	{
		displayName="Survival (Sage)";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	class tg_survival_erdl: tg_survival_black
	{
		displayName="Survival (ERDL)";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	// Parkas
	class tg_blu_parka_m90: B_Soldier_base_F 
	{
        author = "Trenchgun"; 
        _generalMacro = "B_soldier_F"; 
        scope = 1; 
        displayName = "M90 (Parka 1)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\characters_f_enoch\Uniforms\Gorka_01_F.p3d";
		modelSides[] = {3,2,1,0};
        uniformClass = "tg_u_parka_m90"; 	// class of uniform
        hiddenSelections[] = 
		{
			"camo_1",
			"camo_2",
			"Insignia"
		}; 
        hiddenSelectionsTextures[] = 
		{ // set texture .paa
			"\tg\blu\Data\tg_b_u_parka_m90_large_co.paa"
		};	
        hiddenSelectionsMaterials[] = 
		{ // set rvmat
			"\tg\blu\Data\tg_b_u_parka.rvmat"
		};  
    };
	
	/*
	class tg_blu_parka_m90_large: tg_blu_parka_m90
	{
		displayName = "M90 (Parka 2)";
		uniformClass = "tg_u_parka_m90_large";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m90_large_co.paa"
		};
	};
	*/
	
	class tg_blu_parka_m90_winter: tg_blu_parka_m90
	{
		displayName = "M90 Winter (Parka 1)";
		uniformClass = "tg_u_parka_m90_winter";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m90_winter_large_co.paa"
		};
	};
	
	/*
	class tg_blu_parka_m90_winter_large: tg_blu_parka_m90
	{
		displayName = "M90 Winter (Parka 2)";
		uniformClass = "tg_u_parka_m90_winter_large";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m90_winter_large_co.paa"
		};
	};
	*/
	
	class tg_blu_parka_chocchip: tg_blu_parka_m90
	{
		displayName = "Parka (Chocolate Chip)";
		uniformClass = "tg_u_parka_chocchip";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_chocchip_co.paa"
		};
	};
	
	class tg_blu_parka_erdl: tg_blu_parka_m90
	{
		displayName = "Parka (ERDL)";
		uniformClass = "tg_u_parka_erdl";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_erdl_co.paa"
		};
	};
	
	class tg_blu_parka_erdl_winter_bottom: tg_blu_parka_m90
	{
		displayName = "Parka (ERDL/Winter)";
		uniformClass = "tg_u_parka_erdl_winter_bottom";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_erdl_winter_bottom_co.paa"
		};
	};
	
	class tg_blu_parka_erdl_winter_top: tg_blu_parka_m90
	{
		displayName = "Parka (Winter/ERDL)";
		uniformClass = "tg_u_parka_erdl_winter_top";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_erdl_winter_top_co.paa"
		};
	};
	
	class tg_blu_parka_flektarn: tg_blu_parka_m90
	{
		displayName = "Parka (Flektarn)";
		uniformClass = "tg_u_parka_flektarn";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_flektarn_co.paa"
		};
	};
	
	class tg_blu_parka_flektarn_alt: tg_blu_parka_m90
	{
		displayName = "Parka (Flektarn alt.)";
		uniformClass = "tg_u_parka_flektarn_alt";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_flektarn_alt_co.paa"
		};
	};
	
	class tg_blu_parka_m90_bottom_winter_top: tg_blu_parka_m90
	{
		displayName = "M90 (Parka Winter/M90)";
		uniformClass = "tg_u_parka_m90_bottom_winter_top";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m90_bottom_winter_top_co.paa"
		};
	};
	
	class tg_blu_parka_m90_top_winter_bottom: tg_blu_parka_m90
	{
		displayName = "M90 (Parka M90/Winter)";
		uniformClass = "tg_u_parka_m90_top_winter_bottom";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m90_top_winter_bottom_co.paa"
		};
	};
	
	/* Need to get a better MARPAT woodland texture
	class tg_blu_parka_marpat: tg_blu_parka_m90
	{
		displayName = "Parka (MARPAT Woodland)";
		uniformClass = "tg_u_parka_marpat";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_marpat_co.paa"
		};
	};
	*/
	
	class tg_blu_parka_marpat_desert: tg_blu_parka_m90
	{
		displayName = "Parka (MARPAT Desert)";
		uniformClass = "tg_u_parka_marpat_desert";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_marpat_desert_co.paa"
		};
	};
	
	class tg_blu_parka_night_chocchip: tg_blu_parka_m90
	{
		displayName = "Parka (Night/Chocolate Chip)";
		uniformClass = "tg_u_parka_night_chocchip";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_night_chocchip_co.paa"
		};
	};
	
	class tg_blu_parka_night_erdl: tg_blu_parka_m90
	{
		displayName = "Parka (Night/ERDL)";
		uniformClass = "tg_u_parka_night_erdl";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_night_erdl_co.paa"
		};
	};
	
	/* Need a better MARPAT woodland texture
	class tg_blu_parka_night_marpat: tg_blu_parka_m90
	{
		displayName = "Parka (Night/MARPAT Woodland)";
		uniformClass = "tg_u_parka_night_marpat";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_night_marpat_co.paa"
		};
	};
	*/
	
	class tg_blu_parka_night_marpat_desert: tg_blu_parka_m90
	{
		displayName = "Parka (Night/MARPAT Desert)";
		uniformClass = "tg_u_parka_night_marpat_desert";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_night_marpat_desert_co.paa"
		};
	};
	
	/* Need a better Tricolor texture
	class tg_blu_parka_night_tricolor: tg_blu_parka_m90
	{
		displayName = "Parka (Night/Tricolor)";
		uniformClass = "tg_u_parka_night_tricolor";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_night_tricolor_co.paa"
		};
	};
	
	class tg_blu_parka_tricolor: tg_blu_parka_m90
	{
		displayName = "Parka (Tricolor)";
		uniformClass = "tg_u_parka_tricolor";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_tricolor_co.paa"
		};
	};
	*/
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class tg_u_black: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (Black)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_black";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_black_rs: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (Black) (RS)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_black_rs";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_black2: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (Black/Tan)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_black2";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_black2_rs: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (Black/Tan) (RS)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_black2_rs";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_tan: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (Tan)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_tan";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_tan_rs: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (Tan) (RS)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_tan_rs";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_erdl_arvn: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (ERDL ARVN)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_erdl_arvn";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_erdl_arvn_rs: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (ERDL ARVN) (RS)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_erdl_arvn_rs";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_erdl_oce: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (ERDL Ocean)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_erdl_oce";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_erdl_oce_rs: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (ERDL Ocean) (RS)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_erdl_oce_rs";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_ghost: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (Ghost)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_ghost";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_ghost_rs: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (Ghost) (RS)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_ghost_rs";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_nwupat: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (NWUPAT)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_nwupat";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_nwupat_rs: Uniform_Base
	{
		scope=2;
		displayName="Fatigues (NWUPAT) (RS)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_nwupat_rs";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_sage: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (Sage)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_sage";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_sage_rs: Uniform_Base
	{
		scope=2;
		displayName="Recon Fatigues (Sage)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_sage_rs";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_erdl: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (ERDL)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_erdl";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_erdl_rs: Uniform_Base
	{
		scope=2;
		displayName="Recon Fatigues (ERDL)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_erdl_rs";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_mcam_t_black: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (MTP) (Black Tee)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_mcam_t_black";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_ctrg_t_black: Uniform_Base
	{
		scope=2;
		displayName="CTRG Combat Uniform (Black Tee)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_ctrg_t_black";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_erdl_t_black: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (ERDL) (Tee)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_erdl_t_black";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_sage_t_black: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (Sage) (Tee)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_sage_t_black";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_tropic_t_black: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues (Tropic) (Black Tee)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_tropic_t_black";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_ctrg_stealth_t_black: Uniform_Base
	{
		scope=2;
		displayName="CTRG Stealth Uniform (Black Tee)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_soldier_ctrg_stealth_t_black";
			containerClass="Supply50";
			mass=50;
		};
	};
	class U_B_survival_uniform: Uniform_Base
	{
	};
	class tg_u_survival_black: U_B_survival_uniform
	{
		author="Trenchgun";
		scope=2;
		displayName="Survival Fatigues (Black/Tan)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass="tg_survival_black";
			containerClass="Supply50";
			uniformType="Neopren";
			mass=50;
		};
	};
	class tg_u_survival_black2: U_B_survival_uniform
	{
		scope=2;
		displayName="Survival Fatigues (Black)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass="tg_survival_black2";
			containerClass="Supply50";
			mass=50;
			uniformType="Neopren";
		};
	};
	class tg_u_survival_tan: U_B_survival_uniform
	{
		scope=2;
		displayName="Survival Fatigues (Tan)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass="tg_survival_tan";
			containerClass="Supply50";
			mass=50;
			uniformType="Neopren";
		};
	};
	class tg_u_survival_erdl_arvn: U_B_survival_uniform
	{
		scope=2;
		displayName="Survival Fatigues (ERDL_ARVN)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass="tg_survival_erdl_arvn";
			containerClass="Supply50";
			mass=50;
			uniformType="Neopren";
		};
	};
	class tg_u_survival_erdl_oce: U_B_survival_uniform
	{
		scope=2;
		displayName="Survival Fatigues (ERDL Ocean)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass="tg_survival_erdl_oce";
			containerClass="Supply50";
			mass=50;
			uniformType="Neopren";
		};
	};
	class tg_u_survival_ghost: U_B_survival_uniform
	{
		scope=2;
		displayName="Survival Fatigues (Ghost)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass="tg_survival_ghost";
			containerClass="Supply50";
			mass=50;
			uniformType="Neopren";
		};
	};
	class tg_u_survival_nwupat: U_B_survival_uniform
	{
		scope=2;
		displayName="Survival Fatigues (NWUPAT)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass="tg_survival_nwupat";
			containerClass="Supply50";
			mass=50;
			uniformType="Neopren";
		};
	};
	class tg_u_survival_sage: U_B_survival_uniform
	{
		scope=2;
		displayName="Survival Fatigues (Sage)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass="tg_survival_sage";
			containerClass="Supply50";
			mass=50;
			uniformType="Neopren";
		};
	};
	class tg_u_survival_erdl: U_B_survival_uniform
	{
		scope=2;
		displayName="Survival Fatigues (ERDL)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass="tg_survival_erdl";
			containerClass="Supply50";
			mass=50;
			uniformType="Neopren";
		};
	};
	
	class tg_u_parka_m90: Uniform_Base
    { 
		dlc=""
        scope = 2; 
        displayName = "M90 (Parka)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_blu_parka_m90"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	
	/*
	class tg_u_parka_m90_large: Uniform_Base
    { 
        scope = 2; 
        displayName = "M90 (Parka 2)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";		
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_blu_parka_m90_large"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	*/
	
	class tg_u_parka_m90_winter: Uniform_Base
    { 
        scope = 2; 
        displayName = "M90 (Parka Winter)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_m90_winter"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	/*
	class tg_u_parka_m90_winter_large: Uniform_Base
    { 
        scope = 2;
        displayName = "M90 Winter (Parka 2)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem { 
			uniformModel="-";
            uniformClass = "tg_blu_parka_m90_winter_large"; // name of linked character
            containerClass = "Supply50"; 
            mass = 50; 
        };
    };
	*/
	
	class tg_u_parka_chocchip: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (Chocolate Chip)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_chocchip"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	class tg_u_parka_erdl: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (ERDL)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_erdl"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	class tg_u_parka_erdl_winter_bottom: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (ERDL/Winter)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_erdl_winter_bottom"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	class tg_u_parka_erdl_winter_top: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (Winter/ERDL)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_erdl_winter_top"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	class tg_u_parka_flektarn: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (Flektarn)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_flektarn"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	class tg_u_parka_flektarn_alt: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (Flektarn Alt.)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_flektarn_alt"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	class tg_u_parka_m90_bottom_winter_top: Uniform_Base
    { 
        scope = 2; 
        displayName = "M90 (Parka Winter/M90)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_m90_bottom_winter_top"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	class tg_u_parka_m90_top_winter_bottom: Uniform_Base
    { 
        scope = 2; 
        displayName = "M90 (Parka M90/Winter)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_m90_top_winter_bottom"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	/*
	class tg_u_parka_marpat: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (MARPAT Woodland)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_marpat"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	*/
	
	class tg_u_parka_marpat_desert: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (MARPAT Desert)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_marpat_desert"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	class tg_u_parka_night_chocchip: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (Night/Chocolate Chip)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_night_chocchip"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	class tg_u_parka_night_erdl: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (Night/ERDL)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_night_erdl"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	/*
	class tg_u_parka_night_marpat: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (Night/MARPAT Woodland)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_night_marpat"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	*/
	
	class tg_u_parka_night_marpat_desert: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (Night/MARPAT Desert)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_night_marpat_desert"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	/*
	class tg_u_parka_night_tricolor: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (Night/Tricolor)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_night_tricolor"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	
	class tg_u_parka_tricolor: Uniform_Base
    { 
        scope = 2; 
        displayName = "Parka (Triclor)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        class ItemInfo : UniformItem {
			uniformModel="-";
            uniformClass = "tg_blu_parka_tricolor"; // name of linked character
            containerClass = "Supply50";
            mass = 50;
        };
    };
	*/
	
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	
	class tg_b_h_helmet_black: ItemCore
	{
		author="Trenchgun";
		scope=2;
		displayName="Combat Helmet (Black)";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_h_helmet_black_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	
	class tg_b_h_helmet_enhanced_black: tg_b_h_helmet_black
	{
		scope=2;
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		displayName="ECH (Black)";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		class ItemInfo: ItemInfo
		{
			mass=50;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	
	class tg_b_h_helmet_light_black: tg_b_h_helmet_black
	{
		author="Trenchgun";
		picture="\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		displayName="LCH (Black)";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		descriptionShort="$STR_A3_SP_AL_I";
		class ItemInfo: ItemInfo
		{
			mass=20;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
	
	class tg_b_h_helmet_grey: tg_b_h_helmet_black
	{
		displayName="Combat Helmet (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_h_helmet_grey_co.paa"
		};
	};
	
	class tg_b_h_helmet_enhanced_grey: tg_b_h_helmet_enhanced_black
	{
		displayName="ECH (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_h_helmet_grey_co.paa"
		};
	};
	
	class tg_b_h_helmet_light_grey: tg_b_h_helmet_light_black
	{
		displayName="LCH (Grey)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_h_helmet_grey_co.paa"
		};
	};
	
	class tg_b_h_helmet_olive: tg_b_h_helmet_black
	{
		displayName="Combat Helmet (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_h_helmet_olive_co.paa"
		};
	};
	
	class tg_b_h_helmet_enhanced_olive: tg_b_h_helmet_enhanced_black
	{
		displayName="ECH (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_h_helmet_olive_co.paa"
		};
	};
	
	class tg_b_h_helmet_light_olive: tg_b_h_helmet_light_black
	{
		displayName="LCH (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_h_helmet_olive_co.paa"
		};
	};
	
	class tg_b_h_helmet_coyote: tg_b_h_helmet_black
	{
		displayName="Combat Helmet (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_h_helmet_coyote_co.paa"
		};
	};
	
	class tg_b_h_helmet_enhanced_coyote: tg_b_h_helmet_enhanced_black
	{
		displayName="ECH (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_h_helmet_coyote_co.paa"
		};
	};
	
	class tg_b_h_helmet_light_coyote: tg_b_h_helmet_light_black
	{
		displayName="LCH (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_h_helmet_coyote_co.paa"
		};
	};
	
};
class cfgMods
{
	author="trenchgun";
	timepacked="1564755659";
};
