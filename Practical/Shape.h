#pragma once
#include<iostream>
#include<string>
using namespace std;
class Shape
{
	private:

	string name;
	int angles;

    public:

	void set_name(string name);
	string get_name();
	void set_angles(int angles);
	int get_angles();

	Shape();
   ~Shape();
    
};

