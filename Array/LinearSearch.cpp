/* What is it?
Linear search means:
Check each element one by one until you find the value you're looking for. */

#include<iostream>
using namespace std;
int LinearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){ //Found the value
            return i;
        }
    }
    return -1; //Not Found the value
}
int main(){
    int target = 50;
    int arr[] = {45, 23, 67, 69, 12, 98, 15};
    int size = 7;
    cout << LinearSearch(arr, 7, target) << endl;
    return 0;
}

/*That's why it's called linear — we move through the array from beginning to end.*/