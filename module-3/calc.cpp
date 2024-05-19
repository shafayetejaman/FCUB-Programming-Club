#include <stdio.h>

int main()
{
    int a = 20, b = 10, ans;

    printf("give the value a : ");
    scanf(" %i", &a);
    
    printf("give the value b : ");
    scanf(" %i", &b);

    ans = a + b;
    printf("%i + %i = %i\n", a, b, ans);

    ans = a - b;
    printf("%i - %i = %i\n", a, b, ans);

    ans = a * b;
    printf("%i * %i = %i\n", a, b, ans);



    float div_ans = (a * 0.1) / (b * 0.1);
    printf("%i / %i = %f\n", a, b, div_ans);


    return 0;
}