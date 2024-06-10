#ifndef SERIALDISPLAY_H
#define SERIALDISPLAY_H

#include "Display.h"
#include <Arduino.h>

class SerialDisplay : public Display {
public:
    void show_text(const String &text) override;
};
#endif // SERIALDISPLAY_H
