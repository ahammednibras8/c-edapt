#include <stdio.h>

int main(void) {
    int elements_largest[5] = {34, 47, 58, 78, 21};
    int largest = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(elements_largest[i] < elements_largest[j]) {
                largest = elements_largest[j];
            }
        }
    }

    printf("Largest: %i\n", largest);
}