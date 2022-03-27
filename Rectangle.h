#pragma once
class Rectangle
{
private:
	unsigned int height; //висота
	unsigned int width;	//ширина
public:
	unsigned int getHeight() const { return height; }
	unsigned int getWidth() const { return width; }

	void setHeight(unsigned int);
	void setWidth(unsigned int);

	int getSquare() const { return (height * width); }
	int getPrimeter() const { return (2 * (height + width)); }

	bool Init(unsigned int height, unsigned int width);
	void Read();
	void Display() const;
};

