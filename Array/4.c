#include <stdio.h>

int main(void) {
    int array1[3] = {1, 2, 3};
    int array2[3] = {10, 20, 30};
    int merged_array[6];

    for (int i = 0; i < 6; i++)
    {
        if(i < 3) {
            merged_array[6] = array1[i];
        }
        if(i > 3) {
            merged_array[6] = array2[i]
        }
    }
    
}