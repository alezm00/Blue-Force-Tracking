AZMBFT_UI_receivingOpen = {
    disableSerialization;
    createDialog "AZMBFT_ui_RXstarter";
    // waitUntil {!isNull (findDisplay 53153)};
};





AZMBFT_startReceiving = {

    private _display = findDisplay 53153;

    private _code = parseNumber ( ((ctrlText (_display displayCtrl 1400)) splitString ",.") joinString "." );

    if !([(_display displayCtrl 1400)] call AZMBFT_ui_validateCode) exitWith {
        [["AZM BFT", 2, [0.906,0.298,0.235,1]], ["invalid code, Must be between 430 and 490"],true] call CBA_fnc_notify;
    };

    closeDialog 0;
    AZMBFT_isReceiving = true;
    AZMBFT_receivingCode = _code;

    [["AZM BFT", 2, [0.161,0.502,0.725,1]], ["RX started"]] call CBA_fnc_notify;


    while {AZMBFT_isReceiving} do {
        // [
		// 	player,
		// 	getPos player,
		// 	group player,
        //     _text,
        //     [_markerType,_color]
		// ];

        {
        //_x  _y
            private _markerName = format ["AZMBFT_marker_%1",_x];

            if (!(_y isEqualType [])) then {
                deleteMarkerLocal _markerName;
                // ["DElete marker",_markerName] call CBA_fnc_debug;
                AZMBFT_localMarkerList deleteAt _x;
            } else {
                _y params ["_player","_pos","_group","_text","_code","_markerData"];
                if (AZMBFT_receivingCode isEqualTo _code) then {
                    if ((getMarkercolor _markerName) isEqualTo "") then {
                        // ["create marker",_markerName] call CBA_fnc_debug;
                        private _marker = createMarkerLocal [_markerName,_pos];
                        _marker setMarkerColorLocal _markerData#1;
                        _marker setMarkerTypeLocal _markerData#0;
                        _marker setMarkerTextLocal _text;


                        AZMBFT_localMarkerList set [_x,_marker];
                    };

                    _markerName setMarkerPosLocal _pos;
                };
            }
        } forEach AZMBFT_storage;

        sleep AZMBFT_updateInterval;
    };

};


AZMBFT_stopReceiving = {
    AZMBFT_isReceiving = false;
    // ["AZMBFT_stopReceiving"] call CBA_fnc_debug;
    {
        // ["AZMBFT_stopReceiving",_y] call CBA_fnc_debug;
        deleteMarkerLocal _y;
    } forEach AZMBFT_localMarkerList;
    [["AZM BFT", 2, [0.161,0.502,0.725,1]], ["RX stopped"]] call CBA_fnc_notify;
};
