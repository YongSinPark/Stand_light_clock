#include "Service.h"
#include <iostream>

using namespace std;

Service::Service(View* viewer)
{
    light_state = LIGHT_OFF;
}

Service::~Service()
{

}

void Service::Update_state(std::string str_state)
{
    if(light_state > LIGHT_5) 
    {
        light_state = LIGHT_OFF;
    }
    if(str_state == "mode_button") view->Set_state(light_state++);
    /*
    switch (light_state)
    {
    case LIGHT_OFF:
        if(str_state == "mode_button") {
            light_state = LIGHT_1;
            view->Set_state(light_state);
        }
        break;
    case LIGHT_1:
        if(str_state == "mode_button") {
            light_state = LIGHT_2;
            view->Set_state(light_state);
        }
        break;
    case LIGHT_2:
        if(str_state == "mode_button") {
            light_state = LIGHT_3;
            view->Set_state(light_state);
        }
        break;
    case LIGHT_3:
        if(str_state == "mode_button") {
            light_state = LIGHT_4;
            view->Set_state(light_state);
        }
        break;
    case LIGHT_4:
        if(str_state == "mode_button") {
            light_state = LIGHT_5;
            view->Set_state(light_state);
        }
        break;
    case LIGHT_5:
        if(str_state == "mode_button") {
            light_state = LIGHT_OFF;
            view->Set_state(light_state);
        }
        break;
    }
    */
}