// Kevin Mangan
// Triangle.h

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygon.h"



class Triangle :public Polygon {

        public:
		Triangle(int basee, int heightt) :Polygon(basee, heightt){};
                virtual int perimeter();
                virtual int area();
		virtual void print();
		virtual void draw();
};





#endif

