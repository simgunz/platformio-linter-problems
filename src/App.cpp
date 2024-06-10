#include "App.h"

#include <Arduino.h>

App::App(Display *pDisplay)
    : pDisplay(pDisplay)
{
}

void App::update_text()
{
    pDisplay->show_text("Hello");
}
