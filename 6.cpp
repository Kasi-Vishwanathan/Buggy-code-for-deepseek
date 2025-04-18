#include <iostream>
using namespace std;

int main() {
    int n = 1000000;
    int *arr = new int[n * 1000]; // Space complexity issue: very large array allocation
    for (int i = 0; i < n * 1000; ++i) {
        arr[i] = i;
    }
    cout << "Array filled!" << endl;
    delete[] arr;
    return 0;
}
