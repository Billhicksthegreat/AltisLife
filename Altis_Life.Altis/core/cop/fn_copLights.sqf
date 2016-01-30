/*
	File: fn_copLights.sqf

	Author: mindstorm, modified by Adanteh
	Link: http://forums.bistudio.com/showthread.php?157474-Offroad-Police-sirens-lights-and-underglow

	Description:
	Adds the light effect to cop vehicles.
*/
Private ["_vehicle","_lightRed","_lightBlue","_lightleft","_lightright","_leftRed"];
_vehicle = _this select 0;
if(isNil "_vehicle" OR isNull _vehicle OR !(_vehicle getVariable "lights")) exitWith {};
_lightRed = [20, 0.1, 0.1];
_lightBlue = [0.1, 0.1, 20];

_lightleft = "#lightpoint" createVehicle getpos _vehicle;
sleep 0.2;
_lightleft setLightColor _lightRed;
_lightleft setLightBrightness 0.2;
_lightleft setLightAmbient [0.1,0.1,1];

switch (typeOf _vehicle) do
{
	case "I_Quadbike_01_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.07, 1.0, -0.7]];
	};

	case "C_Hatchback_01_sport_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.45, -0, 0.2]];
	};

	case "C_Offroad_01_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 0.0, 0.56]];
	};
	//  Hunter
	case "B_MRAP_01_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.5, 1.5, -0.7]];
	};
	//  Suv
	case "C_SUV_01_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.55, 0.6, -0.1]];
	};

	case "B_Heli_Light_01_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.3, 1.82, -0.6]];
	};

	case "B_Heli_Transport_03_unarmed_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.4, 8.5, -1.85]];
	};

	case "I_Heli_light_03_unarmed_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 6.25, -0.93]];
	};

	case "O_Heli_Light_02_unarmed_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.37, 5.2, -1.7]];
	};

	case "B_Heli_Transport_01_F":
	{
		_lightleft lightAttachObject [_vehicle, [-0.7, 6.85, -1.25]];
	};
};

_lightleft setLightAttenuation [0.181, 0, 1000, 130];
_lightleft setLightIntensity 10;
_lightleft setLightFlareSize 0.38;
_lightleft setLightFlareMaxDistance 150;
_lightleft setLightUseFlare true;

_lightright = "#lightpoint" createVehicle getpos _vehicle;
sleep 0.2;
_lightright setLightColor _lightBlue;
_lightright setLightBrightness 0.2;
_lightright setLightAmbient [0.1,0.1,1];

switch (typeOf _vehicle) do
{
	case "I_Quadbike_01_F":
	{
		_lightright lightAttachObject [_vehicle, [0.07, 1.0, -0.7]];
	};

	case "C_Hatchback_01_sport_F":
	{
		_lightright lightAttachObject [_vehicle, [0.4, -0, 0.2]];
	};

	case "C_Offroad_01_F":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 0.0, 0.56]];
	};

	case "B_MRAP_01_F":
	{
		_lightright lightAttachObject [_vehicle, [0.5, 1.5, -0.7]];
	};

	case "C_SUV_01_F":
	{
		_lightright lightAttachObject [_vehicle, [0.55, 0.6, -0.1]];
	};

	case "B_Heli_Light_01_F":
	{
		_lightright lightAttachObject [_vehicle, [0.3, 1.82, -0.6]];
	};

	case "B_Heli_Transport_03_unarmed_F":
	{
		_lightright lightAttachObject [_vehicle, [0.4, 8.5, -1.85]];
	};

	case "I_Heli_light_03_unarmed_F":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 6.25, -0.93]];
	};
	//  Orca
	case "O_Heli_Light_02_unarmed_F":
	{
		_lightright lightAttachObject [_vehicle, [0.37, 5.2, -1.7]];
	};
	//  Ghosthawk
	case "B_Heli_Transport_01_F":
	{
		_lightright lightAttachObject [_vehicle, [0.7, 6.85, -1.25]];
	};
};

_lightright setLightAttenuation [0.181, 0, 1000, 130];
_lightright setLightIntensity 10;
_lightright setLightFlareSize 0.38;
_lightright setLightFlareMaxDistance 150;
_lightright setLightUseFlare true;

_lightleft setLightDayLight true;
_lightright setLightDayLight true;

_leftRed = true;
while{ (alive _vehicle)} do
{
	if(!(_vehicle getVariable "lights")) exitWith {};
	if(_leftRed) then
	{
		_leftRed = false;
		_lightright setLightBrightness 0.0;
		sleep 0.05;
		_lightleft setLightBrightness 6;
	}
		else
	{
		_leftRed = true;
		_lightleft setLightBrightness 0.0;
		sleep 0.05;
		_lightright setLightBrightness 6;
	};
	sleep (_this select 1);
};
deleteVehicle _lightleft;
deleteVehicle _lightright;