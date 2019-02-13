#include <iostream>
#include <math.h>

using namespace std;

//needed internet :(
int main(){
    for (int i = 3; i<100; i++){
        for (int k = 2; k <= i; k++){
            if (i % k == 0){
                break;
            }    
            else if (i == k + 1){
                cout << i << endl;
            }      
        }  
    }
}