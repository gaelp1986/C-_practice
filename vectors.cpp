#include <iostream>
#include <vector>
#include <optional>
 int findMax(const std::vector<int>& v){
 int Max = v[0];

for(int n: v){

    if(n > Max){
        Max =n;
    }

    }
return Max;
}

int main (){
    std::vector<int> a{3,7,9,4};
    std::vector<int> b{-5,-2,-9};

    std::cout<<findMax(a)<<" "<<findMax(b)<<std::endl;

    return 0;
}
