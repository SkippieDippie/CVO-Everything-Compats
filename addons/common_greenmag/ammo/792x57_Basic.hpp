class GVAR(ammo_792x57_basic_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "7.92x57", 1]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "7.92x57 Mauser"]);
    
    picture = "\z\greenmag\addons\main\data\762mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.22;
    };
};

class GVAR(ammo_792x57_basic_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "7.92x57", 10]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "7.92x57 Mauser"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_792x57_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.2;
    };
};

class GVAR(ammo_792x57_basic_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "7.92x57", 20]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "7.92x57 Mauser"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_792x57_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.4;
    };
};

class GVAR(ammo_792x57_basic_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "7.92x57", 30]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "7.92x57 Mauser"]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_792x57_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.6;
    };
};

class GVAR(ammo_792x57_basic_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "7.92x57", 40]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "7.92x57 Mauser"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_792x57_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.8;
    };
};

class GVAR(ammo_792x57_basic_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "7.92x57", 50]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "7.92x57 Mauser"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_792x57_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.0;
    };
};

class GVAR(ammo_792x57_basic_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "7.92x57", 60]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "7.92x57 Mauser"]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_792x57_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.2;
    };
};
