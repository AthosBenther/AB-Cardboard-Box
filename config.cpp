class CfgPatches
{
	class cbox
	{
		units[] = {'cbox'};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
			{
				"DZ_Data",
		};
	};
};

class cfgVehicles
{
	class Inventory_Base;
	class CourierBag;
	class cbox : CourierBag
	{
		scope = 2;
		displayName = "Cardboard Box";
		descriptionShort = "A generic cardboard box.
It may look pedestrian but it's light, sturdy, and has a hundred and one uses -- how can we get by without them?
A good cardboard box is a soldier's best friend -- having one handy can mean the difference between life and death.";
		model = "AB-cardboard-box\box.p3d";
		rotationFlags = 17;
		reversed = 1;
		itemSize[] = {10, 10};
		inventorySlot[] = {};
		attachments[] = {};
		itemsCargoSize[] = {10,10};
		weight = 600;
		varWetMax = 1.0;
		heatIsolation = 0.8;

		//repairableWithKits[] = {7};
		//repairCosts[] = {25};
		hiddenSelections[] =
			{
				"boundingbox_min",
				"boundingbox_max",
				"invview"
			};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {};
				};
			};
		};
	};
	class cbox_a : cbox{
		displayName = "Cardboard Box A";
		descriptionShort = "(Cardboard Box A)
< To Heliport > written on it.";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"AB-Cardboard-Box\data\cboxa.paa",
		};
	}
	class cbox_b : cbox{
		displayName = "Cardboard Box B";
		descriptionShort = "(Cardboard Box A)
< To Nuclear Storage Building > written on it.";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"AB-Cardboard-Box\data\cboxb.paa",
		};
	}
	class cbox_a : cbox{
		displayName = "Cardboard Box C";
		descriptionShort = "(Cardboard Box C)
< To Snowfield > written on it.";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {
			"AB-Cardboard-Box\data\cboxc.paa",
		};
	}
};
class CfgMods
{
	class cardboard_box
	{
		dir = "cardboard-box";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Cardboard Box";
		credits = "Athos Benther";
		author = "Athos Benther";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
	};
};