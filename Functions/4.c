#include <stdio.h>

void sortArray(int elements[], int count);

int main(void) {
    int element_count;
    printf("Enter Number of elements in an array: ");
    scanf("%i", &element_count);

    int array[element_count];
    printf("Enter the elements in this array: ");
    for (int i = 0; i < element_count; i++)
    {
        scanf("%i", &array[i]);
    }
    
    sortArray(array, element_count);
    printf("\n");
}

void sortArray(int elements[], int count) {
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if(elements[j] > elements[j + 1]) {
                int temp = elements[j];
                elements[j] = elements[j+1];
                elements[j+1] = temp;
            }
        }
        
    }
    
    printf("Sorted Array: ");
    for (int i = 0; i < count; i++)
    {
        printf("%i  ", elements[i]);
    }
    
}