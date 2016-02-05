#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Building interaction menu
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Title 37401

private["_display","_container","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7"];
disableSerialization;
_container = param [0,ObjNull,[ObjNull]];
if(isNull _container) exitWith {}; //Bad target

if(!dialog) then {
	createDialog "pInteraction_Menu";
};

_Btn1 = CONTROL(37400,Btn1);
_Btn2 = CONTROL(37400,Btn2);
_Btn3 = CONTROL(37400,Btn3);
_Btn4 = CONTROL(37400,Btn4);
_Btn5 = CONTROL(37400,Btn5);
_Btn6 = CONTROL(37400,Btn6);
_Btn7 = CONTROL(37400,Btn7);
{_x ctrlShow false;} foreach [_Btn1,_Btn2,_Btn3,_Btn4,_Btn5,_Btn6,_Btn7];

life_pInact_container = _container;
_Btn1 ctrlSetText localize "STR_pInAct_DeleteContainer";
_Btn1 buttonSetAction "[life_pInact_container] spawn life_fnc_deleteContainer; closeDialog 0;";
_Btn1 ctrlShow true;