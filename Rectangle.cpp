#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::setHeight(unsigned int value)
{
	height = value;
}

void Rectangle::setWidth(unsigned int value)
{
	width = value;
}

bool Rectangle::Init(unsigned int height, unsigned int width)
{
	setHeight(height);
	setWidth(width);

	return getSquare() && getPrimeter();

}

void Rectangle::Read()
{
	unsigned int height;
	unsigned int width;

	cout << "Enter Height = "; cin >> height;

	do
	{
		cout << "Enter Width = "; cin >> width;
	} while (!Init(height, width));
}

void Rectangle::Display() const
{
	cout << "Height = " << height << endl;
	cout << "Width = " << width << endl;
	cout << "Square = " << getSquare() << endl;
	cout << "Primeter = " << getPrimeter() << endl;
}