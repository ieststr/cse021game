#ifndef APPLICATION_H
#define APPLICATION_H

#include <bobcat_ui/all.h>
#include <bobcat_ui/menu.h>
#include <bobcat_ui/textbox.h>

class Application: public bobcat::Application_{
    // Declare your app components here
    bobcat::Window *window;
    bobcat::TextBox *Title;
    bobcat::Menu *mainMenu;
    bobcat::MenuItem *RulesWindowMenu;
    bobcat::MenuItem *leaderboardWindowMenu;

    // Also declare functions here (signature only)
    

public:
    Application();

    friend struct ::AppTest;
};

#endif