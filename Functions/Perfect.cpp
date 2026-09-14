#include<iostream>
using namespace std;
int Perfect(int num){
    int sum=0;
    for(int i=1; i<num; i++){
        if(num%i == 0){
            sum = sum + i;
        }
    }
    if(sum == num){
        return 1; // Perfect
    } else{
        return 0; // Not Perfect
    }
}

int main(){
    if(Perfect(24) == 1){
        cout << "Perfect" << endl;
    } else{
        cout << "Not Perfect" << endl;
    }
    return 0;
}

 