#include <stdio.h>

int main()
{
    int a = 10;


    // 2 != 10
    if (a <= 10)
    {
        if (a < 5)
        {
            printf("a is equal or grater then 10\n");
        }
        else
        {
            printf("a is grater then 5\n");
        }
    }
    else
    {

        printf("a smaller then 10\n");
    }

    return 0;
}