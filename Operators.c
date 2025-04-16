#include <Stdio.h>
#include <stdbool.h> // for boolean type
int main()
{
    // Arithmetic Operators

    int x = 10; // Addition operators
    int y = 20;
    printf("%d \n", x + y);

    int a = 20; // Increment operators
    printf("%d \n", ++a);

    int b = 60; // Decrement operators
    printf("%d \n", --b);

    int c = 5; // modulus operators
    int d = 3;
    printf("%d \n", c % d);

    // Assignment Operators

    int z = 10; // addition assignment operator
    z += 4;
    printf("%d \n", z);

    // Comparison Operators

    int g = 10; // greater than operator
    int h = 8;
    printf("%d \n", g > h);

    int i = 30; // Greater than or equal to Operators
    int j = 20;
    printf("%d \n", i >= j);

    // Logical Operators

    int k = 10; // Logical AND Operators
    int l = 20;
    printf("%d\n", k < l && l > k);

    bool car = true; // print the boolean variables
    bool cycle = false;
    printf("%d \n", car);
    printf("%d \n", cycle);

    bool country = 20; // Comparing Values and Variables
    bool city = 20;
    printf("%d \n", city == country);

    return 0;
}