#include <stdio.h>

int main()
{
    int n = 3;

    do
    {
        printf("n : %i\n", n);
        n--;
    }
    while (n == 4);


    while (n == 4)
    {
        printf("n : %i\n", n);
        n--;
    }


}