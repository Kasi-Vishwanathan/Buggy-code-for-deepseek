#include <stdio.h>

int main() {
    int x = 10;
    if (x = 5) { // Logical error: using assignment instead of comparison
        printf("x is 5\n");
    } else {
        printf("x is not 5\n");
    }
    return 0;
}
