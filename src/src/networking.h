#ifndef _NETWORKING_H
#define _NETWORKING_H
#include "constants_defines.h"

class networking{
private:

public:
	networking();
	~networking();
	void webserver();
	bool wifimanager();
	String getTime();
};
#endif