#include <iostream>
using namespace std;

int main() {
    int arr[] = {23, 45, 69, 1, 56};
    int sz = sizeof(arr) / sizeof(arr[0]);

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < sz; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    cout << "Minimum = " << minVal << endl;
    cout << "Maximum = " << maxVal << endl;
    cout << "Sum     = " << minVal + maxVal << endl;

    return 0;
}