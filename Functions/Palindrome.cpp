#include<iostream>
using namespace std;
void Palindrome(int num){
    int r,c,pal=0;
    c=num;
    while(num > 0){
        r = num % 10;
        pal = r + (pal * 10);
        num = num / 10;
    }
    if(c == pal){
        cout << "It is Palindrome" << endl;
    } else{
        cout << "It is NOT Palindrome" << endl;
    }
}
int main(){
    Palindrome(121);
    return 0;
}