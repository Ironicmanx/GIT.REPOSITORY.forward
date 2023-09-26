#ifndef DEVICEBASE_H
#define DEVICEBASE_H
#include <iostream>

using namespace std;

class devicebase
{
public:
    deviceBase();
    void setDeviceID();
     short getDeviceID();

protected:

     short deviceID;


};

#endif // DEVICEBASE_H
