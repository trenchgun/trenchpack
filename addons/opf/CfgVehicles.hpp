class CfgVehicles {
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
        uniformClass = "tg_u_gorka_afghan";
        hiddenSelections[] = {
            "camo_1",
            "camo_2",
            "Insignia"
        };
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_afghan_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "\tg\opf\Data\tg_o_u_gorka.rvmat"
        };
    };

    class tg_opf_gorka_blue_black: tg_opf_gorka_afghan {
        requiredAddons[] = {"A3_Data_F_Enoch"};
        displayName = "Gorka (Blue/Black)";
        uniformClass = "tg_u_gorka_blue_black";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_blue_black_co.paa"
        };
    };

    class tg_opf_gorka_blue: tg_opf_gorka_afghan {
        requiredAddons[] = {"A3_Data_F_Enoch"};
        displayName = "Gorka (Blue)";
        uniformClass = "tg_u_gorka_blue";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_blue_co.paa"
        };
    };

    class tg_opf_gorka_cbrn_black: tg_opf_gorka_afghan {
        requiredAddons[] = {"A3_Data_F_Enoch"};
        displayName = "Gorka (CBRN Black)";
        uniformClass = "tg_u_gorka_cbrn_black";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_cbrn_black_co.paa"
        };
    };

    class tg_opf_gorka_cbrn_black_alt: tg_opf_gorka_afghan {
        requiredAddons[] = {"A3_Data_F_Enoch"};
        displayName = "Gorka (CBRN Black) (alt)";
        uniformClass = "tg_u_gorka_cbrn_black_alt";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_cbrn_black_alt_co.paa"
        };
    };

    class tg_opf_gorka_cbrn: tg_opf_gorka_afghan {
        requiredAddons[] = {"A3_Data_F_Enoch"};
        displayName = "Gorka (CBRN)";
        uniformClass = "tg_u_gorka_cbrn";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_cbrn_co.paa"
        };
    };

    class tg_opf_gorka_grey: tg_opf_gorka_afghan {
        requiredAddons[] = {"A3_Data_F_Enoch"};
        displayName = "Gorka (Grey)";
        uniformClass = "tg_u_gorka_grey";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_grey_co.paa"
        };
    };

    class tg_opf_gorka_klmk: tg_opf_gorka_afghan {
        displayName = "Gorka (KLMK)";
        uniformClass = "tg_u_gorka_klmk";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_klmk_co.paa"
        };
    };

    class tg_opf_gorka_klmk_alt: tg_opf_gorka_afghan {
        displayName = "Gorka (KLMK) (alt)";
        uniformClass = "tg_u_gorka_klmk_alt";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_klmk_alt_co.paa"
        };
    };

    class tg_opf_gorka_klmk_reverse: tg_opf_gorka_afghan {
        displayName = "Gorka (KLMK Reverse)";
        uniformClass = "tg_u_gorka_klmk_reverse";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_klmk_reverse_co.paa"
        };
    };

    class tg_opf_gorka_klmk_reverse_alt: tg_opf_gorka_afghan {
        displayName = "Gorka (KLMK Reverse) (alt)";
        uniformClass = "tg_u_gorka_klmk_reverse_alt";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_klmk_reverse_alt_co.paa"
        };
    };

    class tg_opf_gorka_partizan: tg_opf_gorka_afghan {
        displayName = "Gorka (Partizan)";
        uniformClass = "tg_u_gorka_partizan";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_partizan_co.paa"
        };
    };

    class tg_opf_gorka_partizan_alt: tg_opf_gorka_afghan {
        displayName = "Gorka (Partizan) (alt)";
        uniformClass = "tg_u_gorka_partizan_alt";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_partizan_alt_co.paa"
        };
    };

    class tg_opf_gorka_partizan_autumn: tg_opf_gorka_afghan {
        displayName = "Gorka (Partizan Autumn)";
        uniformClass = "tg_u_gorka_partizan_autumn";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_partizan_autumn_co.paa"
        };
    };

    class tg_opf_gorka_partizan_autumn_alt: tg_opf_gorka_afghan {
        displayName = "Gorka (Partizan Autumn) (alt)";
        uniformClass = "tg_u_gorka_partizan_autumn_alt";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_gorka_partizan_autumn_alt_co.paa"
        };
    };

/* NOT WORKING? Try to fix later
    class tg_opf_csat_black: O_Soldier_base_F {
        author = "Trenchgun";
        _generalMacro = "O_soldier_F";
        scope = 1;
        displayName = "CSAT Fatigues (Black)";
        picture = "\tg\opf\Data\logo_small.paa";
        model = "\A3\characters_f\OPFOR\o_soldier_01.p3d";
        modelSides[] = {3,2,1,0};
        uniformClass = "tg_u_csat_black";
        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_csat_black_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "\tg\opf\Data\tg_o_u_csat.rvmat"
        };
    };

    class tg_opf_csat_blue: tg_opf_csat_black {
        displayName = "CSAT Fatigues (Blue)";
        uniformClass = "tg_u_csat_blue";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_csat_blue_co.paa"
        };
    };

    class tg_opf_csat_yellow: tg_opf_csat_black {
        displayName = "CSAT Fatigues (CBRN)";
        uniformClass = "tg_u_csat_yellow";
        hiddenSelectionsTextures[] = {
            "\tg\opf\Data\tg_o_u_csat_yellow_co.paa"
        };
    };
*/
};
