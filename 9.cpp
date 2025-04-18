#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 10) {
        cout << i << " ";
        // Forgot to increment i, resulting in an infinite loop
    }
    return 0;
}
