#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter 1st Number : ";
    cin >> num1;
    cout << "Enter 2nd Number : ";
    cin >> num2;

    if(num1 > num2){
    cout << "Greater : " << num1;
}
else if(num2 > num1){
    cout << "Greater : " << num2;
}
else{
    cout << "Both numbers are equal";
}
    return 0;
}


