
/*

Create a C program that calculates and displays the grade of a student based on their score.The grading criteria are as follows :

    80=+        : A
    79 - 60     : B
    70 - 40     : C
    39=-        : F

*/

#include <stdio.h>

int main()
{
    int number;

    scanf("%i", &number);

    if (number >= 80)
    {
        printf("A\n");
    }
    else if (number <= 79 && number >= 60)
    {
        printf("B\n");
    }
    else if (number <= 70 && number >= 40)
    {
        printf("C\n");
    }
    else
    {
        printf("F\n");
    }

    return 0;
}


