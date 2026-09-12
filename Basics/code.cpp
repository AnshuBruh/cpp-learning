#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter number : ";
    cin >> n;

    for(int i=1; i<=n; i++ ){
        cout << i << "\t" ;
    }
    return 0;
}


//g++ q1.cpp && ./a.out
// cin >> num;