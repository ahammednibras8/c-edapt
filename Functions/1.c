//1. Write a C program to find the largest of three numbers using a function
#include <stdio.h>

int largest(int a, int b, int c);

int main(void) {
    int num1, num2, num3;
    printf("Enter Three Numbers: ");
    scanf("%i%i%i", &num1, &num2, &num3);
    printf("%i\n", largest(num1, num2, num3));
}

int largest(int a, int b, int c) {
    if(a > b && a > c) {
        return a;
    } else if (b > a && b > c) 
    {
        return b;
    } else {
        return c;
    }
}