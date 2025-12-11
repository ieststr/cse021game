#include <Application.h>

using namespace std;
using namespace bobcat;

Application::Application(){
    // Initialize your app here
    window = new Window(100, 100, 400, 400, "six-le game project");
    mainMenu = new bobcat::Menu();
    RulesWindowMenu = new bobcat::MenuItem("File/Rules");
    leaderboardWindowMenu = new bobcat::MenuItem("File/Leaderboard");
    mainMenu->addItem(RulesWindowMenu);
    mainMenu->addItem(leaderboardWindowMenu);

    Title = new bobcat::TextBox(60, 40, 200, 30, "~S I X L E~");
    Title->labelcolor(FL_DARK_GREEN);
    Title->labelsize(28);
    Title->labelfont(FL_BOLD);
    window->show();
}

// Define other functions here