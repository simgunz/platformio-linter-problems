#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>

class Display {
public:
    static auto create_display(const String &type) -> Display *;
    virtual void show_text(const String &text) = 0;
};

#endif // DISPLAY_H
