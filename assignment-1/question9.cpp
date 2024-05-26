#include <stdio.h>

int main()
{

    int t;
    scanf("%i", &t);

    while(t--)
    {

        printf("%i\n", t);
        int n;
        scanf("%i", &n);

        if (n <= 10)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }




    return 0;
}