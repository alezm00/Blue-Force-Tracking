[
    "AZMBFT_updateInterval", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Update interval", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "AZM BFT", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0.1, 20, 2, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
        // params ["_value"];
        // setViewDistance _value;
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;


[
    "AZMBFT_markerList", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    "Marker list", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "AZM BFT", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    '["b_med","b_mortar","b_motor_inf","b_naval","b_Ordnance","b_plane","b_recon","b_service","b_support","b_uav"]',
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
        // params ["_value"];
        // setViewDistance _value;
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;




AZMBFT_storage = nil;
AZMBFT_isTransmitting = false;
AZMBFT_isReceiving = false;

AZMBFT_localMarkerList = createHashMap;


AZMBFT_colorsList = [
    ["colorBLUFOR", [0,0.3,0.6,1]],
    ["colorOPFOR", [0.5,0,0,1]],
    ["colorIndependent", [0,0.5,0,1]],
    ["colorCivilian", [0.4,0,0.5,1]],
    ["ColorBlack", [0,0,0,1]],
    ["ColorGrey", [0.5,0.5,0.5,1]],
    ["ColorRed", [0.9,0,0,1]],
    ["ColorBrown", [0.5,0.25,0,1]],
    ["ColorOrange", [0.85,0.4,0,1]],
    ["ColorYellow", [0.85,0.85,0,1]],
    ["ColorKhaki", [0.5,0.6,0.4,1]],
    ["ColorGreen", [0,0.8,0,1]],
    ["ColorBlue", [0,0,1,1]],
    ["ColorPink", [1,0.3,0.4,1]],
    ["ColorWhite", [1,1,1,1]],
    ["ColorWEST", [0,0.3,0.6,1]],
    ["ColorEAST", [0.5,0,0,1]],
    ["ColorGUER", [0,0.5,0,1]],
    ["ColorCIV", [0.4,0,0.5,1]],
    ["ColorUNKNOWN", [0.7,0.6,0,1]]
];

AZMBFT_getStorage = {
	AZMBFT_storage = missionNamespace getVariable ["AZMBFT_storage_public",createHashMap];
};


[] call AZMBFT_getStorage;



[] spawn {
    // ('azm_bft_rx' in items _player) || ('azm_bft_tx' in items _player)
    while {true} do {

        if (!('azm_bft_rx' in items player) && AZMBFT_isReceiving) then {
            [] call AZMBFT_stopReceiving;

            // ["no item killing","RX"] call CBA_fnc_debug;

        };
        if (!('azm_bft_tx' in items player) && AZMBFT_isTransmitting) then {
            [] call AZMBFT_stopTransmitting;
            // ["no item killing","TX"] call CBA_fnc_debug;
        };



        sleep AZMBFT_updateInterval;
    };
}
