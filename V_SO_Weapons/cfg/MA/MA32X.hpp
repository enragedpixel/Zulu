class OPTRE_MA32: OPTRE_MA37
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA32X ICWS Assault Rifle";
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 73;
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_arco_ak_blk_f",
				"optic_dms",
				"optic_aco_grn",
				"optic_aco",
				"optic_arco_blk_f",
				"optic_holosight_blk_f",
				"optic_mrco",
				"optic_khs_blk",
				"optic_hamr",
				"optic_sos",
				"optic_lrps",
				"optic_nightstalker",
				"optic_erco_blk_f",
				"optic_ams",
				"ace_optic_lrps_2d",
				"ace_optic_lrps_pip",
				"optic_yorris",
				"ace_optic_sos_2d",
				"ace_optic_sos_pip",
				"ace_optic_mrco_2d",
				"ace_optic_hamr_2d",
				"ace_optic_hamr_pip",
				"optic_ico_01_black_f",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_srs99_scope",
				"optre_srs99c_scope",
				"optre_ma5_buis",
				"optre_ma5_smartlink",
				"optre_m393_eotech",
				"optre_m7_sight",
				"optre_m393_acog",
				"optre_m392_scope",
				"optre_br55hb_scope",
				"OPTRE_BMR_Scope",
				
				"OPTRE_SRS99_Scope_v2",
				"OPTRE_SRS99C_Scope_v2",
				"OPTRE_M73_Smartlink_v2",
				"OPTRE_M6S_Scope",
				"OPTRE_M7_Sight_v2",
				"OPTRE_M392_Scope_v2",
				"OPTRE_M393_Scope_v2",
				"OPTRE_M393_ACOG_v2",
				"OPTRE_M393_EOTECH_v2",
				"OPTRE_BR55HB_Scope_v2",
				"OPTRE_BMR_Scope_v2"
			};
		};
	};
};

class OPTRE_MA32B: OPTRE_MA32
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA32BX ICWS Assault Rifle";
	
	magazines[] = 
	{
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag_Tracer",
		"OPTRE_60Rnd_762x51_Mag_AP",
		"OPTRE_60Rnd_762x51_Mag_APT",
		"OPTRE_60Rnd_762x51_Mag_JHP",
		"OPTRE_60Rnd_762x51_Mag_JHPT"
	};
};