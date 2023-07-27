#include "main.h"
#include <stdio.h>

int main(void)
{
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    int n = 6;

    printf("Before concatenation: %s\n", str1);
    _strncat(str1, str2, n);
    printf("After concatenation: %s\n", str1);

    return 0;
}

