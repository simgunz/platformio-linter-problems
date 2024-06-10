#include <Arduino.h>

#include "SerialDisplay.h"

void SerialDisplay::show_text(const String &text)
{
    String buffer{"The text is: "};
    buffer += text;
    Serial.println(buffer);
}
