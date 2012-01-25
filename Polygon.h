// Kevin Mangan
// Polygon.h

#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
using namespace std;

class Polygon{

	public:
		
		Polygon(int basee, int heightt){
			base = basee;
			height = heightt;
		}

		// Virtual functions
		virtual int perimeter(){};
		virtual int area(){};
		virtual void print(){};		
		virtual void draw(){};

	protected:

		int base;
		int height;


};




#endif
