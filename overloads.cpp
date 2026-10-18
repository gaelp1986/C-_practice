#include <iostream>

int area(int side){
return side * side;
}
int area(int width, int height){
    return width * height;
}

double area(double radius){
    return 3.14159 * radius * radius;
}

int main(){
    int x = area(5);
    int y = area(5,3);
    double z = area(5.5);

std::cout<<x<<" "<<y<<" "<<z<<std::endl;
}