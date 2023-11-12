class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    class azm_bft_tx: CBA_MiscItem {
        author = "Alezm";
        scope = 2;
        displayName = "BFT TX";
        descriptionShort = "";
        // model = "\z\ace\addons\tagging\data\SprayCan.p3d";
        picture = "\azm_bft\data\img\items\tx.paa";
        icon = "iconObject_circle";
        mapSize = 0.034;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.05;
        };
    };

    class azm_bft_rx: CBA_MiscItem {
        author = "Alezm";
        scope = 2;
        displayName = "BFT RX";
        descriptionShort = "";
        // model = "\z\ace\addons\tagging\data\SprayCan.p3d";
        picture = "\azm_bft\data\img\items\txRX.paa";
        icon = "iconObject_circle";
        mapSize = 0.034;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.05;
        };
    };


};
