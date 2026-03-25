#include <stdio.h>

int main() {
    char ch = 'A';  // consider base address of ch as 100
    char *p = &ch;  // consider base address of p as 200
    char **q = &p;  // consider base address of q as 300
    // char **x = &ch; // this is incorrect, we'll fix it below
    char *y = &ch;  // consider base address of y as 500

    printf("%p\n", (void*)&ch);  // Print the address of ch
    printf("%p\n", (void*)p);    // Print the value of p (address of ch)
    printf("%p\n", (void*)&p);   // Print the address of p
    printf("%p\n", (void*)&q);   // Print the address of q
    printf("%p\n", (void*)q);    // Print the value of q (address of p)
    printf("%c\n", **q);         // Dereference q to print the value of ch
    printf("%c\n", *y);          // Dereference y to print the value of ch
    printf("%p\n", (void*)*q);  // Print the value stored at q (which is p)

    return 0;
}
