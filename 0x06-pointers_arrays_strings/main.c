#include "main.h"
#include <stdio.h>

int main(void)
{
    char str1[50] = "Hello, ";
    char str2[] = "world!";

    printf("Before concatenation: %s\n", str1);
    printf("Result of comparison: %d\n", _strcmp(str1, str2));
    printf("After concatenation: %s\n", str1);

    return 0;
}

