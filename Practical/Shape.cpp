#include "Shape.h"
#include<iostream>
#include<string>
using namespace std;
Shape::Shape()
{

}
Shape::~Shape()
{

}
void Shape::set_name(string name)
{
	this->name = name;
}
string Shape::get_name()
{
	return name;
}
void Shape::set_angles(int angles)
{
	this->angles = angles;
}
int Shape::get_angles()
{
	return angles;
}

