#include<iostream>
using namespace std;
int SumArray(int arr[], int sz){
    int sum=0;
    for(int i=0; i<sz; i++){
        sum += arr[i];
    }
    return sum;
}

int ProductArray(int arr[], int sz){
    int product = 1;
    for(int i=0; i<sz; i++){
        product *= arr[i];
    }
    return product;
}

int main(){
int arr[] = {1, 2, 3, 4, 5};
int sz = 5;
cout << "Sum is = " << SumArray(arr, 5) << endl;
cout << "Product is = " << ProductArray(arr, 5) << endl;
    return 0;
}