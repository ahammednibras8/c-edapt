#include <stdio.h>

int main(void) {
    int array1[] = {1, 2, 3};
    int array2[] = {10, 20, 30};

    int size1 = 3;
    int size2 = 3;
    int merged_size = size1 + size2;

    int merged_array[merged_size];

    for (int i = 0; i < size1; i++)
    {
        merged_array[i] = array1[i];
    }
    
    for (int i = 0; i < size2; i++)
    {
        merged_array[size1 + i] = array2[i];
    }

    printf("Merged Array: ");
    for(int i = 0; i < merged_size; i++) {
        printf("%i ", merged_array[i]);
    }
    printf("\n");
}