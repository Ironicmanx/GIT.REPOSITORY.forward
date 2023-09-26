#include "devicemouse.h"

devicemouse::deviceMouse()
{
    cout<<"constructor"<<endl;
}

short devicemouse::setPrimaryButton()
{
    cout<<"give Mouse Primary Button value"<<endl;
    cin>>primaryButton;

}

short devicemouse::getPrimaryButton()
{
    return primaryButton;
}
