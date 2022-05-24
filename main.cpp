// Author: AB


#include <iostream>
#include "calc.hpp"
#include "rect.hpp"

int main() {

Calculator cal1;
cal1.menu();
cal1.driver();
return 0;

Rectangle rect;
rect.perimeter(2,3);
rect.area(2,3);

}