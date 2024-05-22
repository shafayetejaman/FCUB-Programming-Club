#include <stdio.h>

int main()
{
    int n = 50;
    int a = 30;

    //        and
    if (n > a || n < a && n == a)
    {
        printf("n=%i is greater then a=%i\n", n, a);
    }
    else if (n == a)
    {
        printf("n=%i is equal to a=%i\n", n, a);
    }
    else if (n <= a)
    {
        printf("n is smaller then a\n");
    }
    else
    {
        printf("none of the condition are valid\n");
    }

    return 0;
}