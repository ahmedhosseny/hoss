#include "Circle.h"
#include<iostream>
using namespace std;
Circle::Circle()
{

}
Circle::~Circle()
{

}
void Circle::set_radius(double radius)
{
	this->radius = radius;
}
double Circle::get_radius()
{
	return radius;
}
double Circle::get_area()
{
	return 3.14 * pow(radius, 2);
}

