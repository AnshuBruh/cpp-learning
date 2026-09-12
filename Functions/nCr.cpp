#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr); 
}
int main(){
    int n=8, r=4;
    cout << nCr(n, r) << endl;
    return 0;
}

/*
    8C4 = 8!/4!*(8-4)!
    8!/4! * 4!
    8 x 7 x 6 x 5 x 4! / 4! * 4!
    8 x 7 x 6 x 5 x / 4 x 3 x 2!
    70
*/