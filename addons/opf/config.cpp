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

class UniformSlotInfo {
    slotType = 0;
    linkProxy = "-";
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
