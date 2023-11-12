// class Extended_PreStart_EventHandlers {
//     class gen_data {
//         init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
//     };
// };

class Extended_PreInit_EventHandlers {
    class azm_bft {
        init = "call compileScript ['\azm_bft\XEH_preInit.sqf']";
    };
};

class Extended_PostInit_EventHandlers {
    class azm_bft {
        init = "call compileScript ['\azm_bft\XEH_postInit.sqf']";
    };
};
