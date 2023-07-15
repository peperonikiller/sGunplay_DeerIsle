class CfgMods {
	class sGunplay_DeerIsle {
		dir = "pepkilz/sGunplay_DeerIsle";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_DeerIsle";
		credits = "simonvic";
		author = "Pepkilz";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";

		dependencies[] = {
			"World"
		};
		class defs {
			class worldScriptModule {
				value = "";
				files[] = {
					"pepkilz/sGunplay_DeerIsle/scripts/4_World"
				};
			};
		};
	};
};

class CfgPatches {
	class sGunplay_DeerIsle {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"script_a", 
			"DeerIsle_Weapons",
			"Survivalists_Weapons_JMC",
			"Survivalists_Weapons_JMC_Smgs",
			"Survivalists_Weapons_JMC_Shotguns",
			"Survivalists_Weapons_JMC_Rifles",
			"Survivalists_Weapons_JMC_Pistols",
			"Survivalists_Weapons_JMC_Attachments",
			"Survivalists_Weapons_JMC_Attachments_supports"
		};
	};
};

class cfgWeapons {
	//SMG's
	class CZ61;
	class ttp90: CZ61 {
		s_recoilControlStabilityX = 0.7;
		s_recoilControlStabilityY = 0.7;
		s_recoilControlMisalignmentX = 0.5;
		s_recoilControlMisalignmentY = 0.65;
		s_recoilControlKick = 0.75;
	};
	class ttp90_Tan: ttp90 {
		s_recoilControlStabilityX = 0.7;
		s_recoilControlStabilityY = 0.7;
		s_recoilControlMisalignmentX = 0.5;
		s_recoilControlMisalignmentY = 0.65;
		s_recoilControlKick = 0.75;
	};
	class MP5K;
	class ttmp5: MP5K {
		s_recoilControlStabilityX = 0.7;
		s_recoilControlStabilityY = 0.7;
		s_recoilControlMisalignmentX = 0.5;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.75;
	};
	class MP5K;
	class ttagram: MP5K {
		s_recoilControlStabilityX = 0.7;
		s_recoilControlStabilityY = 0.7;
		s_recoilControlMisalignmentX = 0.5;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.85;
	};
	class FNX45;
	class tec9: FNX45 {
		s_recoilControlStabilityX = 0.7;
		s_recoilControlStabilityY = 0.7;
		s_recoilControlMisalignmentX = 0.5;
		s_recoilControlMisalignmentY = 0.75;
		s_recoilControlKick = 0.85;
	};
	class MP5K;
	class ots71: MP5K {
		s_recoilControlStabilityX = 0.75;
		s_recoilControlStabilityY = 0.75;
		s_recoilControlMisalignmentX = 0.25;
		s_recoilControlMisalignmentY = 0.5;
		s_recoilControlKick = 0.55;
	};
	//End SMG
};

class cfgVehicles {
	
	class ItemOptics_Base;
	class HuntingOptic;
	class ACOGOptic;
	class ReflexOptic;
	class ItemOptics;
	class ESP_Tac_Craftsmen: HuntingOptic {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 0.7;
		s_pipMagnification = 0.3;
		s_pipBlur = 0.05;
		s_pipChromAber = 0.3;
	};
	class ESP_Long_Range: HuntingOptic {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 0.7;
		s_pipMagnification = 0.6;
		s_pipBlur = 0.05;
		s_pipChromAber = 0.3;
	};
	class ESP_Hunter: HuntingOptic {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipRadius = 0.7;
		s_pipMagnification = 0.3;
		s_pipBlur = 0.05;
		s_pipChromAber = 0.3;
	};
	class ESP_Short_Range : HuntingOptic { // FIX
		s_isFullscreen = 0;
		s_pipRadius = 0.3;
		s_pipMagnification = 0.5;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
		class OpticsInfo {
			opticsZoomMin="0.3926/6";
			opticsZoomMax="0.3926/6";
			opticsZoomInit="0.3926/6";
			discretefov[] = {}; //sorry no double zoom :(
		};
	};
	class ESP_Spectre : ACOGOptic { //Should be good
		s_pipRadius = 0.2;
		s_pipMagnification = 0.5;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.01;
		s_nearPlaneOverride = 0.39;
	};
	class ESP_RedDot : ReflexOptic { //Fine Tune
		s_pipRadius = 0.125;
		s_pipMagnification = 0.125;
		s_pipBlur = 0.02;
		s_pipChromAber = 0.2;
	};
	
	class PistolSuppressor;
	class AK_Suppressor;
	class M4_Suppressor;
	class ItemSuppressor;
	class SRP_PistolSuppressor_Golden : PistolSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class STG_PBS5_Suppressor : AK_Suppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class ESP_Wrapped_Suppressor : M4_Suppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class ESP_Wrapped_Suppressor_Black : ESP_Wrapped_Suppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class ESP_Wrapped_Suppressor_Green : ESP_Wrapped_Suppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	
	class Inventory_Base;
	class ESP_RIS_Adapter : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
	class STG_AK_RIS_Adapter : Inventory_Base {
		s_recoilControlMisalignmentX = 0.05;
		s_recoilControlMisalignmentY = 0.05;
	};
	class STG_AK_Stck_Adapter : Inventory_Base {
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.00;
	};
	class SRP_ButtstockPouch_ColorBase : Inventory_Base {
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.00;
	};
	class SRP_ButtstockPouch_Red: SRP_ButtstockPouch_ColorBase {
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.00;
	};
	class SRP_ButtstockPouch_Black: SRP_ButtstockPouch_ColorBase {
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.00;
	};
	class SRP_ButtstockPouch_Linen: SRP_ButtstockPouch_ColorBase {
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.00;
	};
	class SRP_ButtstockPouch_Purple: SRP_ButtstockPouch_ColorBase {
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.00;
	};
	class M4_PlasticHndgrd;
	class ESP_RIS_Plated_HndGrd_Long_ColorBase: M4_PlasticHndgrd {
		s_recoilControlStabilityX = 0.20;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.50;
	};
};