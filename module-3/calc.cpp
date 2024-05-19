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

    printf("give the value a : ");
    scanf(" %i", &a);

    printf("give the value b : ");
    scanf(" %i", &b);
    ans = a - b;
    printf("%i - %i = %i\n", a, b, ans);

    printf("give the value a : ");
    scanf(" %i", &a);
    printf("give the value b : ");
    scanf(" %i", &b);
    ans = a * b;
    printf("%i * %i = %i\n", a, b, ans);

    printf("give the value a : ");
    scanf(" %i", &a);

    printf("give the value b : ");
    scanf(" %i", &b);
    ans = a / b;
    printf("%i / %i = %i\n", a, b, ans);


    return 0;
}