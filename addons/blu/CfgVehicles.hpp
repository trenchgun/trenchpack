class CfgVehicles
{
	class B_Soldier_base_F;
	
	// Combat Fatigues
	// various retextures for the vanilla BLUFOR uniform
	
	class tg_b_black: B_Soldier_base_F
	{
		author="Trenchgun";
		_generalMacro="B_soldier_F";
		scope=1;
		displayName="Soldier (Black)";
		picture="\tg\blu\Data\logo_small.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[]={3,1};
		uniformClass="tg_b_u_black";
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
	
	class tg_b_black_rs: tg_b_black
	{
		displayName="Soldier (Black) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_black_rs";
	};
	
	class tg_b_black2: tg_b_black
	{
		displayName="Soldier (Black/Tan)";
		uniformClass="tg_b_u_black2";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_black2_co.paa"
		};
	};
	
	class tg_b_black2_rs: tg_b_black2
	{
		displayName="Soldier (Black/Tan) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_black2_rs";
	};
	
	class tg_b_tan: tg_b_black
	{
		displayName="Soldier (Tan)";
		uniformClass="tg_b_u_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_tan_co.paa"
		};
	};
	
	class tg_b_tan_rs: tg_b_tan
	{
		displayName="Soldier (Tan) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_tan_rs";
	};
	
	class tg_b_erdl_arvn: tg_b_black
	{
		displayName="Soldier (ERDL ARVN)";
		uniformClass="tg_b_u_erdl_arvn";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_erdl_arvn_co.paa"
		};
	};
	
	class tg_b_erdl_arvn_rs: tg_b_erdl_arvn
	{
		displayName="Soldier (ERDL ARVN) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_erdl_arvn_rs";
	};
	
	class tg_b_erdl_oce: tg_b_black
	{
		displayName="Soldier (ERDL Ocean)";
		uniformClass="tg_b_u_erdl_oce";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_erdl_oce_co.paa"
		};
	};
	
	class tg_b_erdl_oce_rs: tg_b_erdl_oce
	{
		displayName="Soldier (ERDL Ocean) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_erdl_oce_rs";
	};
	
	class tg_b_ghost: tg_b_black
	{
		displayName="Soldier (Ghost)";
		uniformClass="tg_b_u_ghost";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_ghost_co.paa"
		};
	};
	
	class tg_b_ghost_rs: tg_b_ghost
	{
		displayName="Soldier (Ghost) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_ghost_rs";
	};
	
	class tg_b_nwupat: tg_b_black
	{
		displayName="Soldier (NWUPAT)";
		uniformClass="tg_b_u_nwupat";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_nwupat_co.paa"
		};
	};
	
	class tg_b_nwupat_rs: tg_b_nwupat
	{
		displayName="Soldier (NWUPAT) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_nwupat_rs";
	};
	class tg_b_sage: tg_b_black
	{
		displayName="Soldier (Sage)";
		uniformClass="tg_b_u_sage";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"
		};
	};
	
	class tg_b_sage_rs: tg_sage
	{
		displayName="Soldier (Sage) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_sage_rs";
	};
	
	class tg_b_erdl: tg_b_black
	{
		displayName="Soldier (ERDL)";
		uniformClass="tg_b_u_erdl";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"
		};
	};
	
	class tg_b_erdl_rs: tg_b_erdl
	{
		displayName="Soldier (ERDL) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_erdl_rs";
	};
	
	class tg_b_mcamb: tg_b_black
	{
		displayName="Soldier (Mutlicam Black)";
		uniformClass="tg_b_u_mcamb";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_mcamb_co.paa"
		};
	};
	
	class tg_b_mcamb_rs: tg_b_mcamb
	{
		displayName="Soldier (Multicam Black) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_mcamb_rs";
	};
	class tg_b_mcamb_black: tg_b_black
	{
		displayName="Soldier (Mutlicam Black/Black)";
		uniformClass="tg_b_u_mcamb_black";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_softshellblack_mcamb_co.paa"
		};
	};
	
	class tg_b_mcamb_black_rs: tg_b_mcamb_black
	{
		displayName="Soldier (Multicam Black/Black) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_mcamb_black_rs";
	};
	
	class tg_b_mcamb_grey: tg_b_black
	{
		displayName="Soldier (Mutlicam Black/Grey)";
		uniformClass="tg_b_u_mcamb_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_softshellgrey_mcamb_co.paa"
		};
	};
	
	class tg_b_mcamb_grey_rs: tg_b_mcamb_grey
	{
		displayName="Soldier (Multicam Black/Grey) (RS)";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass="tg_b_u_mcamb_grey_rs";
	};
	
	// Fatigues, T-Shirt
	// adds some black T-Shirt variants to the vanilla Combat Fatigues (Tee)
	
	class tg_b_mcam_t_black: B_Soldier_base_F
	{
		author="Trenchgun";
		scope=1;
		displayName="Soldier (MTP) (Black Tee)";
		picture="\tg\blu\Data\logo_small.paa";
		model="a3\characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[]={3,1};
		uniformClass="tg_b_u_mcam_t_black";
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
	
	class tg_b_ctrg_t_black: tg_b_mcam_t_black
	{
		displayName="Soldier (CTRG) (Black Tee)";
		uniformClass="tg_b_u_ctrg_t_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	class tg_b_erdl_t_black: tg_b_mcam_t_black
	{
		displayName="Soldier (ERDL) (Black Tee)";
		uniformClass="tg_b_u_erdl_t_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	class tg_b_sage_t_black: tg_b_mcam_t_black
	{
		displayName="Soldier (Sage) (Black Tee)";
		uniformClass="tg_b_u_sage_t_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	class tg_b_tropic_t_black: tg_b_mcam_t_black
	{
		displayName="Soldier (Tropic) (Black Tee)";
		uniformClass="tg_b_u_tropic_t_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	class tg_b_ctrg_stealth_t_black: tg_b_mcam_t_black
	{
		displayName="Soldier (CTRG Stealth) (Black Tee)";
		uniformClass="tg_b_u_ctrg_tropic_t_black";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	
	// CTRG Stealth Fatigues
	// advanced Gen3 fatigues with the collar up
	
	class tg_b_erdl_collar: B_Soldier_base_F
	{
		author = "Trenchgun";
		scope = 0;
		displayName = "Soldier ERDL (Collar)";
		picture = "\tg\blu\Data\logo_small.paa";
		model = "a3\characters_f_exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		modelSides = {3,1};
		uniformClass = "tg_b_u_erdl_collar";
		hiddenSelections[] = 
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F\BLUFOR\Data\clothing1.rvmat"
		};
	};
	
	class tg_b_sage_collar: tg_b_erdl_collar
	{
		displayName = "Soldier Sage (Collar)";
		uniformClass = "tg_b_u_erdl_collar";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"
		};
	};
	
	class tg_b_mtp_collar: tg_b_erdl_collar
	{
		displayName = "Soldier MTP (Collar)";
		uniformClass = "tg_b_u_mtp_collar";
		hiddenSelectionsTextures[]=
		{
			"A3\Characters_F\BLUFOR\Data\clothing1_co.paa"
		};
	};
	
	class tg_b_black_collar: tg_b_erdl_collar
	{
		displayName = "Soldier Black (Collar)";
		uniformClass = "tg_b_u_black_collar";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_black_co.paa"
		};
	};
	
	class tg_b_black_tan_collar: tg_b_erdl_collar
	{
		displayName = "Soldier Black/Tan (Collar)";
		uniformClass = "tg_b_u_black_tan_collar";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_black2_co.paa"
		};
	};
	
	class tg_b_ghost_collar: tg_b_erdl_collar
	{
		displayName = "Soldier Ghost (Collar)";
		uniformClass = "tg_b_u_ghost_collar";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_ghost_co.paa"
		};
	};
	
	class tg_b_tan_collar: tg_b_erdl_collar
	{
		displayName = "Soldier Tan (Collar)";
		uniformClass = "tg_b_u_soldier_tan_collar";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_tan_co.paa"
		};
	};
	
	class tg_b_mcamb_collar: tg_b_erdl_collar
	{
		displayName = "Soldier Multicam Black (Collar)";
		uniformClass = "tg_b_u_mcamb_collar";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_mcamb_co.paa"
		};
	};
	
	class tg_b_mcamb_black_collar: tg_b_erdl_collar
	{
		displayName = "Soldier Multicam Black (Softshell Black) (Collar)";
		uniformClass = "tg_b_u_mcamb_black_collar";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_softshellblack_mcamb_co.paa"
		};
	};
	
	class tg_b_mcamb_grey_collar: tg_b_erdl_collar
	{
		displayName = "Soldier Multicam Black (Softshell Grey) (Collar)";
		uniformClass = "tg_b_u_mcamb_grey_collar";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_softshellgrey_mcamb_co.paa"
		};
	};
	
	
	// survival fatigues ----------------------------------------------------------
	// various retextures of the survival fatigues (T-Shirt, Gen3 pants, diving fins)
	
	class B_soldier_survival_F: B_Soldier_base_F
	{
	};
	
	class tg_b_survival_black: B_soldier_survival_F
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
	
	class tg_b_survival_black2: tg_b_survival_black
	{
		displayName="Survival (Black)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_black_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	class tg_b_survival_tan: tg_b_survival_black
	{
		displayName="Survival (Tan)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_tan_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	class tg_b_survival_erdl_arvn: tg_b_survival_black
	{
		displayName="Survival (ERDL ARVN)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_erdl_arvn_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	class tg_b_survival_erdl_oce: tg_b_survival_black
	{
		displayName="Survival (ERDL Ocean)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_erdl_oce_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_blue_co.paa"
		};
	};
	
	class tg_b_survival_ghost: tg_b_survival_black
	{
		displayName="Survival (Ghost)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_ghost_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	class tg_b_survival_nwupat: tg_b_survival_black
	{
		displayName="Survival (NWUPAT)";
		hiddenSelectionsTextures[]=
		{
			"\tg\blu\Data\tg_b_u_nwupat_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	class tg_b_survival_sage: tg_b_survival_black
	{
		displayName="Survival (Sage)";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	class tg_b_survival_erdl: tg_b_survival_black
	{
		displayName="Survival (ERDL)";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_wdl_co.paa",
			"a3\characters_f\common\data\diver_suit_co",
			"a3\characters_f\common\data\basicbody_black_co.paa"
		};
	};
	
	// Parkas ------------------------------------------------------------------------------------
	// BLUFOR themed retextures of the Contact DLC Granit Suit
	
	class tg_b_parka_m90: B_Soldier_base_F 
	{
        author = "Trenchgun"; 
        _generalMacro = "B_soldier_F"; 
        scope = 1; 
        displayName = "M90 (Parka)";
		picture = "\tg\blu\Data\logo_small.paa";
        model = "\A3\characters_f_enoch\Uniforms\Gorka_01_F.p3d";
		modelSides[] = {3,2,1,0};
        uniformClass = "tg_b_u_parka_m90"; 	// class of uniform
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
	
	
	class tg_b_parka_m90_large: tg_b_parka_m90
	{
		displayName = "M90 (Parka)";
		uniformClass = "tg_b_u_parka_m90_large";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m90_large_co.paa"
		};
	};
	
	class tg_b_parka_m90_winter: tg_b_parka_m90
	{
		displayName = "M90 Winter (Parka)";
		uniformClass = "tg_b_u_parka_m90_winter";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m90_winter_large_co.paa"
		};
	};
	
	class tg_b_parka_3cd: tg_b_parka_m90
	{
		displayName = "Parka (DCU)";
		uniformClass = "tg_b_u_parka_3cd";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_3cd_co.paa"
		};
	};
	
	class tg_b_parka_6cd: tg_b_parka_m90
	{
		displayName = "Parka (DBDU)";
		uniformClass = "tg_b_u_parka_6cd";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_6cd_co.paa"
		};
	};
	
	class tg_b_parka_m81: tg_b_parka_m90
	{
		displayName = "Parka (M81)";
		uniformClass = "tg_b_u_parka_m81";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m81_co.paa"
		};
	};
	
	class tg_b_parka_m81_winter_bottom: tg_b_parka_m90
	{
		displayName = "Parka (M81/Winter)";
		uniformClass = "tg_b_u_parka_m81_winter";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m81_winter_co.paa"
		};
	};
	
	class tg_b_parka_m81_winter_top: tg_b_parka_m90
	{
		displayName = "Parka (Winter/M81)";
		uniformClass = "tg_b_u_parka_winter_m81";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_winter_m81_co.paa"
		};
	};
	
	class tg_b_parka_flektarn: tg_b_parka_m90
	{
		displayName = "Parka (Flektarn)";
		uniformClass = "tg_b_u_parka_flektarn";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_flektarn_co.paa"
		};
	};
	
	class tg_b_parka_flektarn_alt: tg_b_parka_m90
	{
		displayName = "Parka (Flektarn alt.)";
		uniformClass = "tg_b_u_parka_flektarn_alt";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_flektarn_alt_co.paa"
		};
	};
	
	class tg_b_parka_m90_bottom_winter_top: tg_b_parka_m90
	{
		displayName = "M90 (Parka Winter/M90)";
		uniformClass = "tg_b_u_parka_m90_bottom_winter_top";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m90_bottom_winter_top_co.paa"
		};
	};
	
	class tg_b_parka_m90_top_winter_bottom: tg_b_parka_m90
	{
		displayName = "M90 (Parka M90/Winter)";
		uniformClass = "tg_b_u_parka_m90_top_winter_bottom";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_m90_top_winter_bottom_co.paa"
		};
	};
	
	
	/* Desert Night Top */
	class tg_b_parka_night_3cd: tg_b_parka_m90
	{
		displayName = "Parka (Night/DCU)";
		uniformClass = "tg_b_u_parka_night_3cd";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_night_3cd_co.paa"
		};
	};
	
	class tg_b_parka_night_6cd: tg_b_parka_m90
	{
		displayName = "Parka (Night/DBDU)";
		uniformClass = "tg_b_u_parka_night_6cd";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_night_6cd_co.paa"
		};
	};
	
	class tg_b_parka_night_m81: tg_b_parka_m90
	{
		displayName = "Parka (Night/M81/Black)";
		uniformClass = "tg_b_u_parka_night_m81";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_night_m81_co.paa"
		};
	};
	

	
	
	/* Civ Jackets */
	
	/* Black */
	class tg_b_parka_black_3cd: tg_b_parka_m90
	{
		displayName = "Jacket (Black/DCU)";
		uniformClass = "tg_b_u_parka_black_3cd";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_black_3cd_co.paa"
		};
	};
	
	class tg_b_parka_black_khaki: tg_b_parka_m90
	{
		displayName = "Jacket (Black/Khaki)";
		uniformClass = "tg_b_u_parka_black_khaki";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_black_khaki_co.paa"
		};
	};
	
	class tg_b_parka_black_m81: tg_b_parka_m90
	{
		displayName = "Jacket (Black/M81)";
		uniformClass = "tg_b_u_parka_black_m81";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_black_m81_co.paa"
		};
	};
	
	class tg_b_parka_black_multicam: tg_b_parka_m90
	{
		displayName = "Jacket (Black/Multicam)";
		uniformClass = "tg_b_u_parka_black_multicam";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_black_multicam_co.paa"
		};
	};
	
	/* Blue */
	class tg_b_parka_blue_3cd: tg_b_parka_m90
	{
		displayName = "Jacket (Blue/DCU)";
		uniformClass = "tg_b_u_parka_blue_3cd";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_blue_3cd_co.paa"
		};
	};
	
	class tg_b_parka_blue_khaki: tg_b_parka_m90
	{
		displayName = "Jacket (Blue/Khaki)";
		uniformClass = "tg_b_u_parka_blue_khaki";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_blue_khaki_co.paa"
		};
	};
	
	class tg_b_parka_blue_m81: tg_b_parka_m90
	{
		displayName = "Jacket (Blue/M81)";
		uniformClass = "tg_b_u_parka_blue_m81";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_blue_m81_co.paa"
		};
	};
	
	class tg_b_parka_blue_multicam: tg_b_parka_m90
	{
		displayName = "Jacket (Blue/Multicam)";
		uniformClass = "tg_b_u_parka_blue_multicam";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_blue_multicam_co.paa"
		};
	};
	
	/* Olive */
	class tg_b_parka_olive_3cd: tg_b_parka_m90
	{
		displayName = "Jacket (Olive/DCU)";
		uniformClass = "tg_b_u_parka_olive_3cd";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_olive_3cd_co.paa"
		};
	};
	
	class tg_b_parka_olive_khaki: tg_b_parka_m90
	{
		displayName = "Jacket (Olive/Khaki)";
		uniformClass = "tg_b_u_parka_olive_khaki";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_olive_khaki_co.paa"
		};
	};
	
	class tg_b_parka_olive_m81: tg_b_parka_m90
	{
		displayName = "Jacket (Olive/M81)";
		uniformClass = "tg_b_u_parka_olive_m81";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_olive_m81_co.paa"
		};
	};
	
	class tg_b_parka_olive_multicam: tg_b_parka_m90
	{
		displayName = "Jacket (Olive/Multicam)";
		uniformClass = "tg_b_u_parka_olive_multicam";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_olive_multicam_co.paa"
		};
	};
	
	class tg_b_parka_brown_m81: tg_b_parka_m90
	{
		displayName = "Jacket (Brown/M81)";
		uniformClass = "tg_b_u_parka_brown_m81";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_brown_m81_co.paa"
		};
	};
	
	class tg_b_parka_green_m81: tg_b_parka_m90
	{
		displayName = "Jacket (Green/M81)";
		uniformClass = "tg_b_u_parka_green_m81";
		hiddenSelectionsTextures[] =
		{
			"\tg\blu\Data\tg_b_u_parka_green_m81_co.paa"
		};
	};
	
};