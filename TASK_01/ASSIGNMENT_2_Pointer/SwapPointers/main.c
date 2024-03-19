#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare and initialize three integer variables: x, y, and z
    int x = 8, y = 9, z = 10;

    // Declare and assign addresses of x, y, and z to three integer pointers: p, q, and r
    int *p = &x , *q = &y, *r = &z;

    // Print initial values of x, y, and z
    printf("Values:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    // Print addresses stored in pointers p, q, and r
    printf("Addresses:\n");
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("r = %p\n", r);

    // Print values pointed to by pointers p, q, and r
    printf("Pointed values:\n");
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);

    // Swap pointers p and q, and assign address of z to pointer r
    int* temp = r;
    r = p;
    p = q;
    q = temp;

    // Print values after swapping pointers
    printf("Values after swapping pointers:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("r = %p\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);

    return 0;
}
