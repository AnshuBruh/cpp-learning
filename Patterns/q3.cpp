#include<iostream>
using namespace std;
int main(){
    int n = 4;

    for(char i=0; i<n; i++){
        char ch = 'A';
        for(char j=0; j<n; j++){
            cout << ch << " ";
            ch = ch + 1; //char + int --> 65 + 1 --> 66 = B <-
        }
        cout << endl;
    }
    return 0;
}