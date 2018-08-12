class CfgPatches
{
	class Leo_QuickEnd
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_Extended_EventHandlers"};
		name = "Quick Mission End";
		author = "Leopard20";            
	};
};


class RscStandardDisplay;
class RscShortcutButton;
class RscButtonMenu;

class RscDisplayInterrupt: RscStandardDisplay {
  class Controls {
    class Leo_Exit: RscButtonMenu {
      idc = 53622;
      style = ST_CENTER;
		  //x = "(1 * ( ((safezoneW / safezoneH) min 1.2) / 40) + ((safezoneX)) + 15 * (	((safezoneW / safezoneH) min 1.2) / 40)) + .03";
		  x = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
		  //y = "20.8 * ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (	((safezoneW / safezoneH) min 1.2) / 1.2))";
		  y = "12 * (	(	((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - ( ((safezoneW / safezoneH) min 1.2) / 1.2))";
		  w = "15 * (	((safezoneW / safezoneH) min 1.2) / 40)";
		  h = "1 * ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			soundEnter[] = {"", 0.10, 1};
			soundPush[] = {"", 0.10, 1};
			soundClick[] = {"", 0.10, 1};
			soundEscape[] = {"", 0.10, 1};
	   // key = "";
      text = "End Mission";
      action = "['end1',false,0,false,false] spawn BIS_fnc_endMission";
    };
  };
};