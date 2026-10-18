#include <iostream>

void swapValues(int& a, int& b){
    int c = a;
    a = b;
    b = c;
    return;
}

int main(){
int a = 5;
int b = 10;
swapValues(a,b);

std:: cout << a << b<<std::endl;

return 0;
}