#ifndef APP_H
#define APP_H

#include "display/Display.h"

class App {
public:
    explicit App(Display *pDisplay);
    void update_text();

private:
    Display *pDisplay;
};

#endif // APP_H
