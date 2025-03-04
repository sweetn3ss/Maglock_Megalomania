class cfgPatches {
    class Maglock_Megalomania {
        name="Maglock Megalomania";
        authors[]={
            "cardboardboxo",
            "Daisy",
            "Gray"
        };
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={
            "cba_main"
        };
    };
};
class cfgFunctions {
    /*class MLMM {
        class functions {};
    };*/
    class MLMM_init {
        file = "Maglock_Megalomania\functions";
        class mlmmInit {
            postInit = 1;
        };
        class mlmmKeybindsSettings {
            postInit = 1;
        };
    };
};