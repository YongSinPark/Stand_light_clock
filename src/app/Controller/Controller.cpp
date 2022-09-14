#include "Controller.h"

Controller::Controller(Service* serv)
{
    service = serv;
    light_state = LIGHT_OFF;
}

Controller::~Controller()
{

}

void Controller::Update_event()
{
    service->Update_state("mode_button");
}