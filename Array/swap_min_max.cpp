#include<iostream>
using namespace std;
void SwapMinMax(int arr[], int sz){
    int MinIndex = 0;
    int MaxIndex = 0;
    for (int i = 1; i < sz; i++)
    {
       if(arr[i] < arr[MinIndex])
       MinIndex = i;
       if(arr[i] > arr[MaxIndex])
       MaxIndex = i;
    }
        swap(arr[MinIndex], arr[MaxIndex]);
    }
    
int main(){
int arr[] = {23, 45, 69, 1, 56};
int sz = 5;
SwapMinMax(arr, 5);
for(int i=0; i<sz; i++){
    cout << arr[i] << " ";
}
cout << endl;
    return 0;
}