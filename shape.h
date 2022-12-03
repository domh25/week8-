#pragma once
class shape
{
	public:
		int width;
		int height;
};

class triangle : public shape 
{
	public:
		int width;
		int height;

		void area(int width, int height);
};

