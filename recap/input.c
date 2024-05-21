#include <stdio.h>

int main()
{
    int a, b;

    scanf("%i", &a);
    scanf("%i", &b);
          //10.0000      // 10
    float c = (float)a;
    float d = (float)b;

    printf("%f this is my money\n", c / d);



    return 0;
}