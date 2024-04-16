class AZMBFT_ui_TXstarter {
    idd = 53152;
    name = "AZMBFT_ui_TXstarter";
    onload = "uiNamespace setVariable ['AZMBFT_ui_TXstarter',_this select 0];";
    class controlsBackground {
        class Background: RscPicture {
			x = CENTER_X - 40 * GRID_W;
			y = CENTER_Y - 50 * GRID_H;
			w = 80 * GRID_W;
			h = 82 * GRID_H;
			text = "#(argb,8,8,3)color(0.071,0.078,0.067,0.8)";
		};
		class Header: RscText {
			x = CENTER_X - 40 * GRID_W;
			y = CENTER_Y - 50 * GRID_H;
			w = 80 * GRID_W;
			h = 4 * GRID_H;

			colorBackground[] = AZM_PROFILE;
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.83)";
            text = "Blue Force Tracking TX";
            tooltip = "by Alezm <3";
		};
    };
    class controls {
		class marker: RscListbox {
			x = CENTER_X - 38.5 * GRID_W;
			y = CENTER_Y - 44 * GRID_H;
			w = 37 * GRID_W;
			h = 50 * GRID_H;
			idc = 1500;
		};
		class color: RscListbox {
			x = CENTER_X + 1.5 * GRID_W;
			y = CENTER_Y - 44 * GRID_H;
			w = 37 * GRID_W;
			h = 50 * GRID_H;
			idc = 1501;
		};
		class name: RscEdit {
			x = CENTER_X - 38.5 * GRID_W;
			y = CENTER_Y + 8 * GRID_H;
			w = 77 * GRID_W;
			h = 5 * GRID_H

			idc = 1400;
			colorBackground[] = {0,0,0,0.6};

            tooltip = "Sets the transmission name";

			onload = "(_this select 0) ctrlSetText (uiNamespace getvariable ['AZMBFT_ui_TXstarternameEdit_tempValue',str group player])";
            onEditChanged = "uiNamespace setvariable ['AZMBFT_ui_TXstarter_nameEdit_tempValue',(_this select 1)]";
		};

		class code: RscEdit {
			x = CENTER_X - 38.5 * GRID_W;
			y = CENTER_Y + 15 * GRID_H;
			w = 77 * GRID_W;
			h = 5 * GRID_H

			idc = 1401;
			colorBackground[] = {0,0,0,0.6};
            maxChars = 5;

            tooltip = "Sets the transmission Encryption code";

			onload = "(_this select 0) ctrlSetText (uiNamespace getvariable ['AZMBFT_ui_TXstarterEncryptionCodeEdit_tempValue','434'])";
            onEditChanged = "uiNamespace setvariable ['AZMBFT_ui_TXstarterEncryptionCodeEdit_tempValue',(_this select 1)];";
            onKillFocus = "_this call AZMBFT_ui_validateCode;";
		};


		class start: RscButton {
			x = CENTER_X - 38.5 * GRID_W;
			y = CENTER_Y + (15+6) * GRID_H;
			w = 77 * GRID_W;
			h = 10 * GRID_H

			idc = 1601;
			text = "Start transmitting";
			colorBackground[] = AZM_eden_color_back_buttons;
            onButtonClick = "[] spawn AZMBFT_startTransmitting;";
		};
    };
};






/*class AZMBFT_ui_TXstarter {
    idd = 53152;
    name = "AZMBFT_ui_TXstarter";
    onload = "uiNamespace setVariable ['AZMBFT_ui_TXstarter',_this select 0];";
    class controlsBackground {
        class Background: RscPicture {
			x = 0.406235 * safezoneW + safezoneX;
			y = 0.333356 * safezoneH + safezoneY;
			w = 0.187529 * safezoneW;
			h = 0.308291 * safezoneH;
			text = "#(argb,8,8,3)color(0.071,0.078,0.067,0.8)";
		};
		class Header: RscText {
			x = 0.406118 * safezoneW + safezoneX;
			y = 0.311901 * safezoneH + safezoneY;
			w = 0.187608 * safezoneW;
			h = 0.0199279 * safezoneH;

			colorBackground[] = AZM_PROFILE;
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.83)";
            text = "Blue Force Tracking";
            tooltip = "by Alezm <3";
		};
    };
    class controls {
		class marker: RscListbox {
			x = 0.412096 * safezoneW + safezoneX;
			y = 0.344 * safezoneH + safezoneY;
			w = 0.0832161 * safezoneW;
			h = 0.209 * safezoneH;

			idc = 1500;
		};
		class color: RscListbox {
			x = 0.50586 * safezoneW + safezoneX;
			y = 0.344 * safezoneH + safezoneY;
			w = 0.0832161 * safezoneW;
			h = 0.209 * safezoneH;

			idc = 1501;
		};

		class name: RscEdit {
			x = 0.412096 * safezoneW + safezoneX;
			y = 0.566657 * safezoneH + safezoneY;
			w = 0.177059 * safezoneW;
			h = 0.0199279 * safezoneH;

			idc = 1400;
			colorBackground[] = {0,0,0,0.6};

            tooltip = "Sets the transmission name";

			onload = "(_this select 0) ctrlSetText (uiNamespace getvariable ['AZMBFT_ui_TXstarternameEdit_tempValue',str group player])";
            onEditChanged = "uiNamespace setvariable ['AZMBFT_ui_TXstarter_nameEdit_tempValue',(_this select 1)]";
		};

		class start: RscButton {
			x = 0.410924 * safezoneW + safezoneX;
			y = 0.593737 * safezoneH + safezoneY;
			w = 0.178153 * safezoneW;
			h = 0.0416609 * safezoneH;

			idc = 1601;
			text = "Start transmitting";
			colorBackground[] = AZM_eden_color_back_buttons;
            onButtonClick = "[] spawn AZMBFT_startTransmitting;";
		};
    };
};
