#include "main.h"
#include <stdio.h>

/**
 * main - tests the infinite_add function
 *
 * Return: Always 0.
 */
int main(void)
{
    char *n1 = "123456789";
    char *n2 = "1";
    char r[100];
    char r_small[3];
    char *res;

    /* Test 1: Simple addition */
    res = infinite_add(n1, n2, r, 100);
    if (res == 0)
        printf("Test 1 Failed: Buffer should be big enough\n");
    else
        printf("Test 1: %s + %s = %s\n", n1, n2, res);

    /* Test 2: Huge carry (99 + 1) */
    res = infinite_add("99", "1", r, 100);
    printf("Test 2: 99 + 1 = %s\n", res);

    /* Test 3: Different lengths */
    res = infinite_add("12345678901234567890", "1", r, 100);
    printf("Test 3: BigNum + 1 = %s\n", res);

    /* Test 4: Buffer too small (Should return 0) */
    res = infinite_add("99", "1", r_small, 3);
    if (res == 0)
        printf("Test 4: Buffer too small check PASSED (Returned 0)\n");
    else
        printf("Test 4: Buffer too small check FAILED (Returned %s)\n", res);

    return (0);
}
