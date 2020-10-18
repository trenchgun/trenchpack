class CfgPatches
{
	class tg_cup_uniforms
	{
		units[]={};
		weapons[]={
			tg_cup_6b3_pioneer_tan,
			tg_cup_6b3_pioneer_olive,
			tg_cup_6b3_pioneer_black,
			tg_cup_6b3_pioneer_black_olive,
			tg_cup_6b43_tan,
			tg_cup_6b43_tan_pelvis,
			tg_cup_6b43_tan_shoulder,
			tg_cup_6b43_tan_shoulder_pelvis,
			tg_cup_6b43_olive,
			tg_cup_6b43_olive_pelvis,
			tg_cup_6b43_olive_shoulder,
			tg_cup_6b43_olive_shoulder_pelvis,
			tg_cup_6b43_black,
			tg_cup_6b43_black_pelvis,
			tg_cup_6b43_black_shoulder,
			tg_cup_6b43_black_shoulder_pelvis
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_INDEP",
			"A3_Characters_F_Common",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_epc",
			"CUP_Creatures_People_Military_DummyInfantrySet",
			"CUP_Creatures_People_Core",
			"CUP_Creatures_Military_PMC"
		};
	};
};
class cfgFactionClasses
{
	class tg_cup_faction
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
	/****************************/
	/*	Soldier definitions		*/
	/****************************/
	
	class B_Soldier_base_F;
	
	/* fatigues models */
	/*
		fatigues:
		\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_kneeless.p3d
		
		fatigues kneepads:
		\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform.p3d
		
		fatigues rolled sleeves:
		\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_kneeless_rolled.p3d
		
		fatigues kneepads rolled sleeves:
		\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_rolled.p3d
		
		fatigues gloves:
		\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_kneeless_gloves.p3d
	
		fatigues kneepads gloves:
		\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_gloves.p3d
		
		fatigues gloves rolled sleeves:
		\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_kneeless_gloves_rolled.p3d
		
		fatigues kneepads gloves rolled sleeves:
		\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_gloves_rolled.p3d
	
	*/
	
