#include <stdio.h>
// #include <cs50.h>

int main(void)
{
    /*
    reference: &
    dereference: *

    int n = 50;
    int *p = &n; // reference the address of n and store it in p, note that int * 
    // is technically the data type, a pointer (8 bytes)
    int value = *p; // dereference the value of p (i.e. 50)
    */

    /*
    in cs50 library, there is typedef char *string, which renames the pointer of a charcter
    (the first character in the string) to the data type string
    the variable for a string (i.e. s), is a pointer to the first char and the string
    terminates when we reach the null character \0
    */

    char *s = "HI!";

    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);


    /*
    printf("%p\n", s);
    Output: 0x10001c4e4

    printf("%s\n", s);
    Output: HI!

    printf("%c\n", *s);
    Output: H
    */
}