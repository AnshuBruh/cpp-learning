#include<iostream>
using namespace std;
void AddTen(int num[], int size){
    for(int i=0; i<size; i++){
        num[i] = num[i] + 10;
    }
}

int main(){
    int num[] = {10, 20, 30, 40, 50};
    AddTen(num, 5);

    for(int i=0; i<5; i++){
        cout << num[i] << " ";
    }
    return 0;
}