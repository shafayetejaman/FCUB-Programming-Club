#include <stdio.h>

int main()
{
    int x, y;
    int total_days_of_week = 7;

    scanf("%d %d", &x, &y);

    int clear_days = total_days_of_week - (x + y);
    printf("%d\n", clear_days);

    return 0;
}
