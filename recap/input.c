#include <stdio.h>

int main()
{
    int a, b;

    scanf("%i", &a);
    scanf("%i", &b);

    printf("%i this is my money\n", a/b);
    

    float a_in_f = (float)a;
    float b_in_f = (float)b;

    printf("%f this is my money\n", a_in_f / b_in_f);



    return 0;
}