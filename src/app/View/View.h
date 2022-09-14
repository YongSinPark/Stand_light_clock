#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Led.h"
#include "Light_state.h"

class View
{
private:
    int light_state;
    Led* light1; 
    Led* light2; 
    Led* light3; 
    Led* light4; 
    Led* light5; 

public:
    View(Led *led1, Led *led2, Led *led3, Led *led4, Led *led5);
    virtual ~View();
    void Set_state(int state);
    void Light_view();
    void Light_off();
    void Light_on();
};

#endif