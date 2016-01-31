/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*/
class WeaponShops
{
    class hunting {
        name = "Hunting Outpost";
        side = "civ";
        license = "hunting";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_Mk20C_F", "", 5250 },
            { "30Rnd_556x45_Stanag", "", 130 },
            { "optic_ACO_grn", "", 200  },
            { "optic_Holosight", "", 225  },
            { "optic_Holosight_smg", "", 225 },
            { "optic_Hamr", "", 450 },
            { "optic_MRCO", "", 475 },
            { "optic_Arco", "", 525 }
        };
    };

    class gun {
        name = "Altis Armory";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 2000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 3500, -1 },
            { "hgun_ACPC2_F", "", 2750, -1 },
            { "hgun_PDW2000_F", "", 4500, -1 },
            { "arifle_SDAR_F", "", 4750, -1 },
            { "optic_ACO_grn_smg", "", 200, 250 },
            { "16Rnd_9x21_Mag", "", 25, -1 },
            { "9Rnd_45ACP_Mag", "", 30, -1 },
            { "6Rnd_45ACP_Cylinder", "", 35, -1 },
            { "30Rnd_9x21_Mag", "", 110, -1 },
            { "20Rnd_556x45_UW_mag", "", 120, -1 },
        };
    };

    class rebel {
        name = "Han's Rebel Supplies";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 5250, 2500 },
            { "arifle_Katiba_F", "", 6500, 5000 },
            { "arifle_Katiba_C_F", "", 6000, 5000 },
            { "srifle_DMR_01_F", "", 7500, -1 },
            { "srifle_DMR_03_khaki_F", "", 9250, -1 },
            { "srifle_DMR_03_tan_F", "", 9250, -1 },
            { "srifle_DMR_03_multicam_F", "", 9250, -1 },
            { "srifle_DMR_03_woodland_F", "", 9250, -1 },
            { "srifle_DMR_06_camo_F", "", 9750, -1 },
            { "srifle_DMR_06_olive_F", "", 9750, -1 },
            { "srifle_EBR_F", "", 8750, -1 },
            { "LMG_Mk200_F", "", 50000, -1 },
            { "hgun_Rook40_F", "", 1750, -1 },
            { "hgun_ACPC2_F", "", 2750, -1 },
            { "hgun_Pistol_heavy_02_F", "", 3250, -1 },
            { "SMG_01_F", "", 5000, -1 },
            { "hgun_PDW2000_F", "", 3500, -1 },
            { "arifle_SDAR_F", "", 4250, 7500 },
            { "optic_ACO_grn", "", 200, 350 },
            { "optic_Holosight", "", 225, 275 },
            { "optic_Holosight_smg", "", 225, -1 },
            { "acc_flashlight", "", 75, 100 },
            { "optic_Hamr", "", 450, -1 },
            { "optic_Arco", "", 475, -1 },
            { "optic_MRCO", "", 500, -1 },
            { "200Rnd_65x39_cased_Box", "", 4500, -1 },
            { "30Rnd_9x21_Mag", "", 100, -1 },
            { "20Rnd_556x45_UW_mag", "", 100, -1 },
            { "30Rnd_556x45_Stanag", "", 120, -1 },
            { "10Rnd_762x54_Mag", "", 150, -1 },
            { "30Rnd_65x39_caseless_green", "", 145, -1 },
            { "20Rnd_762x51_Mag", "", 225, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 125, -1 },
            { "6Rnd_45ACP_Cylinder", "", 30, -1 },
            { "9Rnd_45ACP_Mag", "", 25, -1 },
            { "SmokeShellRed", "", 100, -1 },
            { "SmokeShellGreen", "", 100, -1 },
            { "SmokeShellYellow", "", 100, -1 },
            { "SmokeShellPurple", "", 100, -1 },
            { "SmokeShellBlue", "", 100, -1 },
            { "SmokeShellOrange", "", 100, -1 },
            { "SmokeShell", "", 100, -1 },
        };
    };


    class rebelSupplies {
        name = "Rebel Supplies";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemWatch", "", 10, 500 },
            { "ItemCompass", "", 20, -1 },
            { "ItemGPS", "", 40, -1 },
            { "ItemMap", "", 25, -1 },
            { "Binocular", "", 10, 250 },
            { "NVGoggles", "", 60, -1 },
            { "NVGoggles_INDEP", "", 60, -1 },
            { "FirstAidKit", "", 50, -1 },
            { "ToolKit", "", 50, -1 },
        };
    };

    class gang {
        name = "Arms Dealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 2000, -1 },
            { "hgun_PDW2000_F", "", 3000, -1 },
            { "optic_ACO_grn_smg", "", 50, 250 },
            { "V_Rangemaster_belt", "", 900, -1 },
            { "16Rnd_9x21_Mag", "", 15, -1 },
            { "9Rnd_45ACP_Mag", "", 20, -1 },
            { "6Rnd_45ACP_Cylinder", "", 20, -1 },
            { "30Rnd_9x21_Mag", "", 45, -1 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 70, -1 },
            { "ItemGPS", "", 90, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 15, 25 },
            { "ItemWatch", "", 25, -1 },
            { "ToolKit", "", 75, 75 },
            { "FirstAidKit", "", 50, 65 },
            { "NVGoggles", "", 200, 980 },
        };
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 70, -1 },
            { "ItemGPS", "", 90, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 15, 25 },
            { "ItemWatch", "", 25, -1 },
            { "ToolKit", "", 75, 75 },
            { "FirstAidKit", "", 50, 65 },
            { "NVGoggles", "", 200, 980 },
        };
    };

    //copgen
    class copstore {
        name = "store";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You are not a cop!" };
        items[] = {
            { "ItemWatch", "", 10, 45 },
            { "Binocular", "", 15, -1 },
            { "ToolKit", "", 25, 75 },
            { "FirstAidKit", "", 15, 65 },
            { "ItemCompass", "", 50, 450 },
            { "ItemGPS", "", 12, 980 },
            { "ItemMap", "", 30, -1 },
            { "NVGoggles_OPFOR", "", 30, -1 },
        };
    };

    //Cop Shops
    class cop_cadet {
        name = "Cadet Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You are not a Cadet!" };
        items[] = {
            { "arifle_TRG20_F", "", 2000, 7500 },
            { "hgun_P07_F", "", 500, 650 },
            { "16Rnd_9x21_Mag", "", 50, -1 },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 125, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
        };
    };

    class cop_constable {
        name = "Constable Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Constable!" };
        items[] = {
            { "hgun_P07_F", "", 200, 650 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "arifle_SDAR_F", "", 1500, 7500 },
            { "20Rnd_556x45_UW_mag", "", 75, -1 },
            { "arifle_TRG21_F", "", 2000, 7500 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 3000, 7500 },
            { "arifle_MX_Black_F", "", 3500, 7500 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_MRCO", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 350, -1 },
			{ "optic_Hamr", "", 250, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
        };
    };

    class cop_corporal {
        name = "Corporal Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Corporal!" };
        items[] = {
            { "hgun_P07_F", "", 500, 650 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "arifle_SDAR_F", "", 2000, 7500 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "arifle_TRG21_F", "", 2500, 7500 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 3000, 7500 },
            { "arifle_MX_Black_F", "", 3500, 7500 },
            { "arifle_MXM_Black_F", "", 4000, 7500 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_MRCO", "", 350, 100 },
            { "optic_Arco", "", 350, -1 },
            { "optic_Hamr", "", 350, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
        };
    };

	 class cop_sergeant {
        name = "Sergeant Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_P07_F", "", 500, 650 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "arifle_SDAR_F", "", 2000, 7500 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "arifle_TRG21_F", "", 2500, 7500 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 3000, 7500 },
            { "arifle_MX_Black_F", "", 3500, 7500 },
            { "arifle_MXM_Black_F", "", 4000, 7500 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "SmokeShellRed", "Smoke Red", 17, -1 },
            { "SmokeShellGreen", "Smoke Green", 17, -1 },
            { "SmokeShellYellow", "Smoke Yellow", 17, -1 },
            { "SmokeShellPurple", "Somke Purple", 17, -1 },
            { "SmokeShellBlue", "Smoke Blue", 17, -1 },
            { "SmokeShellOrange", "Smoke Orange", 17, -1 },
            { "Chemlight_green", "", 17, -1 },
            { "Chemlight_red", "", 17, -1 },
            { "Chemlight_yellow", "", 17, -1 },
            { "Chemlight_blue", "", 17, -1 },
            { "acc_flashlight", "", 75, 100 },
            { "optic_Holosight", "", 120, 275 },
            { "optic_Arco", "", 350, -1 },
            { "optic_Hamr", "", 350, -1 },
            { "optic_MRCO", "", 350, 100 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
			{ "arifle_MX_GL_Black_F", "", 4000, 7500 },
            { "3Rnd_Smoke_Grenade_shell", "", 1700, -1 },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 170, -1 },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 170, -1 },
			{ "3Rnd_SmokeYellow_Grenade_shell", "", 170, -1 },
			{ "3Rnd_SmokePurple_Grenade_shell", "", 170, -1 },
			{ "3Rnd_SmokeBlue_Grenade_shell", "", 170, -1 },
			{ "3Rnd_SmokeOrange_Grenade_shell", "", 170, -1 },
			{ "B_UAV_01_backpack_F", "", 5000, -1 },
            { "B_UavTerminal", "", 500, -1 },
        };
    };

	 class cop_lieutenant {
        name = "Lieutenant Armory";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Lieutenant!" };
        items[] = {
            { "hgun_P07_F", "", 500, 650 },
            { "30Rnd_9x21_Mag", "Downing mags", 125, -1 },
            { "hgun_Pistol_heavy_01_F", "", 1500, 650 },
            { "11Rnd_45ACP_Mag", "", 50, -1 },
            { "arifle_SDAR_F", "", 2000, 7500 },
            { "20Rnd_556x45_UW_mag", "", 125, -1 },
            { "arifle_TRG21_F", "", 2500, 7500 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "Downing mags", 125, -1 },
            { "30Rnd_556x45_Stanag", "Lethal mags", 125, -1 },
            { "arifle_MXC_Black_F", "", 3000, 7500 },
            { "arifle_MX_Black_F", "", 3500, 7500 },
            { "arifle_MXM_Black_F", "", 4000, 7500 },
            { "arifle_MX_GL_Black_F", "", 4500, 7500 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "arifle_MX_SW_Black_F", "", 5000, 7500 },
            { "100Rnd_65x39_caseless_mag_Tracer", "Downing mags", 250, -1 },
            { "30Rnd_65x39_caseless_mag", "Lethal mags", 250, -1 },
            { "srifle_DMR_03_F", "", 5500, 7500 },
            { "20Rnd_762x51_Mag", "Lethal unless IR is equipped", 250, -1 },
            { "HandGrenade_Stone", "Flashbang", 170, -1 },
            { "SmokeShell", "Smoke White", 17, -1 },
            { "SmokeShellRed", "Smoke Red", 17, -1 },
            { "SmokeShellGreen", "Smoke Green", 17, -1 },
            { "SmokeShellYellow", "Smoke Yellow", 17, -1 },
            { "SmokeShellPurple", "Somke Purple", 17, -1 },
            { "SmokeShellBlue", "Smoke Blue", 17, -1 },
            { "SmokeShellOrange", "Smoke Orange", 17, -1 },
            { "Chemlight_green", "", 17, -1 },
            { "Chemlight_red", "", 17, -1 },
            { "Chemlight_yellow", "", 17, -1 },
            { "Chemlight_blue", "", 17, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "3Rnd_Smoke_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokeRed_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokeGreen_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokeYellow_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokePurple_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokeBlue_Grenade_shell", "", 170, -1 },
            { "3Rnd_SmokeOrange_Grenade_shell", "", 170, -1 },
            { "B_UAV_01_backpack_F", "", 5000, -1 },
            { "B_UavTerminal", "", 500, -1 },
            { "acc_pointer_IR", "", 750, 100 },
            { "optic_MRCO", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 350, -1 },
			{ "optic_Hamr", "", 250, -1 },
            { "optic_Aco", "", 125, -1 },
            { "optic_ACO_grn", "", 125, -1 },
        };
    };


    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 150, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 250, 450 },
            { "NVGoggles", "", 120, 980 },
            { "B_FieldPack_ocamo", "", 300, -1 }
        };
    };
};
