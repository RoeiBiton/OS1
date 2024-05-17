#include <stdio.h>

 void recursive_function() {
    recursive_function(); 
}

int main() {
    recursive_function();
    return 0;
}
