#include <iostream>
#include <math.h>

using namespace std;

int main(){
    for(int i = 0; i < 100; i++){
        for(int k = 2; k * k <= i; k++){
            if(i % k == 0){
                break;
            }
            if(k + 1 > sqrt(i)){
                cout << i << endl;
            }
        }
    }
}