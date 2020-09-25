class CfgPatches
{
	class tg_misc_uniforms
	{
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
	class tg_misc_faction
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
	class tg_commando_black: B_Soldier_base_F
	{
		author="Trenchgun";
		_generalMacro="B_soldier_F";
		scope=1;
		displayName="Commando Sweater (Black)";
		picture="\tg\misc\Data\logo_small.paa";
		model="\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		modelSides[]={3,1};
		uniformClass="tg_u_swtr_black";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_i_u_swtr_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"
		};
	};
	class tg_commando_blue: tg_commando_black
	{
		displayName="Commando Sweater (Blue)";
		uniformClass="tr_u_swtr_blue";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_i_u_swtr_blue_co.paa"
		};
	};
	class tg_commando_erdl_arvn: tg_commando_black
	{
		displayName="Commando Sweater (ERDL ARVN)";
		uniformClass="tg_u_swtr_erdl_arvn";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_i_u_swtr_erdl_arvn_co.paa"
		};
	};
	class tg_commando_erdl: tg_commando_black
	{
		displayName="Commando Sweater (ERDL)";
		uniformClass="tg_u_swtr_erdl";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_i_u_swtr_erdl_co.paa"
		};
	};
	class tg_commando_erdl_oce: tg_commando_black
	{
		displayName="Commando Sweater (ERDL Ocean)";
		uniformClass="tg_u_swtr_erdl_oce";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_i_u_swtr_erdl_oce_co.paa"
		};
	};
	class tg_commando_ghost: tg_commando_black
	{
		displayName="Commando Sweater (Ghost)";
		uniformClass="tg_u_swtr_ghost";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_i_u_swtr_ghost_co.paa"
		};
	};
	
	class tg_commando_red: tg_commando_black
	{
		displayName="Commando Sweater (Red)";
		uniformClass="tg_u_swtr_red";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_i_u_swtr_red_co.paa"
		};
	};
	
	class tg_commando_navy: tg_commando_black
	{
		displayName="Commando Sweater (Navy)";
		uniformClass="tg_u_swtr_navy";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_i_u_swtr_navy_co.paa"
		};
	};
	
	class tg_commando_brown: tg_commando_black
	{
		displayName="Commando Sweater (Brown)";
		uniformClass="tg_u_swtr_brown";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_i_u_swtr_brown_co.paa"
		};
	};
	
	class tg_aaf_tan: B_Soldier_base_F
	{
		author="Trenchgun";
		_generalMacro="B_soldier_F";
		scope=1;
		displayName="Rifleman (Tan)";
		picture="\tg\misc\Data\logo_small.paa";
		model="\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		modelSides[]={3,1};
		uniformClass="tg_u_aaf_tan";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
		};
	};
	class tg_aaf_tan_short: tg_aaf_tan
	{
		displayName="Rifleman (Tan) (Rolled Sleeve)";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass="tg_u_aaf_tan_short";
		hiddenSelectionsTextures[]=
		{
			"A3\characters_f_exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"
		};
	};
	class tg_overalls_od: B_Soldier_base_F
	{
		DLC="Tank";
		author="Trenchgun";
		_generalMacro="B_soldier_F";
		scope=1;
		displayName="Overalls (Olive)";
		picture="\tg\misc\Data\logo_small.paa";
		model="\A3\characters_f_tank\Uniforms\U_Tank_crew_F.p3d";
		modelSides[]={3,1};
		uniformClass="tg_u_overalls_od";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_u_overalls_od_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\characters_f_tank\Uniforms\Data\U_Tank_crew_F.rvmat"
		};
	};
	class tg_overalls_tan: tg_overalls_od
	{
		DLC="Tanks";
		displayName="Overalls (Tan)";
		uniformClass="tg_u_overalls_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_u_overalls_tan_co.paa"
		};
	};
	class tg_overalls_khaki: tg_overalls_od
	{
		DLC="Tanks";
		displayName="Overalls (Khaki)";
		uniformClass="tg_u_overalls_khaki";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_u_overalls_khaki_co.paa"
		};
	};
	class tg_overalls_black: tg_overalls_od
	{
		DLC="Tanks";
		displayName="Overalls (Black)";
		uniformClass="tg_u_overalls_black";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_u_overalls_black_co.paa"
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class tg_u_swtr_black: Uniform_Base
	{
		scope=2;
		displayName="Commando Sweater (Black)";
		picture="\tg\misc\Data\UI\icon_i_u_swtr_black_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_commando_black";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_swtr_blue: Uniform_Base
	{
		scope=2;
		displayName="Commando Sweater (Blue)";
		picture="\tg\misc\Data\UI\icon_i_u_swtr_blue_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_commando_blue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_swtr_erdl_arvn: Uniform_Base
	{
		scope=2;
		displayName="Commando Sweater (ERDL ARVN)";
		picture="\tg\misc\Data\UI\icon_i_u_swtr_black_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_commando_erdl_arvn";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_swtr_erdl: Uniform_Base
	{
		scope=2;
		displayName="Commando Sweater (ERDL)";
		picture="\tg\misc\Data\UI\icon_i_u_swtr_olive_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_commando_erdl";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_swtr_erdl_oce: Uniform_Base
	{
		scope=2;
		displayName="Commando Sweater (ERDL Ocean)";
		picture="\tg\misc\Data\UI\icon_i_u_swtr_navy_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_commando_erdl_oce";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_swtr_ghost: Uniform_Base
	{
		scope=2;
		displayName="Commando Sweater (Ghost)";
		picture="\tg\misc\Data\UI\icon_i_u_swtr_navy_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_commando_ghost";
			containerClass="Supply50";
			mass=50;
		};
	};
	
	class tg_u_swtr_red: Uniform_Base
	{
		scope=2;
		displayName="Commando Sweater (Red)";
		picture="\tg\misc\Data\UI\icon_i_u_swtr_red_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_commando_red";
			containerClass="Supply50";
			mass=50;
		};
	};
	
	class tg_u_swtr_navy: Uniform_Base
	{
		scope=2;
		displayName="Commando Sweater (Navy)";
		picture="\tg\misc\Data\UI\icon_i_u_swtr_navy_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_commando_navy";
			containerClass="Supply50";
			mass=50;
		};
	};
	
	class tg_u_swtr_brown: Uniform_Base
	{
		scope=2;
		displayName="Commando Sweater (Brown)";
		picture="\tg\misc\Data\UI\icon_i_u_swtr_brown_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_commando_brown";
			containerClass="Supply50";
			mass=50;
		};
	};
	
	class tg_u_aaf_tan: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues [AAF] (Tan)";
		picture="\tg\misc\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_aaf_tan";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_aaf_tan_short: Uniform_Base
	{
		scope=2;
		displayName="Combat Fatigues [AAF] (Tan, Rolled Sleeves)";
		picture="\tg\misc\Data\logo_small.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_aaf_tan_short";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_overalls_od: Uniform_Base
	{
		scope=2;
		displayName="Overalls (Olive)";
		picture="\tg\misc\Data\UI\icon_u_overalls_olive_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_overalls_od";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_overalls_tan: Uniform_Base
	{
		scope=2;
		displayName="Overalls (Tan)";
		picture="\tg\misc\Data\UI\icon_u_overalls_coyote_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_overalls_tan";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_overalls_khaki: Uniform_Base
	{
		scope=2;
		displayName="Overalls (Khaki)";
		picture="\tg\misc\Data\UI\icon_u_overalls_khaki_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_overalls_khaki";
			containerClass="Supply50";
			mass=50;
		};
	};
	class tg_u_overalls_black: Uniform_Base
	{
		scope=2;
		displayName="Overalls (Black)";
		picture="\tg\misc\Data\UI\icon_u_overalls_black_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="tg_overalls_black";
			containerClass="Supply50";
			mass=50;
		};
	};
	
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	
	class tg_v_flak_vest_black: Vest_Camo_Base
	{
		author="Trenchgun";
		scope=2;
		displayName="Flak Vest (Black)";
		picture="\tg\misc\Data\logo_small.paa";
		model="\A3\Characters_F_epc\Civil\equip_press_vest_01";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_flak_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_epc\Civil\equip_press_vest_01";
			containerClass="Supply80";
			mass=15;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitPointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
			};
		};
	};
	class tg_v_flak_vest_coyote: tg_v_flak_vest_black
	{
		displayName="Flak Vest (Coyote)";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_flak_vest_coyote_co.paa"
		};
	};
	class tg_v_flak_vest_olive: tg_v_flak_vest_black
	{
		displayName="Flak Vest (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_flak_vest_olive_co.paa"
		};
	};
	class tg_v_flak_vest_khaki: tg_v_flak_vest_black
	{
		displayName="Flak Vest (Khaki)";
		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_flak_vest_khaki_co.paa"
		};
	};
	
	/******************************
	* Carrier Vest (LDF)
	*******************************/
	
	class tg_v_modular_base: Vest_Camo_Base
	{
		DLC = "Enoch";
		author="Trenchgun";
		scope = 0;
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"Camo"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
			hiddenSelections[] = {"Camo"};
			containerClass = "Supply60";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class tg_v_modular_light_base: tg_v_modular_base
	{
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			containerClass = "Supply130";
			mass = 70;
		};
	};
	
	class tg_v_modular_heavy_base: tg_v_modular_base
	{
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass = "Supply130";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
	
	class tg_v_modular_black: tg_v_modular_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Vest (Black)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_black_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_black_co.paa"
		};
	};
	
	class tg_v_modular_grey: tg_v_modular_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Vest (Grey)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_grey_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_grey_co.paa"
		};
	};
	
	class tg_v_modular_coyote: tg_v_modular_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Vest (Coyote)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_coyote_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_coyote_co.paa"
		};
	};
	
	class tg_v_modular_khaki: tg_v_modular_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Vest (Khaki)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_khaki_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_khaki_co.paa"
		};
	};
	
	class tg_v_modular_blue: tg_v_modular_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Vest (Blue)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_blue_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_blue_co.paa"
		};
	};
	
	class tg_v_modular_red: tg_v_modular_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Vest (Red)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_red_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_red_co.paa"
		};
	};
	
	class tg_v_modular_black_light: tg_v_modular_light_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Lite (Black)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_black_light_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_black_co.paa"
		};
	};
	
	class tg_v_modular_grey_light: tg_v_modular_light_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Lite (Grey)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_grey_light_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_grey_co.paa"
		};
	};
	
	class tg_v_modular_coyote_light: tg_v_modular_light_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Lite (Coyote)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_coyote_light_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_coyote_co.paa"
		};
	};
	
	class tg_v_modular_khaki_light: tg_v_modular_light_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Lite (Khaki)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_khaki_light_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_khaki_co.paa"
		};
	};
	
	class tg_v_modular_blue_light: tg_v_modular_light_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Lite (Blue)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_blue_light_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_blue_co.paa"
		};
	};
	
	class tg_v_modular_red_light: tg_v_modular_light_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier Lite (Red)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_red_light_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_red_co.paa"
		};
	};
	
	class tg_v_modular_black_heavy: tg_v_modular_heavy_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier GL Rig (Black)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_black_heavy_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_black_co.paa"
		};
	};
	
	class tg_v_modular_grey_heavy: tg_v_modular_heavy_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier GL Rig (Grey)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_grey_heavy_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_grey_co.paa"
		};
	};
	
	class tg_v_modular_coyote_heavy: tg_v_modular_heavy_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier GL Rig (Coyote)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_coyote_heavy_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_coyote_co.paa"
		};
	};
	
	class tg_v_modular_khaki_heavy: tg_v_modular_heavy_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier GL Rig (Khaki)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_khaki_heavy_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_khaki_co.paa"
		};
	};
	
	class tg_v_modular_blue_heavy: tg_v_modular_heavy_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier GL Rig (Blue)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_blue_heavy_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_blue_co.paa"
		};
	};
	
	class tg_v_modular_red_heavy: tg_v_modular_heavy_base
	{
		author = "Trenchgun";
		scope = 2;

		displayName = "Modular Carrier GL Rig (Red)";
		picture="\tg\misc\Data\UI\icon_m_v_modular_red_heavy_ca.paa";

		hiddenSelectionsTextures[]=
		{
			"\tg\misc\Data\tg_m_v_modular_red_co.paa"
		};
	};
	
	/******************************
	* Carrier Vest (INDEP)
	*******************************/
	
	class tg_v_carrier_lite_base: Vest_Camo_Base
	{
		author="Trenchgun";
		scope=0;
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_black_co.paa",
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	
	class tg_v_carrier_mid_base: Vest_Camo_Base
	{
		author="Trenchgun";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	
	class tg_v_carrier_gl_base: Vest_Camo_Base
	{
		author = "Trenchgun";
		scope = 0;
		model = "\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
		hiddenSelections[] = 
		{ 
			"camo1", 
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_olive_co.paa",
			"\tg\misc\Data\tg_m_v_carrier_shoulder_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass = "Supply120";
			mass = 80;
			hiddenSelections[] =
			{
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	
	
	// black
	class tg_v_carrier_lite_black: tg_v_carrier_lite_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest Lite (Black)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_lite_black_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_black_co.paa"
		};
	};
	
	class tg_v_carrier_mid_black: tg_v_carrier_mid_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest (Black)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_mid_black_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_black_co.paa"
		};
	};
	
	class tg_v_carrier_gl_black: tg_v_carrier_gl_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest GL (Black)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_gl_black_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_black_co.paa",
			"\tg\misc\Data\tg_m_v_carrier_shoulder_black_co.paa"
		};
	};
	
	// coyote
	class tg_v_carrier_lite_coyote: tg_v_carrier_lite_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest Lite (Coyote)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_lite_coyote_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_coyote_co.paa"
		};
	};
	
	class tg_v_carrier_mid_coyote: tg_v_carrier_mid_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest (Coyote)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_mid_coyote_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_coyote_co.paa"
		};
	};
	
	class tg_v_carrier_gl_coyote: tg_v_carrier_gl_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest GL (Coyote)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_gl_black_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_coyote_co.paa",
			"\tg\misc\Data\tg_m_v_carrier_shoulder_coyote_co.paa"
		};
	};
	
	// olive
	
	class tg_v_carrier_lite_olive: tg_v_carrier_lite_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest Lite (Olive)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_lite_olive_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_olive_co.paa"
		};
	};
	
	class tg_v_carrier_mid_olive: tg_v_carrier_mid_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest (Olive)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_mid_olive_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_olive_co.paa"
		};
	};
	
	class tg_v_carrier_gl_olive: tg_v_carrier_gl_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest GL (Olive)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_gl_olive_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_olive_co.paa",
			"\tg\misc\Data\tg_m_v_carrier_shoulder_olive_co.paa"
		};
	};
	
	// blue
	class tg_v_carrier_lite_blue: tg_v_carrier_lite_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest Lite (Blue)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_lite_blue_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_blue_co.paa"
		};
	};
	
	class tg_v_carrier_mid_blue: tg_v_carrier_mid_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest (Blue)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_mid_blue_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_blue_co.paa"
		};
	};
	
	class tg_v_carrier_gl_blue: tg_v_carrier_gl_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest GL (Blue)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_gl_blue_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_blue_co.paa",
			"\tg\misc\Data\tg_m_v_carrier_shoulder_blue_co.paa"
		};
	};
	
	// khaki
	class tg_v_carrier_lite_khaki: tg_v_carrier_lite_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest Lite (Khaki)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_lite_khaki_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_khaki_co.paa"
		};
	};
	
	class tg_v_carrier_mid_khaki: tg_v_carrier_mid_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest (Khaki)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_mid_khaki_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_khaki_co.paa"
		};
	};
	
	class tg_v_carrier_gl_khaki: tg_v_carrier_gl_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest GL (Khaki)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_gl_khaki_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_khaki_co.paa",
			"\tg\misc\Data\tg_m_v_carrier_shoulder_khaki_co.paa"
		};
	};
	
	// red
	class tg_v_carrier_lite_red: tg_v_carrier_lite_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest Lite (Red)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_lite_red_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_red_co.paa"
		};
	};
	
	class tg_v_carrier_mid_red: tg_v_carrier_mid_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest (Red)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_mid_red_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_red_co.paa"
		};
	};
	
	class tg_v_carrier_gl_red: tg_v_carrier_gl_base
	{
		author = "Trenchgun";
		scope = 2;
		displayName = "Carrier Vest GL (Red)";
		picture = "\tg\misc\Data\UI\icon_m_v_carrier_gl_red_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"\tg\misc\Data\tg_m_v_carrier_rig_red_co.paa",
			"\tg\misc\Data\tg_m_v_carrier_shoulder_red_co.paa"
		};
	};
	
	
	/******************************
	* Advanced Modular Helmet (LDF)
	*******************************/
	
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	
	class fast_base: HelmetBase
	{
		scope = 0;
		model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
		DLC = "Enoch";
		hiddenSelections[] = {"Camo"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
			modelSides[] = {2};
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class fast_headset_base: fast_base
	{
		model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
			mass = 35;
		};
	};
	
	class fast_ears_base: fast_base
	{
		model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_ear_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_ear_F.p3d";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 7;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class fast_chops_base: fast_base
	{
		model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_chops_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_chops_F.p3d";
			mass = 50;
			class HitpointsProtectionInfo: HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 7;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 3;
					passThrough = 0.1;
				};
			};
		};
	};
	
	// olive
	class tg_h_fast_olive: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Olive)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_olive_co.paa"
		};
	};
	
	class tg_h_fast_headset_olive: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (Olive)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_olive_co.paa"
		};
	};
	
	class tg_h_fast_ears_olive: fast_ears_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Ears) (Olive)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_ears_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_olive_co.paa"
		};
	};
	
	class tg_h_fast_chops_olive: fast_chops_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Chops) (Olive)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_chops_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_olive_co.paa"
		};
	};
	
	// black
	class tg_h_fast_black: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Black)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_black_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_black_co.paa"
		};
	};
	
	class tg_h_fast_headset_black: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (Black)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_black_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_black_co.paa"
		};
	};
	
	class tg_h_fast_ears_black: fast_ears_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Ears) (Black)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_ears_black_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_black_co.paa"
		};
	};
	
	class tg_h_fast_chops_black: fast_chops_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Chops) (Black)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_chops_black_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_black_co.paa"
		};
	};
	
	// grey
	class tg_h_fast_grey: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Grey)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_grey_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_grey_co.paa"
		};
	};
	
	class tg_h_fast_headset_grey: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (Grey)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_grey_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_grey_co.paa"
		};
	};
	
	class tg_h_fast_ears_grey: fast_ears_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Ears) (Grey)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_ears_grey_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_grey_co.paa"
		};
	};
	
	class tg_h_fast_chops_grey: fast_chops_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Chops) (Grey)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_chops_grey_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_grey_co.paa"
		};
	};
	
	// coyote
	class tg_h_fast_coyote: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Coyote)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_coyote_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_coyote_co.paa"
		};
	};
	
	class tg_h_fast_headset_coyote: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (Coyote)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_coyote_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_coyote_co.paa"
		};
	};
	
	class tg_h_fast_ears_coyote: fast_ears_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Ears) (Coyote)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_ears_coyote_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_coyote_co.paa"
		};
	};
	
	class tg_h_fast_chops_coyote: fast_chops_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Chops) (Coyote)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_chops_coyote_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_coyote_co.paa"
		};
	};
	
	// khaki
	class tg_h_fast_khaki: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Khaki)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_khaki_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_khaki_co.paa"
		};
	};
	
	class tg_h_fast_headset_khaki: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (Khaki)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_khaki_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_khaki_co.paa"
		};
	};
	
	class tg_h_fast_ears_khaki: fast_ears_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Ears) (Khaki)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_ears_khaki_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_khaki_co.paa"
		};
	};
	
	class tg_h_fast_chops_khaki: fast_chops_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Chops) (Khaki)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_chops_khaki_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_khaki_co.paa"
		};
	};
	
	// blue
	class tg_h_fast_blue: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Blue)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_blue_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_blue_co.paa"
		};
	};
	
	class tg_h_fast_headset_blue: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (Blue)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_blue_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_blue_co.paa"
		};
	};
	
	class tg_h_fast_ears_blue: fast_ears_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Ears) (Blue)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_ears_blue_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_blue_co.paa"
		};
	};
	
	class tg_h_fast_chops_blue: fast_chops_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Chops) (Blue)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_chops_blue_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_blue_co.paa"
		};
	};
	
	// red
	class tg_h_fast_red: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Red)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_red_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_red_co.paa"
		};
	};
	
	class tg_h_fast_headset_red: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (Red)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_red_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_red_co.paa"
		};
	};
	
	class tg_h_fast_ears_red: fast_ears_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Ears) (Red)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_ears_red_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_red_co.paa"
		};
	};
	
	class tg_h_fast_chops_red: fast_chops_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Chops) (Red)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_chops_red_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_red_co.paa"
		};
	};
	
	// ATACS AU
	class tg_h_fast_atacs_au: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (ATACS AU)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_atacs_au_co.paa"
		};
	};
	
	class tg_h_fast_headset_atacs_au: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (ATACS AU)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_atacs_au_co.paa"
		};
	};
	
	class tg_h_fast_ears_olive_atacs_au: fast_ears_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Ears) (ATACS AU)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_ears_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_atacs_au_co.paa"
		};
	};
	
	class tg_h_fast_chops_olive_atacs_au: fast_chops_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Chops) (ATACS AU)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_chops_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_atacs_au_co.paa"
		};
	};
	
	// ATACS AU 2
	class tg_h_fast_atacs_au_2: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (ATACS AU) (alt)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_atacs_au_2_co.paa"
		};
	};
	
	class tg_h_fast_headset_atacs_au_2: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (ATACS AU) (alt)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_atacs_au_2_co.paa"
		};
	};
	
	// ATACS FG
	class tg_h_fast_atacs_fg: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (ATACS FG)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_atacs_fg_co.paa"
		};
	};
	
	class tg_h_fast_headset_atacs_fg: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (ATACS FG)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_atacs_fg_co.paa"
		};
	};
	
	// ATACS FG 2
	class tg_h_fast_atacs_fg_2: fast_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (ATACS FG) (alt)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_atacs_fg_2_co.paa"
		};
	};
	
	class tg_h_fast_headset_atacs_fg_2: fast_headset_base
	{
		author = "Trenchgun";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Adv. Mod. Helmet (Headset) (ATACS FG) (alt)";
		picture = "\tg\misc\Data\UI\icon_m_h_fast_olive_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\tg\misc\Data\tg_m_h_fast_atacs_fg_2_co.paa"
		};
	};

	
};
class cfgMods
{
	author="trenchgun";
	timepacked="1564755645";
};
