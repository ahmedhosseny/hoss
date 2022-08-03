#include "Square.h"
#include<iostream>
using namespace std;
Square::Square()
{

}
Square::~Square()
{

}
void Square::set_length(double length)
{
	this->length = length;
}
double Square::get_length()
{
	return length;
}
void Square::set_width(double width)
{
	this->width = width;
}
double Square::get_width()
{
	return width;
}
double Square::get_area()
{
	return (length*width);
}
