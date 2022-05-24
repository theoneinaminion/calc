#include <iostream>
#include "rect.hpp"
using namespace std;

void Rectangle::perimeter(int a,int b){

int res = 2*(a+b);
cout << "Perimeter of rect is"<<res<<endl;

}

void Rectangle::area(int a,int b){

int res = a*b;
cout << "Area of rect is"<<res<<endl;

}