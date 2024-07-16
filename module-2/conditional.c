#include <stdio.h>

int main()
{
    int a = 6;
    int b = 10;

    a = a / b;
    a /= b;

    printf("%i\n", a);
    

    return 0;
}