#include <stdio.h>
int main()
{
    int class = 5;
    if (class < 3) // Greater than If Statements
    {
        printf("5 is greater than 3");
    }
    // The else Statement
    else
    {
        printf("5 is not greater then 3 \n");
    }

    int age = 50; // Short Hand If Else statments
    (age > 20) ? printf("age is greater than 20 \n ") : printf("age is not greater then 20 \n");

    // Switch Statement

    int day = 7;
    switch (day)
    {
    case 1:
        printf("monday \n");
        break;
    case 2:
        printf("tuesday \n");
        break;
    case 3:
        printf("wednesday \n");
        break;
    case 4:
        printf("thursday \n");
        break;
    case 5:
        printf("friday \n");
        break;
    case 6:
        printf("saturday \n");
        break;
    default:
        printf("weekend \n");
        break;
    }

    return 0;
}
