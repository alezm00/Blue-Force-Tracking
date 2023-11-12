AZMBFT_UI_transmittingOpen = {
    disableSerialization;
    createDialog "AZMBFT_ui_TXstarter";
    waitUntil {!isNull (findDisplay 53152)};

    private _display = findDisplay 53152;

    private _markerList = _display displayCtrl 1500;
    private _colorList =  _display displayCtrl 1501;

    lbClear _markerList;
    lbClear _colorList;

    {
        private _markerName = getText (configFile >> "CfgMarkers" >> _x >> "name");
        private _markerIcon = getText (configFile >> "CfgMarkers" >> _x >> "icon");


        private _index = _markerList lbAdd _markerName;
        _markerList lbSetData [_index,_x];
        _markerList lbSetPicture [_index,_markerIcon];
    } forEach parseSimpleArray AZMBFT_markerList;
    _markerList lbSetCurSel 0;


    {
        private _index = _colorList lbAdd (_x select 0 select [5]);
        _colorList lbSetColor [_index, _x select 1];
        _colorList lbSetData [_index,_x select 0];
    } forEach AZMBFT_colorsList;
    _colorList lbSetCurSel 0;
};


AZMBFT_startTransmitting = {
    disableSerialization;
    private _display = findDisplay 53152;
    private _markerList = _display displayCtrl 1500;
    private _colorList =  _display displayCtrl 1501;

    private _markerType = _markerList lbData (lbCurSel _markerList);
    private _color = _colorList lbData (lbCurSel _colorList);

    private _text = ctrlText (_display displayCtrl 1400);

    closeDialog 0;
	AZMBFT_isTransmitting = true;
    [["AZM BFT", 2, [0.161,0.502,0.725,1]], ["TX started"]] call CBA_fnc_notify;
	while {AZMBFT_isTransmitting} do {

		private _temp = [
			player,
			getPos player,
			group player,
            _text,
            [_markerType,_color]
		];

        AZMBFT_storage set [getPlayerUID player, _temp];
        publicVariable "AZMBFT_storage";


		sleep AZMBFT_updateInterval;
	};

};


AZMBFT_stopTransmitting = {
	AZMBFT_isTransmitting = false;

    AZMBFT_storage set [getPlayerUID player,false];
    publicVariable "AZMBFT_storage";

    [["AZM BFT", 2, [0.161,0.502,0.725,1]], ["TX stopped"]] call CBA_fnc_notify;
};
