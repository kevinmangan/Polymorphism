// Kevin Mangan
// Source file
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int Rectangle::perimeter(){

	return(2*height+2*base);

}

int Rectangle::area(){

	return(base*height);

}


int Triangle::perimeter(){

	return(2*height+base);

}


int Triangle::area(){

	return(base/2*height);

}

void Rectangle::print(){

	cout << "\n\tThe Perimeter is: " << perimeter() << endl;
	cout << "\n\tThe area is: " << area() << endl;

}

void Triangle::print(){

        cout << "\n\tThe Perimeter is: " << perimeter() << endl;
        cout << "\n\tThe area is: " << area() << endl;

}

void Rectangle::draw(){
        	
	for ( int row = 1; row <= height; row++ ) {
        	for ( int col = 1; col <= base; col++ ) {
                            if ( (row == 1) || (row == base) || (col == 1) || (col == height) )
                                                cout << "*";
                            else
                                                cout << " ";
		}	
	cout << endl;
	}
}


void Triangle::draw(){

	 for ( int row = 1; row <= height; row++ ) {
                for ( int col = 1; col <= base; col++ ) {
                            if ( (row == 1) || (row == base) || (col == 1) || (col == height) )
                                                cout << "*";
                            else
                                                cout << " ";

		}
	cout << endl;
	}	
}
