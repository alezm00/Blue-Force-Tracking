class AZMBFT_ui_RXstarter {
    idd = 53153;
    name = "AZMBFT_ui_RXstarter";
    onload = "uiNamespace setVariable ['AZMBFT_ui_RXstarter',_this select 0];";
    class controlsBackground {
        class Background: RscPicture {
			x = CENTER_X - 40 * GRID_W;
			y = CENTER_Y - 15 * GRID_H;
			w = 80 * GRID_W;
			h = 27 * GRID_H;
			text = "#(argb,8,8,3)color(0.071,0.078,0.067,0.8)";
		};
		class Header: RscText {
			x = CENTER_X - 40 * GRID_W;
			y = CENTER_Y - 15 * GRID_H;
			w = 80 * GRID_W;
			h = 4 * GRID_H;

			colorBackground[] = AZM_PROFILE;
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.83)";
            text = "Blue Force Tracking RX";
            tooltip = "by Alezm <3";
		};
    };
    class controls {
		class code: RscEdit {
			x = CENTER_X - 38.5 * GRID_W;
			y = CENTER_Y - 9 * GRID_H;
			w = 77 * GRID_W;
			h = 7 * GRID_H

			idc = 1400;
			colorBackground[] = {0,0,0,0.6};
            maxChars = 5;

            tooltip = "Sets the receiving Encryption code";

			onload = "(_this select 0) ctrlSetText (uiNamespace getvariable ['AZMBFT_ui_TXstarterEncryptionCodeEdit_tempValue','434'])";
            onEditChanged = "uiNamespace setvariable ['AZMBFT_ui_TXstarterEncryptionCodeEdit_tempValue',(_this select 1)];";
            onKillFocus = "_this call AZMBFT_ui_validateCode;";
		};


		class start: RscButton {
			x = CENTER_X - 38.5 * GRID_W;
			y = CENTER_Y - 0 * GRID_H;
			w = 77 * GRID_W;
			h = 10 * GRID_H

			idc = 1600;
			text = "Start receiving";
			colorBackground[] = AZM_eden_color_back_buttons;
            onButtonClick = "[] spawn AZMBFT_startReceiving;";
		};
    };
};
