#include <stdio.h>

int main(void) {
    int elements_count[9] = {12, 23, 45, 12, 67, 76, 88, 23, 12};
    int duplicate_element[9];
    int count;

    for (int i = 0; i < 9; i++)
    {
        duplicate_element[i] = elements_count[i];
        count = 0;
        for (int j = 0; j < 9; j++)
        {
            if (elements_count[i] == elements_count[j])
            {
                count++;
            }
        }
    }

    for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (duplicate_element[i] != elements_count[j])
                {
                    printf("%i repeats %i\n", elements_count[i], count);
                }
                
            }
            
        }
}