class CfgPatches{
	class QLTV{
		name="Quick Loot to Vehicle";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.60;
		requiredAddons[] = {"A3_Functions_F"};
	};
};

class CfgFunctions{
	class MLS{
		class QLTV{
			class postInit{
				file = "\QLTV\postInit.sqf";
				postInit = 1;
			};
			class test{
				file = "\QLTV\Functions\test.sqf";
			};
			class buttonAction{
				file = "\QLTV\Functions\buttonAction.sqf";
			};
			class getItems{
				file = "\QLTV\Functions\getItems.sqf";
			};
			class transferGear{
				file = "\QLTV\Functions\transferGear.sqf";
			};
		};	
	};
};