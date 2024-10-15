#include "fancy_car.h"

fancy_car::fancy_car()
{
    int Vantage_point = 0;

}

fancy_car::fancy_car(int vantage_point)
{
    this->vantage_point = vantage_point;
}

int fancy_car::GetVantage_point()
{
    return vantage_point;
}

void fancy_car::SetVantage_point(int vantage_point) const
{
    this->vantage_point = vantage_point;
}
