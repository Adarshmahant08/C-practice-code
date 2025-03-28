#include <stdio.h>
int main()
{
    // C variables
    int myname = 90;
    printf(" %d \n", myname);

    float myclass = 9.99;
    printf("%f \n", myclass);

    char myroll = 'a';
    printf("%c \n", myroll);

    // Together Variables
    int x = 10;
    int y = 15;
    int z = 20;
    int sum = x + y + z;
    printf(" sum of all = %d \n", sum);

    // Multiple Variables
    int a = 50, b = 100, c = 25;
    printf("%d \n", a + b - c);

    // Calculate the Area of a Rectangle
    int length = 10;
    int breath = 20;
    int area;
    area = length * breath;
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", breath);
    printf("area of reactingle: %d \n", area);

    return 0;
}