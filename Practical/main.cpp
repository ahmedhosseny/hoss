#include<iostream>
#include"Circle.h"
#include"Square.h"
#include<string>
using namespace std;
int main()
{
	cout << "Project" << endl;
	Circle c;
	Square s;
	string name;
	int angles;
	double radius , length, width;
	//***************************************
	cout << "Enter attribute of Circle:" << endl;
	cout << "Name:";
	cin >> name;
	c.set_name(name);
	cout << "Angles:";
	cin >> angles;
	c.set_angles(angles);
	cout << "Radius:";
	cin >> radius;
	c.set_radius(radius);
	cout << endl;
	//***************************************
	cout << "Showing Attributes of Circle" << endl;
	cout << "Name:" << c.get_name() << endl;
	cout << "Angles:" << c.get_angles() << endl;
	cout << "Radius:" << c.get_radius() << endl;
	cout << "Area:" << c.get_area() << endl;
	cout << endl;
	//***************************************
	cout << "Enter attribute of Square:" << endl;
	cout << "Name:";
	cin >> name;
	s.set_name(name);
	cout << "Angles:";
	cin >> angles;
	s.set_angles(angles);
	cout << "Length:";
	cin >> length;
	s.set_length(length);
	cout << "Width:";
	cin >> width;
	s.set_width(width);
	cout << endl;
	//******************************************
	cout << "Showing Attributes of Square" << endl;
	cout << "Name:" << s.get_name() << endl;
	cout << "Angles:" << s.get_angles() << endl;
	cout << "Length:" << s.get_length() << endl;
	cout << "Width:" << s.get_width() << endl;
	cout << "Area:" << s.get_area() << endl;
	cout<<"******************"<<endl;
	cout<<"hosseny"<<endl;
	cout<<"loay"<<endl;
}
