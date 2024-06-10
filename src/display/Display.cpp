#include "Display.h"
#include "SerialDisplay.h"

auto Display::create_display(const String &type) -> Display *
{
    if (type.equalsIgnoreCase("serial")) {
        return new SerialDisplay();
    }
    return nullptr;
}
