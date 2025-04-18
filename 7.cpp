#include <iostream>
using namespace std;

int main() {
    int *ptr = nullptr;
    cout << "Dereferencing ptr: " << *ptr << endl; // Null pointer dereference
    return 0;
}
