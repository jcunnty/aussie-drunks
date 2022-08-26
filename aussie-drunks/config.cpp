class CfgPatches
{
	class DZ_Gear_Drinks
	{
		units[]=
		{
			"Drink_Canteen",
			"Drink_SodaZlutaKlasik",
			"Drink_SodaZlutaKolaloka",
			"Drink_SodaZlutaMalinovka",
			"Drink_WaterBottle"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};

class CfgVehicles
{	class Inventory_Base;
	class SodaCan_ColorBase;
	class ExtraSoda: SodaCan_ColorBase
    {
    	model="\dz\gear\drinks\SodaCan.p3d";
		stackedRandom=0;
		itemSize[]={1,2};
		weight=15;
		stackedUnit="";
		destroyOnEmpty=0;
		varQuantityInit=330;
		varQuantityMin=0;
		varQuantityMax=330;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
    	class Nutrition
		{
			totalVolume=1;
			energy=1000;
			water=1000;
			nutritionalIndex=1;
			toxicity=0;
		};
    	class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
    };

    class BM_VB: ExtraSoda
	{
		scope=2;
		displayName="Victorian Bitter";
		descriptionShort="Bomar's beer";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\VB_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

    class BM_Bundy: ExtraSoda
	{
		scope=2;
		displayName="Bunderberg Rum";
		descriptionShort="the sugar cane fight juice";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Bundy_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

    class BM_CC: ExtraSoda
	{
		scope=2;
		displayName="Candian Club";
		descriptionShort="the wanna be beer";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\CC_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};


    class BM_JB: ExtraSoda
	{
		scope=2;
		displayName="Jim Beam";
		descriptionShort="Kentucky straight burbon";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\JB_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

        class BM_JD: ExtraSoda
	{
		scope=2;
		displayName="Jack Daniels Tennessee whiskey.";
		descriptionShort="Brocks drop of choice.";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\JD_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

    class BM_Speight: ExtraSoda
	{
		scope=2;
		displayName="Speight.";
		descriptionShort="Speight's golden ale. Sams bevy of choice";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Speight_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

    class BM_Corona: ExtraSoda
	{
		scope=2;
		displayName="Corona Beer.";
		descriptionShort="Imported beer from mexico. not bad with a bit of lime in the neck.";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Corona_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};  

	class BM_Fosters: ExtraSoda
	{
		scope=2;
		displayName="Foster's Beer.";
		descriptionShort="Foster's beer.";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Foster_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	}; 

	class BM_Carlton: ExtraSoda
	{
		scope=2;
		displayName="Carlton Draught.";
		descriptionShort="Carlton Draught.";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Carlton_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};  

    class BM_Mercury: ExtraSoda
	{
		scope=2;
		displayName="Mercury Hard Cider.";
		descriptionShort="Mercury hard cider.";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Mercury_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	}; 

    class BM_Northern: ExtraSoda
	{
		scope=2;
		displayName="Great Northern.";
		descriptionShort="Great northern super crisp.";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Northern_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	}; 

	class BM_XXXX: ExtraSoda
	{
		scope=2;
		displayName="XXXX Gold.";
		descriptionShort="XXXX Gold, up the maroons!";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\XXXX_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	}; 

	 class BM_Captain: ExtraSoda
	{
		scope=2;
		displayName="Captain Morgan";
		descriptionShort="Captain Morgan spiced rum";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Captain_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	 class BM_EMU: ExtraSoda
	{
		scope=2;
		displayName="Emu Expost";
		descriptionShort="Emu export";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Emu_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	 class BM_Guinness: ExtraSoda
	{
		scope=2;
		displayName="Guiness";
		descriptionShort="Guinness Stout";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Guinness_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	 class BM_Smirnoff: ExtraSoda
	{
		scope=2;
		displayName="Smirnoff Ice";
		descriptionShort="Smirnoff ice";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Smirnoff_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	 class BM_Stella: ExtraSoda
	{
		scope=2;
		displayName="Stella Artois";
		descriptionShort="Stella Artois";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Stella_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	 class BM_Strongbow: ExtraSoda
	{
		scope=2;
		displayName="Strongbow";
		descriptionShort="Strongbow Apple cider";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Strongbow_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	 class BM_Tooheys: ExtraSoda
	{
		scope=2;
		displayName="Tooheys New";
		descriptionShort="Tooheys new";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\Tooheys_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	 class BM_UDL: ExtraSoda
	{
		scope=2;
		displayName="UDL";
		descriptionShort="UDL lemon lime";
		hiddenSelectionsTextures[]=
		{
			"\aussie-drunks\data\UDL_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

    class Bottle_Base;
	class Extra_Bottle: Bottle_Base 
	{
		model="\dz\gear\drinks\VodkaBottles.p3d";
		stackedRandom=0;
		itemSize[]={1,3};
		weight=15;
		stackedUnit="";
		destroyOnEmpty=0;
		varQuantityInit=330;
		varQuantityMin=0;
		varQuantityMax=330;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
    	class Nutrition
		{
			totalVolume=1;
			energy=1000;
			water=1000;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

	class BM_VB_TALL: Extra_Bottle
	{
		scope=2;
		displayName="VB longneck";
		descriptionShort="A VB longneck, Perfect at 20 to 8 in the morning.";
		hiddenSelectionsTextures[]=
		{
			"aussie-drunks\data\VBbottle_co.paa"
		};
	};
    
};