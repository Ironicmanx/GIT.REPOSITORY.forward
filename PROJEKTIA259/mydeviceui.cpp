#include "mydeviceui.h"

mydeviceui::mydeviceui()
{
    pdevicemouse = new devicemouse;
}

mydeviceui::~mydeviceui()
{
    delete pdevicemouse;
    pdevicemouse = nullptr;

}

void mydeviceui::uiShowMenu()
{
    short valinta;
    cout<<"DEVICE MENU"<<endl;
    cout<<"============"<<endl;
        cout<<"1 = set mouse information"<<endl;

    cout<<"choose"<<endl;
        cin>>valinta;

    cout<<"you chose"<<valinta<<endl;
}
