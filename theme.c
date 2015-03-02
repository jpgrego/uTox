#include "main.h"

void theme_load(char theme)
{
    /* Default colours */
    // Chat area colours
    COLOUR_MAIN_BACKGROUND = 0xFFFFFF;
    COLOUR_MAIN_FOREGROUND = 0x1c1c1c;
    COLOUR_MAIN_FOREGROUND_SECONDARY = 0x7a7a7a;
    COLOUR_MAIN_ACTIONTEXT = 0x4444ff;
    COLOUR_MAIN_URLTEXT = COLOUR_MAIN_ACTIONTEXT;
    // Top & bottom 'Menu' colours
    COLOUR_MENU_BACKGROUND = 0x1c1c1c;
    COLOUR_MENU_FOREGROUND = 0xC0C0C0;
    COLOUR_MENU_HOVER = 0x202020;
    COLOUR_MENU_ACTIVE = 0x404040;
    COLOUR_MENU_ACTIVE_FOREGROUND = 0xE5E5E5;
    // Buddy list colours
    COLOUR_LIST_BACKGROUND = 0x282828;
    COLOUR_LIST_HOVER_BACKGROUND = 0x555555;
    COLOUR_LIST_FOREGROUND = COLOUR_MAIN_BACKGROUND;
    COLOUR_LIST_FOREGROUND_SECONDARY = 0xBaBaBa;
    // Text highlighing
    COLOUR_HIGHLIGHT_BACKGROUND = COLOUR_MAIN_FOREGROUND;
    COLOUR_HIGHLIGHT_FOREGROUND = COLOUR_MAIN_BACKGROUND;
    COLOUR_GROUP_UNUSUAL = COLOUR_MAIN_URLTEXT;
    // Inputs
    COLOUR_EDGE_NORMAL = 0xC0C0C0;
    COLOUR_EDGE_ACTIVE = COLOUR_MAIN_URLTEXT;
    COLOUR_EDGE_HOVER = 0x707070;
    COLOUR_DROPDOWN_ACTIVE_BACKGROUND = COLOUR_MAIN_FOREGROUND;
    COLOUR_DROPDOWN_ACTIVE_FOREGROUND = COLOUR_MAIN_BACKGROUND;

    // Get rid of
    COLOUR_MAIN_BACKGROUND_SECONDARY  = 0xBaBaBa;
    
    switch (theme) {
    case THEME_DARK:
        // Chat area colours
        COLOUR_MAIN_BACKGROUND = 0x333333;
        COLOUR_MAIN_FOREGROUND = 0xdddddd;
        COLOUR_MAIN_FOREGROUND_SECONDARY = 0xbbbbbb;
        COLOUR_MAIN_ACTIONTEXT = 0x00AAAA;
        COLOUR_MAIN_URLTEXT = COLOUR_MAIN_ACTIONTEXT;
        // Buddy list colours
        COLOUR_LIST_BACKGROUND = 0x222222;
        COLOUR_LIST_HOVER_BACKGROUND = 0x151515;
        COLOUR_MAIN_BACKGROUND_SECONDARY  = 0x555555;
        // Buddy list colours
        COLOUR_MENU_BACKGROUND = COLOUR_LIST_BACKGROUND;
        COLOUR_MENU_HOVER = COLOUR_LIST_HOVER_BACKGROUND;
        COLOUR_MENU_ACTIVE = COLOUR_MAIN_FOREGROUND;
        // Text highlighing
        COLOUR_HIGHLIGHT_BACKGROUND = COLOUR_MAIN_FOREGROUND;
        COLOUR_HIGHLIGHT_FOREGROUND = COLOUR_MAIN_BACKGROUND;
        COLOUR_GROUP_UNUSUAL = COLOUR_MAIN_URLTEXT;
        // Inputs
        COLOUR_EDGE_NORMAL = 0x555555;
        COLOUR_EDGE_ACTIVE = 0x228888;
        COLOUR_EDGE_HOVER = 0x999999;
        COLOUR_DROPDOWN_ACTIVE_BACKGROUND = COLOUR_MAIN_FOREGROUND;
        COLOUR_DROPDOWN_ACTIVE_FOREGROUND = COLOUR_MAIN_BACKGROUND;
        COLOUR_MENU_ACTIVE_FOREGROUND = 0x151515;
        break;
    
    case THEME_LIGHT:
        // Buddy list colours
        COLOUR_LIST_BACKGROUND = 0xF0F0F0;
        COLOUR_LIST_HOVER_BACKGROUND = 0xE0E0E0;
        COLOUR_LIST_FOREGROUND = COLOUR_MAIN_FOREGROUND;
        COLOUR_LIST_FOREGROUND_SECONDARY = COLOUR_MAIN_FOREGROUND_SECONDARY;
        // Buddy list colours
        COLOUR_MENU_BACKGROUND = 0xF0F0F0;
        COLOUR_MENU_HOVER = 0xE0E0E0;
        COLOUR_MENU_ACTIVE = 0x555555;
        COLOUR_MENU_FOREGROUND = 0x555555;
        COLOUR_MENU_ACTIVE_FOREGROUND = 0xffffff;
        break;
    }
}
