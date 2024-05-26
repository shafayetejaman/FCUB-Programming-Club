#include <stdio.h>

int main()
{

    int t;
    scanf("%i", &t);

    for (int i = 0; i < t;i++)
    {
        int n;
        scanf("%i", &n);


        if (n <= 10)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }




    return 0;
}