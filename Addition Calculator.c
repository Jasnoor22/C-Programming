#include <stdio.h>

int main() {
    int Number_1, Number_2, sum;
    printf("Enter Number 1: ");
    scanf("%d", &Number_1);
    printf("Enter Number 2: ");
    scanf("%d", &Number_2);
    sum = Number_1 + Number_2;
    printf("Sum of %d and %d is: %d\n", Number_1, Number_2, sum);
    printf("This is my first C program.\n");
    return 0;
}