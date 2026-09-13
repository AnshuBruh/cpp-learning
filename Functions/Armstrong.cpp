#include<iostream>
using namespace std;
int Armstrong(int num){
    int n,r,c,arm=0;
    c=n;
    while(n<0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==n){
        cout << "It is Armstrong" << endl;
    } else{
        cout << "It is NOT Armstrong" << endl;
    }
}
int main(){
    Armstrong(121);
    return 0;
}
