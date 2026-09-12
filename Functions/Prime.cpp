#include <iostream>
using namespace std;

int Prime(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        return 1;   // Prime
    } else {
        return 0;   // Not Prime
    }
}
int main() {
    if (Prime(7) == 1) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}