class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class azm_bft_main {
                displayName = "Blue Force Tracking";
                // condition = "true";
                condition = "('azm_bft_rx' in items _player) || ('azm_bft_tx' in items _player)";
                exceptions[] = {};
                statement = "true;";
                icon = "";
                showDisabled = 0;

                class azm_bft_tx {
                    displayName = "TX";
                    // condition = "true";
                    condition = "('azm_bft_tx' in items _player)";
                    statement = "true;";
                    showDisabled = 0;
                    icon = "\azm_bft\data\img\items\tx.paa";

                    class azm_bft_startTX {
                        displayName = "Start transmitting";
                        condition = "!AZMBFT_isTransmitting";
                        statement = "[] spawn AZMBFT_UI_transmittingOpen;";
                        icon = "";
                        showDisabled = 0;
                    };
                    class azm_bft_stopTX {
                        displayName = "Stop transmitting";
                        condition = "AZMBFT_isTransmitting";
                        statement = "[] call AZMBFT_stopTransmitting;";
                        icon = "";
                        showDisabled = 0;
                    };
                };



                class azm_bft_rx {
                    displayName = "RX";
                    // condition = "true";
                    condition = "('azm_bft_rx' in items _player)";
                    statement = "true;";
                    showDisabled = 0;
                    icon = "\azm_bft\data\img\items\txRX.paa";

                    class azm_bft_startRX {
                        displayName = "Start receiving";
                        condition = "!AZMBFT_isReceiving";
                        statement = "[] spawn AZMBFT_startReceiving;";
                        icon = "";
                        showDisabled = 0;
                    };
                    class azm_bft_stopRX {
                        displayName = "Stop receiving";
                        condition = "AZMBFT_isReceiving";
                        statement = "[] call AZMBFT_stopReceiving;";
                        icon = "";
                        showDisabled = 0;
                    };
                    // class azm_bft_changeName {
                    //     displayName = "Change transmitting name";
                    //     condition = "true";
                    //     statement = "hint 'change name'";
                    //     icon = "";
                    //     showDisabled = 0;
                    //     class azm_bft_syncNameToGroup {
                    //         displayName = "Sync name to group";
                    //         condition = "true";
                    //         statement = "hint 'sync name to group'";
                    //         icon = "";
                    //         showDisabled = 0;
                    //     };
                    // };
                };



            };
        };
    };
};
