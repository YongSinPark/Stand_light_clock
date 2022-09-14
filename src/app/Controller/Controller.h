#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Service.h"
#include <string>

enum {BTN_RESET, BTN_FIRST, BTN_SECOND, BTN_THIRD, BTN_FOURTH, BTN_FIVTH};
class Controller
{
private:
    int light_state;
    Service* service;

public:
    Controller(Service* service);
    virtual ~Controller();
    void Update_event();
};

#endif