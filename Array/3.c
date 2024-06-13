#include <stdio.h>

int main(void) {
    int array[] = {1, 2, 3, 4, 2, 2, 5, 2};
    int size = sizeof(array);
    int element_count = 2;
    int count = 0;

    for(int i = 0; i < size; i++) {
        if(array[i] == element_count) {
            count++;
        }
    }

    printf("Element Count: %i\n", count);
}