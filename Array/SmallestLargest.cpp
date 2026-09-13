#include<iostream>
using namespace std;
int Smallest(int num[], int n){
    int smallest = INT_MAX;
    
    for(int i=0; i<n; i++){
        if(num[i] < smallest){
            smallest = num[i];
        }
    }
    return smallest;
}
int Largest(int num[], int n){
    int Largest = INT_MIN;

    for(int i=0; i<n; i++){
        if(num[i] > Largest){
            Largest = num[i];
        }
    }
    return Largest;
}
int main(){
    int num[] = {23, 54, 8, 1, -2, 12};
    cout << "Smallest = " << Smallest(num, 6) << endl;
    cout << "Largest = " << Largest(num, 6) << endl;
    return 0;
}

