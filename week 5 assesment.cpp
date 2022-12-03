#include <iostream>
#include <string>
#include <stdio.h>smn
using namespace std;

class shape
{
public:
	int width;
	int height;

	int area()
	{
		return width * height;
	}
};

class triangle : public shape
{
public:

	int area()
	{
		return (height * width) / 2;
	}
};

class rectangle : public shape
{
public:

	int area()
	{
		return height * width;
	}
};


int main()
{
	class triangle TRI;
	class rectangle REC;

	TRI.height = 3;
	TRI.width = 4;

	REC.height = 3;
	REC.width = 4;

	cout << "Triangle area is: " << TRI.area() << "\n";
	cout << "Rectangle area is: " << REC.area();
}

