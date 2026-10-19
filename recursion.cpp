#include <iostream>

int sumTo(int n){
    if (n<=0){
        return 0;
    }
return n + sumTo(n-1);
}

int main(){
   int x = sumTo(3);
   int y = sumTo(0);
   int z = sumTo(1);
   int w = sumTo(4);
   int a = sumTo(-1);
   std::cout<<x<<std::endl;
   std::cout<<y<<std::endl;
   std::cout<<z<<std::endl;
   std::cout<<w<<std::endl;
   std::cout<<a<<std::endl;

    return 0;
}