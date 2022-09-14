#include "View.h"
#include <wiringPi.h>
#include <iostream>

using namespace std;

View::View(Led *led1, Led *led2, Led *led3, Led *led4, Led *led5)
{
    light1 = led1;
    light2 = led2;
    light3 = led3;
    light4 = led4;
    light5 = led5;
    light_state = LIGHT_OFF;
}

View::~View()
{

}

void View::Set_state(int state)
{
    light_state = state;
    if(light_state == LIGHT_OFF) Light_off();
    if(light_state != LIGHT_OFF) Light_on();
}

void View::Light_view()
{
    if(light_state == LIGHT_OFF) Light_off();
    if(light_state != LIGHT_OFF) Light_on();
}

void View::Light_on()
{
    if(light_state == LIGHT_1) light1->On();
    if(light_state == LIGHT_2) light2->On();
    if(light_state == LIGHT_3) light3->On();
    if(light_state == LIGHT_4) light4->On();
    if(light_state == LIGHT_5) light5->On();
}

void View::Light_off()
{
    if(light_state == LIGHT_OFF)
    {
        light1->Off();
        light2->Off();
        light3->Off();
        light4->Off();
        light5->Off();
    }
}