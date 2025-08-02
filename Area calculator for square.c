#include <stdio.h>
// This program calculates the area of a square given the length of its side.
int main() {
    int side,area;
    printf("enter the side of the square: ");
    scanf("%d", &side);
    area = side * side;
    printf("Area of the square with side %d is : %d\n", side ,area);
    return  ;
}