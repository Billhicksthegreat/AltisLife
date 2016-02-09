/*
	File : fn_placestorageSmall.sqf
	Author: NiiRoZz

	Description:
	Place container were player select with preview
*/
private["_container"];
if (!life_container_active) exitWith {};
if (life_container_activeObj == ObjNull) exitWith {};
_container = life_container_activeObj;
detach _container;
_container setPosATL [getPosATL _container select 0, getPosATL _container select 1, (getPosATL _container select 2) + 0.7];
_container enableSimulationGlobal true;
[false,"storagesmall",1] call life_fnc_handleInv;
[_container] call life_fnc_placeContainer;
clearWeaponCargoGlobal _container;
clearMagazineCargoGlobal _container;
clearItemCargoGlobal _container;
clearBackpackCargoGlobal _container;
life_container_active = false;
life_container_activeObj = ObjNull;