#include "..\..\script_macros.hpp"
/*
	File: fn_copSearch.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Returns information on the search.
*/
life_action_inUse = false;
private["_license","_guns","_gun","_weapons","_magazines"];
params [
	["_civ",objNull,[objNull]],
	["_invs",[],[[]]],
	["_robber",false,[false]]
];

if(isNull _civ) exitWith {};

_illegal = 0;
_inv = "";
if(count _invs > 0) then
{
	{
		_displayName = M_CONFIG(getText,"VirtualItems",SEL(_x,0),"displayName");
		_inv = _inv + format["%1 %2<br/>",SEL(_x,1),(localize _displayName)];
		_price = M_CONFIG(getNumber,"VirtualItems",SEL(_x,0),"sellPrice");

		if(!(EQUAL(_price,-1))) then
		{
			ADD(_illegal,(SEL(_x,1) * _price));
		};
	} foreach _invs;

	if(_illegal > 6000) then
	{
		[getPlayerUID _civ,_civ GVAR ["realname",name _civ],"482"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
	};

	[getPlayerUID _civ,_civ GVAR ["realname",name _civ],"481"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
	[0,"STR_Cop_Contraband",true,[(_civ GVAR ["realname",name _civ]),[_illegal] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",west];
}
else
{
	_inv = localize "STR_Cop_NoIllegal";
};

_weapons = "";
{
	_weapons = _weapons + format["%1<br/>", getText(configFile >> "cfgWeapons" >> _x >> "displayName")];
} forEach (weapons _civ);

if (_weapons == "") then { _weapons = "No weapons"; };

_magazines = "";
{
	_magazines = _magazines + format["%1<br/>", getText(configFile >> "CfgMagazines" >> _x >> "displayName")];
} forEach (magazines _civ);

if (_magazines == "") then { _magazines = "No magazines or grenades"; };

if(!alive _civ || player distance _civ > 5) exitWith {hint format[localize "STR_Cop_CouldntSearch",_civ GVAR ["realname",name _civ]];};

hint parseText format["<t color='#FF0000'><t size='2'>%1</t></t><br/><t color='#FFD700'><t size='1.5'><br/>" +(localize "STR_Cop_IllegalItems")+ "</t></t><br/><t color='#FF0000'><t size='1'>%2</t></t><br/><t color='#FFD700'><t size='1.5'><br/>" +(localize "STR_Cop_FirearmSearch")+ "<br/><t color='#FF0000'><t size='1'>%3</t></t><br/><t color='#FFD700'><t size='1.5'><br/>" +(localize "STR_Cop_MagazineSearch")+ "<br/><t color='#FF0000'><t size='1'>%4</t></t><br/><br/><t color='#FF0000'>%5</t>",(_civ GVAR ["realname",name _civ]),_inv,_weapons,_magazines,if(_robber) then {"Robbed the bank"} else {""}];

if(_robber) then
{
	[0,"STR_Cop_Robber",true,[(_civ GVAR ["realname",name _civ])]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
};