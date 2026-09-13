#include <iostream>
using namespace std;
void Armstrong(int num) {
    int n = num;
    int r, c = num, arm = 0;

    while (n > 0) {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }

    if (c == arm) {
        cout << "It is Armstrong" << endl;
    } else {
        cout << "It is NOT Armstrong" << endl;
    }
}
int main() {
    Armstrong(153);
    return 0;
}