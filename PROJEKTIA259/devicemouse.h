#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H
#include "devicebase.h"

class devicemouse:public devicebase
{
public:
    deviceMouse();

    short setPrimaryButton();

    short getPrimaryButton();


private:
    short primaryButton;


};

#endif // DEVICEMOUSE_H
