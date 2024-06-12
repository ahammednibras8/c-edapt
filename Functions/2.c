//Write a C program to check whether a given input by the user is prime or not using a function
#include <stdio.h>

void prime(int a);

int main(void) {
    int prime_input;
    printf("Enter the number: ");
    scanf("%i", &prime_input);
    prime(prime_input);
}

void prime(int a) {
    for(int i = 2; i < a; i++) {
        if(a % i == 0) {
            printf("it is not a prime number\n");
            break;
        } else {
            printf("it is a prime number\n");
            break;
        }
    }
}