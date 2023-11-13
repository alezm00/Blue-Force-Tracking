class AZMBFT_ui_TXstarter {
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
