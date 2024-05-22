#include <stdio.h>

int main()
{
    int n = 20;
    int a = 10;

      // not true
    if (n >= a)
    {
        printf("n=%i is greater then a=%i\n",n, a);
    }
    else
    {
        
        printf("n=%i is not greater then a=%i\n",n, a);
    }

    return 0;
}