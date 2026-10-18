#include <iostream>
using namespace std;


int maxOfTwo(int a, int b);

int main(){
int x = 5;
int y = 6;

int z = maxOfTwo(x,y);


(cout<<x), (cout<<y<<endl),(cout<<z<<endl);

return 0;
}
int maxOfTwo( int a, int b){
    if ( a > b){
        return a;
    }
    else{
        return b;
    }

    }
