/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*/
class Clothing
{
    class bruce
    {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] =
        {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
        };

        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } }
        };

        goggles[] =
        {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] =
        {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };

        backpacks[] =
        {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 4500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
            { "B_Carryall_oli", "", 5000, { "", "", -1 } },
            { "B_Carryall_khk", "", 5000, { "", "", -1 } }
        };
    };

    class hunting
    {
        title = "STR_Shops_C_Hunting";
        license = "hunting";
        side = "civ";
        uniforms[] =
        {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 5, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 20, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 20, { "", "", -1 } },
            { "U_OG_Guerilla1_1", "Blaze Orange", 20, { "", "", -1 } }
        };

        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Booniehat_grn", "", 20, { "", "", -1 } },
            { "H_Booniehat_tan", "", 20, { "", "", -1 } },
            { "H_Booniehat_dirty", "", 20, { "", "", -1 } }
        };

        goggles[] =
        {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };

        vests[] =
        {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };

        backpacks[] =
        {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 175, { "", "", -1 } },
            { "B_HuntingBackpack", "", 200, { "", "", -1 } },
            { "Carryall Woodland Camo", "", 250, { "", "", -1 } }
        };
    };

    class cop
    {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] =
        {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Cop Uniform", 25, { "", "", -1 } },
            { "U_Competitor", "Cop Uniform", 25, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_CombatUniform_mcam_worn", "Cop Uniform", 25, { "life_coplevel", "SCALAR", 5 } }
        };

        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_02", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_Colonel", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_blk", "", 100, { "life_coplevel", "SCALAR", 1 } }
        };

        goggles[] =
        {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };

        vests[] =
        {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 800, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1500, { "life_coplevel", "SCALAR", 1 } },
			{ "V_PlateCarrier1_blk", "", 1500, { "life_coplevel", "SCALAR", 3 } },
			{ "V_PlateCarrierSpec_blk", "", 1500, { "life_coplevel", "SCALAR", 4 } },
			{ "V_PlateCarrierGL_blk", "", 1500, { "life_coplevel", "SCALAR", 5 } }
        };

        backpacks[] =
        {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_UAV_01_backpack_F", "", 800, { "life_coplevel", "SCALAR", 4 } }

        };
    };

    class dive
    {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] =
        {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };

        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };

        goggles[] =
        {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };

        vests[] =
        {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };

        backpacks[] =
        {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class reb
    {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] =
        {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "", 50000, { "", "", -1 } },
            { "U_B_CombatUniform_mcam_tshirt", "", 50000, { "", "", -1 } },
            { "U_B_GhillieSuit", "", 50000, { "", "", -1 } },
            { "U_B_HeliPilotCoveralls", "", 50000, { "", "", -1 } },
            { "U_B_PilotCoveralls", "", 50000, { "", "", -1 } },
            { "U_O_CombatUniform_ocamo", "", 50000, { "", "", -1 } },
            { "U_O_CombatUniform_oucamo", "", 50000, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 50000, { "", "", -1 } },
            { "U_O_SpecopsUniform_blk", "", 50000, { "", "", -1 } },
            { "U_O_OfficerUniform_ocamo", "", 50000, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 50000, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 50000, { "", "", -1 } },
            { "U_I_GhillieSuit", "", 50000, { "", "", -1 } },
            { "U_I_OfficerUniform", "", 50000, { "", "", -1 } },
            { "U_IG_leader", "", 50000, { "", "", -1 } },
            { "U_BG_Guerilla1_1", "", 50000, { "", "", -1 } },
            { "U_B_FullGhillie_lsh", "", 50000, { "", "", -1 } },
            { "U_B_FullGhillie_sard", "", 50000, { "", "", -1 } },
            { "U_B_FullGhillie_ard", "", 50000, { "", "", -1 } },
            { "U_O_FullGhillie_lsh", "", 50000, { "", "", -1 } },
            { "U_O_FullGhillie_sard", "", 50000, { "", "", -1 } },
            { "U_O_FullGhillie_ard", "", 50000, { "", "", -1 } },
            { "U_I_FullGhillie_lsh", "", 50000, { "", "", -1 } },
            { "U_I_FullGhillie_sard", "", 50000, { "", "", -1 } },
            { "U_I_FullGhillie_ard", "", 50000, { "", "", -1 } }
        };

        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Booniehat_grn", "", 850, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 850, { "", "", -1 } },
            { "H_HelmetB_plain_mcamo", "", 850, { "", "", -1 } },
            { "H_HelmetSpecB_blk", "", 850, { "", "", -1 } },
            { "H_HelmetIA_net", "", 850, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 850, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "", 850, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 850, { "", "", -1 } },
            { "H_MilCap_ocamo", "", 850, { "", "", -1 } },
            { "H_MilCap_mcamo", "", 850, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 850, { "", "", -1 } },
            { "H_Bandanna_khk", "", 850, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 850, { "", "", -1 } },
            { "H_Bandanna_sgg", "", 850, { "", "", -1 } },
            { "H_Bandanna_gry", "", 850, { "", "", -1 } },
            { "H_Bandanna_camo", "", 850, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 850, { "", "", -1 } },
            { "H_Hat_camo", "", 850, { "", "", -1 } },
            { "H_Shemag_khk", "", 150, { "", "", -1 } },
            { "H_Shemag_tan", "", 150, { "", "", -1 } },
            { "H_Shemag_olive", "", 150, { "", "", -1 } },
            { "H_Shemag_olive_hs", "", 150, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 150, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 150, { "", "", -1 } },
        };

        goggles[] =
        {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };

        vests[] =
        {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "", 12500, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 4500, { "", "", -1 } },
            { "V_Chestrig_khk", "", 7500, { "", "", -1 } },
            { "V_Chestrig_rgr", "", 12500, { "", "", -1 } },
            { "V_Chestrig_blk", "", 4500, { "", "", -1 } },
            { "V_Chestrig_oli", "", 7500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 12500, { "", "", -1 } },
            { "V_HarnessOGL_brn", "", 4500, { "", "", -1 } },
            { "V_HarnessO_gry", "", 7500, { "", "", -1 } },
            { "V_PlateCarrier_Kerry", "", 7500, { "", "", -1 } }
        };

        backpacks[] =
        {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 4500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
            { "B_Carryall_oli", "", 5000, { "", "", -1 } },
            { "B_Carryall_khk", "", 5000, { "", "", -1 } }
        };
    };

    class kart
    {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] =
        {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };

        headgear[] =
        {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };

        goggles[] =
        {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };

        vests[] =
        {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };

        backpacks[] =
        {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};