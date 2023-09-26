#include "devicebase.h"


devicebase::deviceBase()
{

}

void devicebase::setDeviceID()
{

    cout<<"give Device ID"<<endl;
    cin>>deviceID;


}

short devicebase::getDeviceID()
{
    return deviceID;
}
