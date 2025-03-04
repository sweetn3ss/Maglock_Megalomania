class cfgPatches {
    class Maglock_Megalomania {
        name="Maglock Megalomania";
        authors[]={
            "cardboardboxo",
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
    class MLMM {
        class functions {};
    };
    class MLMM_init {
        class mlmmInit {
            postInit = 1;
        };
    };
};