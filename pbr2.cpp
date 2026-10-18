#include <iostream>
#include <string>

int sumOfSquares(int a, int b){
   int x = (a*a + b * b);

   return x;
}

void clampToRange( int& value, int low, int high){

if(value < low){
    value = low;
}
else if (value > high)
{
    value = high;
}

}

void printReport(const std::string& label, int value){
    std::cout << label <<" "<<value<<std::endl;
    return;
}

int main(){
int score = 150;

sumOfSquares(0,100);
clampToRange(score,0,100);
printReport("score",score);
return 0;
}
