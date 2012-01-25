// Kevin Mangan
// driver.cpp

#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main(){

	Polygon* shapes[3];
	char choice;
	int base, height;
	int index = 0;

	for(int i = 0; i<3; i++){

		cout << "\n\tWould you like to make a Rectangle or Triangle? (r/t) ";
		cin >> choice;
		cout << "\n\tWhat should the base length be? ";
		cin >> base;
		cout << "\n\tWhat should the height be? ";
		cin >> height;

		if(choice == 'r')
			shapes[i] = new Rectangle(base, height);
		else{
			shapes[i] = new Triangle(base, height);
		}

	}//end for


	
		cout << "\n\tWhich shape would you like to see data for? ";
		cin >> index;
		shapes[index-1]->print();

		cout<< "\n\tWhich shape would you like to draw? ";
                cin >> index;
		shapes[index-1]->draw();

}
