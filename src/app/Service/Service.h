#ifndef SERVICE_H
#define SERVICE_H

#include <string>
#include <iostream>
#include "View.h"

class Service
{
private:
    int light_state;
    View* view;

public:
    Service(View* viewer);
    virtual ~Service();

    void Update_state(std::string str_state);


};

#endif