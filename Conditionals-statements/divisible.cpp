#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter 1st Number : ";
    cin >> num;
    
    if (num%3==0 && num%5==0){
        cout << "Divisible By 3 And 5";
    } else{
        cout << "Not Divisible By 3 And 5";
    }
    return 0;
}
