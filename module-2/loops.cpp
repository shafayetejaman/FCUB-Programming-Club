#include <stdio.h>

int main()
{
    
    // int a = 1;
    // while (a <= 10)
    // {
    //     printf("%i is equal to 10\n", a);
    //     a++;// 9+1=10
    // }
                        //  false
    for (int a = 1, i = 9; a <= 10 && i < 10; a++, i++)
    {
        printf("%i is equal to 10\n", a);
    }


    return 0;
}