#include <iostream>
using namespace std;

int main(){

    int nums []{1,2,3,4,5,6,7,8,9};

    int MaxNum = sizeof(nums)/sizeof(nums[0]);
    int Max = 0;
        for (int i = 0;i<MaxNum;i++){
    if(nums[i]>Max){
        Max = nums[i];
    }
}
cout<<Max<<endl;
return 0;
}