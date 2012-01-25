// Kevin Mangan
// Rectangle.h

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"




class Rectangle : public Polygon {

	public:
		Rectangle(int basee, int heightt) :Polygon(basee, heightt){};
		
		virtual int perimeter();
		virtual int area();
		virtual void print();
		virtual void draw();
};





#endif
