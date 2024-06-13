#include <stdio.h>

int main(void) {
    int elements_sum[3] = {23, 34,45};
    int sum = 0;

    for (int  i = 0; i < 3; i++)
    {
        sum = sum + elements_sum[i];
    }
    printf("Sum = %i\n", sum);
}