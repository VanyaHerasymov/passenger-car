#pragma once
#include <string>
using namespace std;
class passenger_car
{
protected:
	int Volume_fuel_tank;
	int Rate_Of_Gasoline_Solution;
	string colour;
	string brand;
public:
	passenger_car();
	passenger_car(int Volume_fuel, int Raate_of_gasoline, string col, string brand);

	void SetVolume_fuel_tank(int Volume_fuel)const;
	int GetVolume_fuel_tank();

	void SetRate_Of_Gasoline_Solution(int Volume_fuel_tank)const;
	int GetRate_Of_Gasoline_Solution();

	void SetColour(string colour)const;
	int Getcolour();
	
	void SetBrand(string brand)const;
	int GetBrand();

	int max_distance();
};

