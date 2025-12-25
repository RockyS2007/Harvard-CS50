#include <stdio.h>

int main(void) {
    /*
    Using pointers
    */
    int a = 25;
    int *pa = &a;
    
    // dereferencing a pointer gives the the value
    int value = *pa;
    printf("%i\n", value);

    // changes the value at that memory location, thus changing the value of a
    *pa = 30;
    printf("%i\n", a);
}