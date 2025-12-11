#include <Application.h>

using namespace std;
using namespace bobcat;

Application::Application(){
    // Initialize your app here
    window = new Window(100, 100, 400, 400, "Programming Project");

    window->show();
}

// Define other functions here