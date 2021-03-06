#include "..\..\script_macros.hpp"
/*
	File: fn_mkDowning.sqf
	Author: Alan from STS

	Description:
	Handles IR Laser on weapons for cops
*/
private ["_act","_curWep","_curAmmo"];
_act = [_this,3,"",[""]] call BIS_fnc_param;
_curWep = currentWeapon player;
_curAmmo = player ammo _curWep;

player setAmmo [_curWep, 0];
sleep 0.5;
player setAmmo [_curWep,_curAmmo];

switch (_act) do
{
	case "add": {player removeItem "acc_pointer_IR"; player addPrimaryWeaponItem "acc_pointer_IR";};
	case "rem": {player removePrimaryWeaponItem "acc_pointer_IR"; player addItem "acc_pointer_IR";};
};