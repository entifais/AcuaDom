#ifndef _RELAYS_H
#define _RELAYS_H
class relays
{
private:
    
public:
    void turnOnligths();
    void turnOffligths();
    void turnOnFilters();
    void turnOffFilters();
    void turnOnThermostat();
    void turnOffThermostat();
    void turnOnAll();
    void turnOffAll();
    relays();
    ~relays();
};



#endif