#include <stdio.h>

int divide_by_zero() {
    int x = 10;
    int y = 0;
    return x / y; 
}
int main() {
divide_by_zero();
    return 0;
}
