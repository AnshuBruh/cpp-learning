#include<iostream>
using namespace std;
int Fibonacci(int num){
    int a=0, b=1;
    for(int i=0; i<num; i++){
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
        cout << endl;
    }
}
int main(){
    cout << Fibonacci(6);
    return 0;
}