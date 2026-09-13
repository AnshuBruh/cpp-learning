#include<iostream>
using namespace std;
void AllPrime(int num){
    for(int i=2; i<=num; i++){
        int count = 0;
        for(int j=1; j<=i; j++){
            if (i%j == 0){
                count++;
            }

        }
        if(count == 2){
            cout << i << " ";
        }
    }
}
int main(){
    AllPrime(20);
    return 0;
}
