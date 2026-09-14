#include<iostream>
#include<climits>
using namespace std;
//SMALLEST
int Smallest(int num[], int n){
    int smallest = INT_MAX;
    
    for(int i=0; i<n; i++){
        if(num[i] < smallest){
            smallest = num[i];
        }
    }
    return smallest;
}
//LARGEST
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

/*

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num[] = {23, 54, 8, 1, -2, 12};

    int smallest = num[0];
    int largest = num[0];

    for (int i = 1; i < 6; i++) {
        smallest = min(smallest, num[i]);
        largest = max(largest, num[i]);
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;
}

*/