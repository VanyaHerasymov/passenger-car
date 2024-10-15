#include "passenger_car.h"

passenger_car::passenger_car()
{
    int Volume_fuel_tank = 0;
    int Rate_Of_Gasoline_Solution = 0;
    string colour = "";
    string brand = "";
}

passenger_car::passenger_car(int Volume_fuel, int Rate_of_gasoline, string col, string brand)
{
    int Volume_fuel_tank = Volume_fuel;
    int Rate_Of_Gasoline_Solution = Rate_of_gasoline;
    string colour = col;
    this->brand = brand;
}

void passenger_car::SetVolume_fuel_tank(int Volume_fuel) const
{
    Volume_fuel_tank = Volume_fuel;
}

int passenger_car::GetVolume_fuel_tank()
{
    return Volume_fuel_tank;
}

void passenger_car::SetRate_Of_Gasoline_Solution(int Volume_fuel_tank) const
{
    int Rate_Of_Gasoline_Solution = Volume_fuel_tank;
}

int passenger_car::GetRate_Of_Gasoline_Solution()
{
    return Rate_Of_Gasoline_Solution;
}

void passenger_car::SetColour(string col) const
{
    string colour = col;
}

int passenger_car::Getcolour()
{
    return colour;
}

void passenger_car::SetBrand(string brand) const
{
    this->brand = brand;
}

int passenger_car::GetBrand()
{
    return brand;
}

int passenger_car::max_distance()
{
    return Volume_fuel_tank/Rate_Of_Gasoline_Solution;
}
