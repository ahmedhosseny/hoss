#pragma once
#include"Shape.h"
#include<iostream>
using namespace std;
class Square : public Shape
{
	double length ;
	double width;

public:

	void set_length(double length);
	double get_length();
	void set_width(double width);
	double get_width();

	double get_area();

	Square();
	~Square();

};

