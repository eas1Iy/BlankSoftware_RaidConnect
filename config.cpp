/* 
BLANKSOFTWARE DayZ Modding

Discord:			https://discord.gg/xt2GGzfFY7
Telegram: 			https://t.me/blanksoftware
Telegram support:	https://t.me/blankdayz

This is private modification.
Use without express permission is prohibited and will be punished.
It is protected by copyright.
*/

class CfgPatches
{
	class BlankSoftware_RaidConnect
	{
		units[]				= {};
		weapons[]			= {};
		requiredAddons[]	= {};
		requiredVersion		= 0.1;
	};
};

class CfgMods
{
	class BlankSoftware_RaidConnect
	{
		dir				= "BlankSoftware_RaidConnect";
		name			= "BlankSoftware_RaidConnect";
		authorID		= "76561198993179098";
		author			= "eas1ly";
		type			= "mod";
		picture			= "";
		action			= "";
		credits			= "";
		version			= 1.0;
		hideName		= 1;
		hidePicture		= 1;
		extra			= 0;

		defines[]		= 
		{ 
			"BLANK_RaidConnect" 
		};

		dependencies[]= { "Game", "World", "Mission" };

		class defs
		{
			class gameScriptModule
			{
				files[]= 
				{ 
					"BlankSoftware_RaidConnect/scripts/common", 
					"BlankSoftware_RaidConnect/scripts/3_Game" 
				};
			};
			class worldScriptModule
			{
				files[]= 
				{ 
					"BlankSoftware_RaidConnect/scripts/common",
					"BlankSoftware_RaidConnect/scripts/4_World" 
				};
			};
			class missionScriptModule
			{
				files[]= 
				{ 
					"BlankSoftware_RaidConnect/scripts/common", 
					"BlankSoftware_RaidConnect/scripts/5_Mission" 
				};
			};
		};
	};
};