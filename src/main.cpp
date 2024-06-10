#include <App.h>
#include <Arduino.h>
#include <display/Display.h>

const int CLOCK_TICK_DURATION_MS = 1000;

App *app;

// cppcheck-suppress unusedFunction
void setup()
{
    Serial.begin(115200);
    Display *display = Display::create_display(DISPLAY_TYPE);
    app = new App(display);
}

// cppcheck-suppress unusedFunction
void loop()
{
    app->update_text();
    delay(CLOCK_TICK_DURATION_MS);
}
