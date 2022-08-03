#pragma once
#include"Shape.h"
#include<iostream>
using namespace std;
class Circle : public Shape
{
	double radius;

	public:
    
	void set_radius(double radius);
	double get_radius();
    
	double get_area();

	Circle();
	~Circle();

};