	class tg_cup_soldier_fatigues: B_Soldier_base_F
	{
		author="trenchgun";
		dlc="CUP_Units";
		scope=0;
		scopeCurator=0;
		displayName="Fatigues";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_kneeless.p3d";
		uniformClass="tg_cup_fatigues";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\uniform_pmc_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\uniform_kneeless.rvmat"
		};
	};
	
	class tg_cup_soldier_fatigues_rolled: B_Soldier_base_F
	{
		author="trenchgun";
		dlc="CUP_Units";
		scope=0;
		scopeCurator=0;
		displayName="Fatigues Rolled";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_kneeless_rolled.p3d";
		uniformClass="tg_cup_fatigues_rolled";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\uniform_pmc_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\uniform_kneeless.rvmat"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves: B_Soldier_base_F
	{
		author="trenchgun";
		dlc="CUP_Units";
		scope=0;
		scopeCurator=0;
		displayName="Fatigues Gloves";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_kneeless_gloves.p3d";
		uniformClass="tg_cup_fatigues_gloves";
		hiddenSelections[]=
		{
			"camo",	// uniform
			"camo3"	// gloves
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\uniform_pmc_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\oakley_brown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\uniform_kneeless.rvmat",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\oakley.rvmat"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_rolled: B_Soldier_base_F
	{
		author="trenchgun";
		dlc="CUP_Units";
		scope=0;
		scopeCurator=0;
		displayName="Fatigues Gloves Rolled";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_kneeless_gloves_rolled.p3d";
		uniformClass="tg_cup_fatigues_gloves_rolled";
		hiddenSelections[]=
		{
			"camo",	// uniform
			"camo3"	// gloves
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\uniform_pmc_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\oakley_brown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\uniform_kneeless.rvmat",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\oakley.rvmat"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads: B_Soldier_base_F
	{
		author="trenchgun";
		dlc="CUP_Units";
		scope=0;
		scopeCurator=0;
		displayName="Fatigues Kneepads";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform.p3d";
		uniformClass="tg_cup_fatigues_kneepads";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\uniform_pmc_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\uniform.rvmat"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_rolled: B_Soldier_base_F
	{
		author="trenchgun";
		dlc="CUP_Units";
		scope=0;
		scopeCurator=0;
		displayName="Fatigues Kneepads Rolled";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_rolled.p3d";
		uniformClass="tg_cup_fatigues_kneepads_rolled";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\uniform_pmc_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\uniform.rvmat"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves: B_Soldier_base_F
	{
		author="trenchgun";
		dlc="CUP_Units";
		scope=0;
		scopeCurator=0;
		displayName="Fatigues Kneepads Gloves";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_gloves.p3d";
		uniformClass="tg_cup_fatigues_kneepads_gloves";
		hiddenSelections[]=
		{
			"camo",	// uniform
			"camo3"	// gloves
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\uniform_pmc_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\oakley_brown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\uniform.rvmat",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\oakley.rvmat"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_rolled: B_Soldier_base_F
	{
		author="trenchgun";
		dlc="CUP_Units";
		scope=0;
		scopeCurator=0;
		displayName="Fatigues Kneepads Gloves Rolled";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Uniform_gloves_rolled.p3d";
		uniformClass="tg_cup_fatigues_kneepads_gloves_rolled";
		hiddenSelections[]=
		{
			"camo",	// uniform
			"camo3"	// gloves
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\uniform_pmc_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\oakley_brown_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\uniform.rvmat",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\oakley.rvmat"
		};
	};

	/* Fatigues, Black */

	class tg_cup_soldier_fatigues_blk: tg_cup_soldier_fatigues
	{
		scope=1;
		displayName="Fatigues, Black";
		uniformClass="tg_cup_fatigues_blk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_rolled_blk: tg_cup_soldier_fatigues_rolled
	{
		scope=1;
		displayName="Fatigues, Black (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_rolled_blk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_blk: tg_cup_soldier_fatigues_gloves
	{
		scope=1;
		displayName="Fatigues, Black (Gloves)";
		uniformClass="tg_cup_fatigues_blk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_rolled_blk: tg_cup_soldier_fatigues_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Black (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_blk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_blk: tg_cup_soldier_fatigues_kneepads
	{
		scope=1;
		displayName="Fatigues, Black (Kneepads)";
		uniformClass="tg_cup_fatigues_kneepads_blk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_rolled_blk: tg_cup_soldier_fatigues_kneepads_rolled
	{
		scope=1;
		displayName="Fatigues, Black (Kneepads) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_rolled_blk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_blk: tg_cup_soldier_fatigues_kneepads_gloves
	{
		scope=1;
		displayName="Fatigues, Black (Kneepads) (Gloves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_blk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_rolled_blk: tg_cup_soldier_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Black (Kneepads) (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_rolled_blk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};
	
	/* Fatigues, Black (Coyote kneepads) */
	
	class tg_cup_soldier_fatigues_kneepads_gloves_blk_coyote: tg_cup_soldier_fatigues_kneepads_gloves
	{
		scope=1;
		displayName="Fatigues, Black (Kneepads, Coyote) (Gloves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_blk_coyote";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_kneepads_coyote_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grn_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_rolled_blk_coyote: tg_cup_soldier_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Black (Kneepads, Coyote) (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_rolled_blk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_kneepads_coyote_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grn_co.paa"
		};
	};

	/* Fatigues, Grey */

	class tg_cup_soldier_fatigues_grey: tg_cup_soldier_fatigues
	{
		scope=1;
		displayName="Fatigues, Grey";
		uniformClass="tg_cup_fatigues_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_rolled_grey: tg_cup_soldier_fatigues_rolled
	{
		scope=1;
		displayName="Fatigues, Grey (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_rolled_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_grey: tg_cup_soldier_fatigues_gloves
	{
		scope=1;
		displayName="Fatigues, Grey (Gloves)";
		uniformClass="tg_cup_fatigues_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_grey_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_rolled_grey: tg_cup_soldier_fatigues_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Grey (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_grey_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_grey: tg_cup_soldier_fatigues_kneepads
	{
		scope=1;
		displayName="Fatigues, Grey (Kneepads)";
		uniformClass="tg_cup_fatigues_kneepads_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_grey_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_rolled_grey: tg_cup_soldier_fatigues_kneepads_rolled
	{
		scope=1;
		displayName="Fatigues, Grey (Kneepads) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_rolled_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_grey_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_grey: tg_cup_soldier_fatigues_kneepads_gloves
	{
		scope=1;
		displayName="Fatigues, Grey (Kneepads) (Gloves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_grey_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_rolled_grey: tg_cup_soldier_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Grey (Kneepads) (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_rolled_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_grey_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};

	/* Fatigues, Khaki */

	class tg_cup_soldier_fatigues_khk: tg_cup_soldier_fatigues
	{
		scope=1;
		displayName="Fatigues, Brown";
		uniformClass="tg_cup_fatigues_khk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_khaki_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_rolled_khk: tg_cup_soldier_fatigues_rolled
	{
		scope=1;
		displayName="Fatigues, Brown (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_rolled_khk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_khaki_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_khk: tg_cup_soldier_fatigues_gloves
	{
		scope=1;
		displayName="Fatigues, Brown (Gloves)";
		uniformClass="tg_cup_fatigues_khk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_khaki_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_rolled_khk: tg_cup_soldier_fatigues_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Brown (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_khk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_khaki_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_khk: tg_cup_soldier_fatigues_kneepads
	{
		scope=1;
		displayName="Fatigues, Brown (Kneepads)";
		uniformClass="tg_cup_fatigues_kneepads_khk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_khaki_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_rolled_khk: tg_cup_soldier_fatigues_kneepads_rolled
	{
		scope=1;
		displayName="Fatigues, Brown (Kneepads) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_rolled_khk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_khaki_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_khk: tg_cup_soldier_fatigues_kneepads_gloves
	{
		scope=1;
		displayName="Fatigues, Brown (Kneepads) (Gloves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_khk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_khaki_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_rolled_khk: tg_cup_soldier_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Brown (Kneepads) (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_rolled_khk";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_khaki_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};

	/* Fatigues, Olive */

	class tg_cup_soldier_fatigues_od: tg_cup_soldier_fatigues
	{
		scope=1;
		displayName="Fatigues, Olive";
		uniformClass="tg_cup_fatigues_od";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_olive_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_rolled_od: tg_cup_soldier_fatigues_rolled
	{
		scope=1;
		displayName="Fatigues, Olive (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_rolled_od";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_olive_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_od: tg_cup_soldier_fatigues_gloves
	{
		scope=1;
		displayName="Fatigues, Olive (Gloves)";
		uniformClass="tg_cup_fatigues_od";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_od_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_rolled_od: tg_cup_soldier_fatigues_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Olive (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_od";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_olive_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_od: tg_cup_soldier_fatigues_kneepads
	{
		scope=1;
		displayName="Fatigues, Olive (Kneepads)";
		uniformClass="tg_cup_fatigues_kneepads_od";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_olive_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_rolled_od: tg_cup_soldier_fatigues_kneepads_rolled
	{
		scope=1;
		displayName="Fatigues, Olive (Kneepads) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_rolled_od";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_olive_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_od: tg_cup_soldier_fatigues_kneepads_gloves
	{
		scope=1;
		displayName="Fatigues, Olive (Kneepads) (Gloves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_od";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_olive_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_rolled_od: tg_cup_soldier_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Olive (Kneepads) (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_rolled_od";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_olive_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_blk_co.paa"
		};
	};

	/* Fatigues, Tan */

	class tg_cup_soldier_fatigues_tan: tg_cup_soldier_fatigues
	{
		scope=1;
		displayName="Fatigues, Tan";
		uniformClass="tg_cup_fatigues_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_tan_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_rolled_tan: tg_cup_soldier_fatigues_rolled
	{
		scope=1;
		displayName="Fatigues, Tan (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_rolled_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_tan_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_tan: tg_cup_soldier_fatigues_gloves
	{
		scope=1;
		displayName="Fatigues, Tan (Gloves)";
		uniformClass="tg_cup_fatigues_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_tan_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_rolled_tan: tg_cup_soldier_fatigues_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Tan (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_tan_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_tan: tg_cup_soldier_fatigues_kneepads
	{
		scope=1;
		displayName="Fatigues, Tan (Kneepads)";
		uniformClass="tg_cup_fatigues_kneepads_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_tan_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_rolled_tan: tg_cup_soldier_fatigues_kneepads_rolled
	{
		scope=1;
		displayName="Fatigues, Tan (Kneepads) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_rolled_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_tan_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_tan: tg_cup_soldier_fatigues_kneepads_gloves
	{
		scope=1;
		displayName="Fatigues, Tan (Kneepads) (Gloves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_tan_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_rolled_tan: tg_cup_soldier_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Tan (Kneepads) (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_rolled_tan";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_tan_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};

	/* Fatigues, Black/Grey */

	class tg_cup_soldier_fatigues_blk_grey: tg_cup_soldier_fatigues
	{
		scope=1;
		displayName="Fatigues, Black/Grey";
		uniformClass="tg_cup_fatigues_blk_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_rolled_blk_grey: tg_cup_soldier_fatigues_rolled
	{
		scope=1;
		displayName="Fatigues, Black/Grey (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_rolled_blk_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_blk_grey: tg_cup_soldier_fatigues_gloves
	{
		scope=1;
		displayName="Fatigues, Black/Grey (Gloves)";
		uniformClass="tg_cup_fatigues_blk_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_grey_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_gloves_rolled_blk_grey: tg_cup_soldier_fatigues_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Black/Grey (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_blk_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_grey_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_blk_grey: tg_cup_soldier_fatigues_kneepads
	{
		scope=1;
		displayName="Fatigues, Black/Grey (Kneepads)";
		uniformClass="tg_cup_fatigues_kneepads_blk_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_grey_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_rolled_blk_grey: tg_cup_soldier_fatigues_kneepads_rolled
	{
		scope=1;
		displayName="Fatigues, Black/Grey (Kneepads) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_rolled_blk_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_grey_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_blk_grey: tg_cup_soldier_fatigues_kneepads_gloves
	{
		scope=1;
		displayName="Fatigues, Black/Grey (Kneepads) (Gloves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_blk_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_grey_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};
	
	class tg_cup_soldier_fatigues_kneepads_gloves_rolled_blk_grey: tg_cup_soldier_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		displayName="Fatigues, Black/Grey (Kneepads) (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_fatigues_kneepads_gloves_rolled_blk_grey";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_black_grey_kneepads_co.paa",
			"\tg\cup\Data\tg_cup_oakley_grey_co.paa"
		};
	};


	/* PMC, Plaid Green/Jeans */
/*
	class tg_cup_soldier_pmc_green_jeans: tg_cup_soldier_fatigues
	{
		scope=1;
		displayName="PMC Fatigues, Plaid/Jeans";
		uniformClass="tg_cup_pmc_green_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_green_jeans_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_rolled_green_jeans: tg_cup_soldier_fatigues_rolled
	{
		scope=1;
		displayName="PMC Fatigues, Plaid/Jeans (Rolled Sleeves)";
		uniformClass="tg_cup_pmc_rolled_green_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_green_jeans_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_gloves_green_jeans: tg_cup_soldier_fatigues_gloves
	{
		scope=1;
		displayName="PMC Fatigues, Plaid/Jeans (Gloves)";
		uniformClass="tg_cup_pmc_green_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_green_jeans_co.paa",
			"\tg\cup\Data\tg_cup_oakley_brn_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_gloves_rolled_green_jeans: tg_cup_soldier_fatigues_gloves_rolled
	{
		scope=1;
		displayName="PMC Fatigues, Plaid/Jeans (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_pmc_green_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_green_jeans_co.paa",
			"\tg\cup\Data\tg_cup_oakley_brn_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_kneepads_green_jeans: tg_cup_soldier_fatigues_kneepads
	{
		scope=1;
		displayName="PMC Fatigues, Plaid/Jeans (Kneepads)";
		uniformClass="tg_cup_pmc_kneepads_green_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_fatigues_green_jeans_kneepads_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_kneepads_rolled_green_jeans: tg_cup_soldier_fatigues_kneepads_rolled
	{
		scope=1;
		displayName="PMC Fatigues, Plaid/Jeans (Kneepads) (Rolled Sleeves)";
		uniformClass="tg_cup_pmc_kneepads_rolled_green_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_kneepads_green_jeans_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_kneepads_gloves_green_jeans: tg_cup_soldier_fatigues_kneepads_gloves
	{
		scope=1;
		displayName="PMC Fatigues, Plaid/Jeans (Kneepads) (Gloves)";
		uniformClass="tg_cup_pmc_kneepads_gloves_green_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_kneepads_green_jeans_co.paa",
			"\tg\cup\Data\tg_cup_oakley_brn_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_kneepads_gloves_rolled_green_jeans: tg_cup_soldier_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		displayName="PMC Fatigues, Plaid/Jeans (Kneepads) (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_pmc_kneepads_gloves_rolled_green_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_kneepads_green_jeans_co.paa",
			"\tg\cup\Data\tg_cup_oakley_brn_co.paa"
		};
	};
*/
	/* PMC, Salmon/Jeans */

	class tg_cup_soldier_pmc_salmon_jeans: tg_cup_soldier_fatigues
	{
		scope=1;
		displayName="PMC Fatigues, Salmon/Jeans";
		uniformClass="tg_cup_pmc_salmon_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_salmon_jeans_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_rolled_salmon_jeans: tg_cup_soldier_fatigues_rolled
	{
		scope=1;
		displayName="PMC Fatigues, Salmon/Jeans (Rolled Sleeves)";
		uniformClass="tg_cup_pmc_rolled_salmon_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_salmon_jeans_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_gloves_salmon_jeans: tg_cup_soldier_fatigues_gloves
	{
		scope=1;
		displayName="PMC Fatigues, Salmon/Jeans (Gloves)";
		uniformClass="tg_cup_pmc_salmon_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_salmon_jeans_co.paa",
			"\tg\cup\Data\tg_cup_oakley_brn_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_gloves_rolled_salmon_jeans: tg_cup_soldier_fatigues_gloves_rolled
	{
		scope=1;
		displayName="PMC Fatigues, Salmon/Jeans (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_pmc_salmon_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_salmon_jeans_co.paa",
			"\tg\cup\Data\tg_cup_oakley_brn_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_kneepads_salmon_jeans: tg_cup_soldier_fatigues_kneepads
	{
		scope=1;
		displayName="PMC Fatigues, Salmon/Jeans (Kneepads)";
		uniformClass="tg_cup_pmc_kneepads_salmon_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_kneepads_salmon_jeans_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_kneepads_rolled_salmon_jeans: tg_cup_soldier_fatigues_kneepads_rolled
	{
		scope=1;
		displayName="PMC Fatigues, Salmon/Jeans (Kneepads) (Rolled Sleeves)";
		uniformClass="tg_cup_pmc_kneepads_rolled_salmon_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_kneepads_salmon_jeans_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_kneepads_gloves_salmon_jeans: tg_cup_soldier_fatigues_kneepads_gloves
	{
		scope=1;
		displayName="PMC Fatigues, Salmon/Jeans (Kneepads) (Gloves)";
		uniformClass="tg_cup_pmc_kneepads_gloves_salmon_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_kneepads_salmon_jeans_co.paa",
			"\tg\cup\Data\tg_cup_oakley_brn_co.paa"
		};
	};
	
	class tg_cup_soldier_pmc_kneepads_gloves_rolled_salmon_jeans: tg_cup_soldier_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		displayName="PMC Fatigues, Salmon/Jeans (Kneepads) (Gloves) (Rolled Sleeves)";
		uniformClass="tg_cup_pmc_kneepads_gloves_rolled_salmon_jeans";
		hiddenSelectionsTextures[]=
		{
			"\tg\cup\Data\tg_cup_pmc_kneepads_salmon_jeans_co.paa",
			"\tg\cup\Data\tg_cup_oakley_brn_co.paa"
		};
	};

};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	
	class tg_cup_fatigues: Uniform_Base
	{
		scope=0;
		scopeArsenal=0;
		dlc="CUP_Units";
		displayName = "Fatigues"; /// how would the stuff be displayed in inventory and on ground
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_rolled: Uniform_Base
	{
		scope=0;
		scopeArsenal=0;
		dlc="CUP_Units";
		displayName = "Fatigues RS"; /// how would the stuff be displayed in inventory and on ground
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_rolled;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves: Uniform_Base
	{
		scope=0;
		scopeArsenal=0;
		dlc="CUP_Units";
		displayName = "Fatigues Gloves"; /// how would the stuff be displayed in inventory and on ground
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_rolled: Uniform_Base
	{
		scope=0;
		scopeArsenal=0;
		dlc="CUP_Units";
		displayName = "Fatigues Gloves RS"; /// how would the stuff be displayed in inventory and on ground
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_rolled;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads: Uniform_Base
	{
		scope=0;
		scopeArsenal=0;
		dlc="CUP_Units";
		displayName = "Fatigues Kneepads"; /// how would the stuff be displayed in inventory and on ground
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads;
			containerClass = Supply60;
			mass = 20;
		};
	};
		
	class tg_cup_fatigues_kneepads_rolled: Uniform_Base
	{
		scope=0;
		scopeArsenal=0;
		dlc="CUP_Units";
		displayName = "Fatigues Kneepads RS"; /// how would the stuff be displayed in inventory and on ground
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_rolled;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves: Uniform_Base
	{
		scope=0;
		scopeArsenal=0;
		dlc="CUP_Units";
		displayName = "Fatigues Kneepads Gloves"; /// how would the stuff be displayed in inventory and on ground
		picture = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_rolled: Uniform_Base
	{
		scope=0;
		scopeArsenal=0;
		dlc="CUP_Units";
		displayName = "Fatigues Kneepads Gloves RS"; /// how would the stuff be displayed in inventory and on ground
		picture = "-";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"; /// how does the uniform look when put on ground
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_rolled;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	/* Fatigues, Black */
	
	class tg_cup_fatigues_blk: tg_cup_fatigues
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Black";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_blk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_rolled_blk: tg_cup_fatigues_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Black (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_rolled_blk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_blk: tg_cup_fatigues_gloves
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Black (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_blk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_rolled_blk: tg_cup_fatigues_gloves_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Black (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_rolled_blk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_blk: tg_cup_fatigues_kneepads
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Black (Kneepads)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_blk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_rolled_blk: tg_cup_fatigues_kneepads_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Black (Kneepads) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_rolled_blk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_blk: tg_cup_fatigues_kneepads_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Black (Kneepads) (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_blk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_rolled_blk: tg_cup_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Black (Kneepads) (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_rolled_blk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	/* Fatigues, Black (Coyote Kneepads) */
	
	class tg_cup_fatigues_kneepads_gloves_blk_coyote: tg_cup_fatigues_kneepads_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Black (Kneepads, Coyote) (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_blk_coyote;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_rolled_blk_coyote: tg_cup_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Black (Kneepads, Coyote) (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_rolled_blk_coyote;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	/* Fatigues, Grey */
	
	class tg_cup_fatigues_grey: tg_cup_fatigues
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Grey";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_rolled_grey: tg_cup_fatigues_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Grey (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_rolled_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_grey: tg_cup_fatigues_gloves
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Grey (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_rolled_grey: tg_cup_fatigues_gloves_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Grey (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_rolled_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_grey: tg_cup_fatigues_kneepads
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Grey (Kneepads)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_rolled_grey: tg_cup_fatigues_kneepads_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Grey (Kneepads) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_rolled_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_grey: tg_cup_fatigues_kneepads_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Grey (Kneepads) (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_rolled_grey: tg_cup_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Grey (Kneepads) (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_rolled_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};

	/* Fatigues, Brown */
	
	class tg_cup_fatigues_khk: tg_cup_fatigues
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Brown";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_khk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_rolled_khk: tg_cup_fatigues_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Brown (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_rolled_khk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_khk: tg_cup_fatigues_gloves
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Brown (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_khk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_rolled_khk: tg_cup_fatigues_gloves_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Brown (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_rolled_khk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_khk: tg_cup_fatigues_kneepads
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Brown (Kneepads)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_khk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_rolled_khk: tg_cup_fatigues_kneepads_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Brown (Kneepads) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_rolled_khk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_khk: tg_cup_fatigues_kneepads_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Brown (Kneepads) (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_khk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_rolled_khk: tg_cup_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Brown (Kneepads) (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_rolled_khk;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	/* Fatigues, Olive */
	
	class tg_cup_fatigues_od: tg_cup_fatigues
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Olive";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_od;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_rolled_od: tg_cup_fatigues_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Olive (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_rolled_od;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_od: tg_cup_fatigues_gloves
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Olive (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_od;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_rolled_od: tg_cup_fatigues_gloves_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Olive (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_rolled_od;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_od: tg_cup_fatigues_kneepads
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Olive (Kneepads)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_od;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_rolled_od: tg_cup_fatigues_kneepads_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Olive (Kneepads) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_rolled_od;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_od: tg_cup_fatigues_kneepads_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Olive (Kneepads) (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_od;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_rolled_od: tg_cup_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Olive (Kneepads) (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_rolled_od;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	/* Fatigues, Tan */
	
	class tg_cup_fatigues_tan: tg_cup_fatigues
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Tan";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_tan;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_rolled_tan: tg_cup_fatigues_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Tan (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_rolled_tan;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_tan: tg_cup_fatigues_gloves
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Tan (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_tan;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_rolled_tan: tg_cup_fatigues_gloves_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Tan (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_rolled_tan;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_tan: tg_cup_fatigues_kneepads
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Tan (Kneepads)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_tan;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_rolled_tan: tg_cup_fatigues_kneepads_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Tan (Kneepads) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_rolled_tan;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_tan: tg_cup_fatigues_kneepads_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Tan (Kneepads) (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_tan;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_rolled_tan: tg_cup_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Tan (Kneepads) (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_rolled_tan;
			containerClass = Supply60;
			mass = 20;
		};
	};

	/* Fatigues, Black/Grey */
	
	class tg_cup_fatigues_blk_grey: tg_cup_fatigues
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Black/Grey";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_blk_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_rolled_blk_grey: tg_cup_fatigues_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Black/Grey (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_rolled_blk_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_blk_grey: tg_cup_fatigues_gloves
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Black/Grey (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_blk_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_gloves_rolled_blk_grey: tg_cup_fatigues_gloves_rolled
	{
		scope=1;
		scopeArsenal=0;
		displayName = "Fatigues, Black/Grey (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_gloves_rolled_blk_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_blk_grey: tg_cup_fatigues_kneepads
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Black/Grey (Kneepads)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_blk_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_rolled_blk_grey: tg_cup_fatigues_kneepads_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Black/Grey (Kneepads) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_rolled_blk_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_blk_grey: tg_cup_fatigues_kneepads_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Black/Grey (Kneepads) (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_blk_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_fatigues_kneepads_gloves_rolled_blk_grey: tg_cup_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Black/Grey (Kneepads) (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_fatigues_kneepads_gloves_rolled_blk_grey;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	/* PMC Fatigues, Plaid/Jeans */
	/*
	class tg_cup_pmc_green_jeans: tg_cup_fatigues
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Plaid/Jeans";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_green_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_rolled_green_jeans: tg_cup_fatigues_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Plaid/Jeans (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_rolled_green_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_gloves_green_jeans: tg_cup_fatigues_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Plaid/Jeans (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_gloves_green_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_gloves_rolled_green_jeans: tg_cup_fatigues_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Plaid/Jeans (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_gloves_rolled_green_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_kneepads_green_jeans: tg_cup_fatigues_kneepads
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Plaid/Jeans (Kneepads)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_kneepads_green_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_kneepads_rolled_green_jeans: tg_cup_fatigues_kneepads_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Plaid/Jeans (Kneepads) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_kneepads_rolled_green_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_kneepads_gloves_green_jeans: tg_cup_fatigues_kneepads_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Plaid/Jeans (Kneepads) (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_kneepads_gloves_green_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_kneepads_gloves_rolled_green_jeans: tg_cup_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Plaid/Jeans (Kneepads) (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_kneepads_gloves_rolled_green_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	*/
	
	/* PMC Fatigues, Salmon/Jeans */
	
	class tg_cup_pmc_salmon_jeans: tg_cup_fatigues
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Salmon";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_salmon_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_rolled_salmon_jeans: tg_cup_fatigues_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Salmon (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_rolled_salmon_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_gloves_salmon_jeans: tg_cup_fatigues_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Salmon (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_gloves_salmon_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_gloves_rolled_salmon_jeans: tg_cup_fatigues_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Salmon (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_gloves_rolled_salmon_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_kneepads_salmon_jeans: tg_cup_fatigues_kneepads
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Salmon (Kneepads)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_kneepads_salmon_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_kneepads_rolled_salmon_jeans: tg_cup_fatigues_kneepads_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Salmon (Kneepads) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_kneepads_rolled_salmon_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_kneepads_gloves_salmon_jeans: tg_cup_fatigues_kneepads_gloves
	{
		scope=1;
		scopeArsenal=2;
		displayName = "PMC Fatigues, Salmon (Kneepads) (Gloves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_kneepads_gloves_salmon_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	class tg_cup_pmc_kneepads_gloves_rolled_salmon_jeans: tg_cup_fatigues_kneepads_gloves_rolled
	{
		scope=1;
		scopeArsenal=2;
		displayName = "Fatigues, Salmon (Kneepads) (Gloves) (Rolled Sleeves)";
		picture = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "";
			uniformClass = tg_cup_soldier_pmc_kneepads_gloves_rolled_salmon_jeans;
			containerClass = Supply60;
			mass = 20;
		};
	};
	
	/************/
	/*	Vests	*/
	/************/
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	
	
	/* 6b3 Vest Tan */
	class tg_cup_6b3_pioneer_tan: Vest_Camo_Base
	{
		displayName = "6B3 (Tan)";
		scope=1;
		scopeArsenal=2;
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_rus_1_flora_ca.paa";
		model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_Rus_Vest_1.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {
			"\tg\cup\Data\tg_cup_6b3_equipment_tan_co.paa",
			"\tg\cup\Data\tg_cup_6b3_vest_tan_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_Rus_Vest_1.p3d";
			armor = 20;
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {
				"\tg\cup\Data\tg_cup_6b3_equipment_tan_co.paa",
				"\tg\cup\Data\tg_cup_6b3_vest_tan_co.paa"
			};
			passThrough = 0.5;
			mass = 100;
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
	
	/* 6b3 Vest Olive */
	class tg_cup_6b3_pioneer_olive: tg_cup_6b3_pioneer_tan
	{
		displayName = "6B3 (Olive)";
		hiddenSelectionsTextures[] = {
			"\tg\cup\Data\tg_cup_6b3_equipment_olive_co.paa",
			"\tg\cup\Data\tg_cup_6b3_vest_olive_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"\tg\cup\Data\tg_cup_6b3_equipment_olive_co.paa",
				"\tg\cup\Data\tg_cup_6b3_vest_olive_co.paa"
			};
		};
	};
	
	/* 6b3 Vest Black */
	class tg_cup_6b3_pioneer_black: tg_cup_6b3_pioneer_tan
	{
		displayName = "6B3 (Black)";
		hiddenSelectionsTextures[] = {
			"\tg\cup\Data\tg_cup_6b3_equipment_black_co.paa",
			"\tg\cup\Data\tg_cup_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"\tg\cup\Data\tg_cup_6b3_equipment_black_co.paa",
				"\tg\cup\Data\tg_cup_6b3_vest_black_co.paa"
			};
		};
	};
	
	/* 6b3 Vest Black, Olive */
	class tg_cup_6b3_pioneer_black_olive: tg_cup_6b3_pioneer_tan
	{
		displayName = "6B3 (Black, Olive)";
		hiddenSelectionsTextures[] = {
			"\tg\cup\Data\tg_cup_6b3_equipment_olive_co.paa",
			"\tg\cup\Data\tg_cup_6b3_vest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"\tg\cup\Data\tg_cup_6b3_equipment_olive_co.paa",
				"\tg\cup\Data\tg_cup_6b3_vest_black_co.paa"
			};
		};
	};
	
	/* 6b43 vest Tan*/
	
	class tg_cup_6b43_tan: Vest_Camo_Base
	{
		displayName = "6B43 Vest (Tan)";
		scope=1;
		scopeArsenal=2;
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_6b45_1_emr_ca.paa";
		model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_1.p3d";
		hiddenSelections[] = {"camo", "camo1"};
		hiddenSelectionsTextures[] =
		{
			"\tg\cup\Data\tg_cup_6b43_vest_tan_co",
			"\tg\cup\Data\tg_cup_6b43_equipment_tan_co"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_1.p3d";
			hiddenSelections[] = {"camo", "camo1"};
			hiddenSelectionsTextures[] =
			{
				"\tg\cup\Data\tg_cup_6b43_vest_tan_co",
				"\tg\cup\Data\tg_cup_6b43_equipment_tan_co"
			};
			armor = 20;
			passThrough = 0.5;
			mass = 95;
			containerClass = "Supply140";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
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
			};
		};
	};
	
	class tg_cup_6b43_tan_shoulder: Vest_Camo_Base
	{
		displayName = "6B43 Vest (Tan) (Shoulders)";
		scope=1;
		scopeArsenal=2;
		model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_2.p3d";
			mass = 105;
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
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
	
	class tg_cup_6b43_tan_pelvis: Vest_Camo_Base
	{
		displayName = "6B43 Vest (Tan) (Pelvis)";
		scope=1;
		scopeArsenal=2;
		model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_3.p3d";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
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
	
	class tg_cup_6b43_tan_shoulder_pelvis: Vest_Camo_Base
	{
		displayName = "6B43 Vest (Tan) (Shoulders, Pelvis)";
		scope=1;
		scopeArsenal=2;
		model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_4.p3d";
			mass = 110;
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
	
	/* 6b43 vest Olive */
	class tg_cup_6b43_olive: tg_cup_6b43_tan
	{
		displayName = "6B43 Vest (Olive)";
		hiddenSelectionsTextures[] =
		{
			"\tg\cup\Data\tg_cup_6b43_vest_olive_co",
			"\tg\cup\Data\tg_cup_6b43_equipment_olive_co"
		};
		class ItemInfo: VestItem
		{
			hiddenSelectionsTextures[] =
			{
				"\tg\cup\Data\tg_cup_6b43_vest_olive_co",
				"\tg\cup\Data\tg_cup_6b43_equipment_olive_co"
			};
		};
	};
	
	class tg_cup_6b43_olive_shoulder: tg_cup_6b43_tan_shoulder
	{
		displayName = "6B43 Vest (Olive) (Shoulders)";
		hiddenSelectionsTextures[] =
		{
			"\tg\cup\Data\tg_cup_6b43_vest_olive_co",
			"\tg\cup\Data\tg_cup_6b43_equipment_olive_co"
		};
		class ItemInfo: VestItem
		{
			hiddenSelectionsTextures[] =
			{
				"\tg\cup\Data\tg_cup_6b43_vest_olive_co",
				"\tg\cup\Data\tg_cup_6b43_equipment_olive_co"
			};
		};
	};
	
	class tg_cup_6b43_olive_pelvis: tg_cup_6b43_tan_pelvis
	{
		displayName = "6B43 Vest (Olive) (Pelvis)";
		hiddenSelectionsTextures[] =
		{
			"\tg\cup\Data\tg_cup_6b43_vest_olive_co",
			"\tg\cup\Data\tg_cup_6b43_equipment_olive_co"
		};
		class ItemInfo: VestItem
		{
			hiddenSelectionsTextures[] =
			{
				"\tg\cup\Data\tg_cup_6b43_vest_olive_co",
				"\tg\cup\Data\tg_cup_6b43_equipment_olive_co"
			};
		};
	};
	
	class tg_cup_6b43_olive_shoulder_pelvis: tg_cup_6b43_tan_shoulder_pelvis
	{
		displayName = "6B43 Vest (Olive) (Shoulder, Pelvis)";
		hiddenSelectionsTextures[] =
		{
			"\tg\cup\Data\tg_cup_6b43_vest_olive_co",
			"\tg\cup\Data\tg_cup_6b43_equipment_olive_co"
		};
		class ItemInfo: VestItem
		{
			hiddenSelectionsTextures[] =
			{
				"\tg\cup\Data\tg_cup_6b43_vest_olive_co",
				"\tg\cup\Data\tg_cup_6b43_equipment_olive_co"
			};
		};
	};
	
	/* 6b43 vest Black */
	class tg_cup_6b43_black: tg_cup_6b43_tan
	{
		displayName = "6B43 Vest (Black)";
		hiddenSelectionsTextures[] =
		{
			"\tg\cup\Data\tg_cup_6b43_vest_black_co",
			"\tg\cup\Data\tg_cup_6b43_equipment_black_co"
		};
		class ItemInfo: VestItem
		{
			hiddenSelectionsTextures[] =
			{
				"\tg\cup\Data\tg_cup_6b43_vest_black_co",
				"\tg\cup\Data\tg_cup_6b43_equipment_black_co"
			};
		};
	};
	
	class tg_cup_6b43_black_shoulder: tg_cup_6b43_tan_shoulder
	{
		displayName = "6B43 Vest (Black) (Shoulders)";
		hiddenSelectionsTextures[] =
		{
			"\tg\cup\Data\tg_cup_6b43_vest_black_co",
			"\tg\cup\Data\tg_cup_6b43_equipment_black_co"
		};
		class ItemInfo: VestItem
		{
			hiddenSelectionsTextures[] =
			{
				"\tg\cup\Data\tg_cup_6b43_vest_black_co",
				"\tg\cup\Data\tg_cup_6b43_equipment_black_co"
			};
		};
	};
	
	class tg_cup_6b43_black_pelvis: tg_cup_6b43_tan_pelvis
	{
		displayName = "6B43 Vest (Black) (Pelvis)";
		hiddenSelectionsTextures[] =
		{
			"\tg\cup\Data\tg_cup_6b43_vest_black_co",
			"\tg\cup\Data\tg_cup_6b43_equipment_black_co"
		};
		class ItemInfo: VestItem
		{
			hiddenSelectionsTextures[] =
			{
				"\tg\cup\Data\tg_cup_6b43_vest_black_co",
				"\tg\cup\Data\tg_cup_6b43_equipment_black_co"
			};
		};
	};
	
	class tg_cup_6b43_black_shoulder_pelvis: tg_cup_6b43_tan_shoulder_pelvis
	{
		displayName = "6B43 Vest (Black) (Shoulder, Pelvis)";
		hiddenSelectionsTextures[] =
		{
			"\tg\cup\Data\tg_cup_6b43_vest_black_co",
			"\tg\cup\Data\tg_cup_6b43_equipment_black_co"
		};
		class ItemInfo: VestItem
		{
			hiddenSelectionsTextures[] =
			{
				"\tg\cup\Data\tg_cup_6b43_vest_black_co",
				"\tg\cup\Data\tg_cup_6b43_equipment_black_co"
			};
		};
	};
	
	/****************/
	/*	Headgear	*/
	/****************/
	
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	
};
class cfgMods
{
	author="trenchgun";
	timepacked="1564755645";
};
