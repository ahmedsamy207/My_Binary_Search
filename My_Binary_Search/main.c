/* Author: Ahmed Samy Kamal
Date: 25/8/2021*/
#include "Binary_search.h"

int main()
{
    uint8_t arr[15] = {7,8,3,10,44,48,78,12,17,26,11,21,55,57,68};
    uint8_t result;
    uint8_t loop;
    result = binarySearch(arr,15,44);
    printf("in Index %d ", result);
    printf("in the sorted array = \{ ");
    for(loop = 0; loop < 15; loop++){
      printf("%d ", arr[loop]);
    }
    printf("\}\n ");
    return 0;
}
