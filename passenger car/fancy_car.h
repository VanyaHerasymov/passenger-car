#pragma once
#include "passenger_car.h"
class fancy_car :protected passenger_car
{
	int vantage_point;
public:
	fancy_car();
	fancy_car(int vantage_point);

	int GetVantage_point();
	void SetVantage_point(int vantage_point)const;


};

