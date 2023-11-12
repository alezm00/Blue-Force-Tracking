#define AZM_VERDE { 0.22, 0.7, 0.2, 0.9 }
#define AZM_VERDE_DARK { 0.157, 0.4, 0.157, 0.9 }
#define AZM_ROSSO { 1, 0.22, 0.22, 0.9 }t
#define AZM_ROSSO_DARK { 0.6, 0.157, 0.157, 0.9 }
#define AZM_BLUE { 0.286, 0.561, 1, 0.9 }
#define AZM_BLUE_DARK { 0.2, 0.392, 0.698, 0.9 }
#define AZM_BACK {0.114,0.122,0.118,1}
#define AZM_BACKS {0.071,0.078,0.067,1}


//colors editor like
#define AZM_eden_color_back {0.204,0.204,0.204,1}
#define AZM_eden_color_back_buttons {0.145,0.145,0.145,1}
#define AZM_eden_color_buttons {0.145,0.145,0.145,1}


//font
#define AZM_MAIN_FONT "PuristaLight"
#define AZM_sizex "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)"

#define AZM_PROFILE {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",1}



#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02

class RscScrollBar;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscHud;
class RscListNBox;
class RscText;
class RscLine;
class RscTree;
class RscPicture;
class RscCheckbox;
class RscProgress;
class RscListBox;
class RscListBoxNoSelBack;
class RscEdit;
class RscSlider;
class RscXSliderH;
class RscFrame;
class RscHTML;
class RscHitZones;
class RscMapControl;
class RscCombo;
class RscToolbox;
class RscStructuredText;
class RscActiveText;
class RscButton;
class RscShortcutButton;

class RscRigheSfondo: RscPicture {
    x=-4;
    y=-2;
    w=8;
    h=4;
    style=144;
    text="\a3\3DEN\Data\Displays\Display3DENEditAttributes\backgroundDisable_ca.paa";
    tileW="8 / (32 * pixelW)";
    tileH="4 / (32 * pixelH)";
    colorText[]={1,1,1,0.050000001};
};

class RscButtonLeft: RscButton {
    style = ST_LEFT;
    colorBackgroundActive[] = {1,1,1,1};
};

class RscButtonActionMap: RscButton {
    sizeEx = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.45";
    font = "PuristaSemibold";
    shadow = 1;
};
