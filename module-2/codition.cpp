#include <stdio.h>

int main()
{
    int n = 20;
    int a = 30;

    // not true
    if (n < a)
    {
        printf("n=%i is greater then a=%i\n", n, a);
    }
    else if (n == a)
    {

        printf("n=%i is equal to a=%i\n", n, a);
    }

    return 0;
}