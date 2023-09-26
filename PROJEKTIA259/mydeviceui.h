#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicebase.h"
#include "devicemouse.h"



class mydeviceui
{
public:
    mydeviceui();
    ~mydeviceui();
    void uiShowMenu();



private:

    devicemouse  *pdevicemouse;

};

#endif // MYDEVICEUI_H
