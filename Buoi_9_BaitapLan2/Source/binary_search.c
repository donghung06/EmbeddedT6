#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int random_number(int minN, int maxN){
 return minN + rand() % (maxN + 1 - minN);
}

uint16_t *createArray(uint16_t length){
    uint16_t *ptr = (uint16_t*)malloc(sizeof(uint16_t)*length);
    srand((int)time(0));
    uint16_t i;
    for ( i = 0; i < length; i++)
    {
        ptr[i] = random_number(1, 1000);
    }
    return ptr; 
}

void sort(uint16_t arr[], uint16_t length){
    uint16_t i;
    uint16_t j;
    for ( i = 0; i < length - 1; i++)
    {
        for ( j = i+1 ; j < length; j++)
        {
            uint16_t temp = arr[i];
            if (arr[i]>arr[j]){
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }

}


uint16_t binarySearch(uint16_t arr[], uint16_t length ,uint16_t x){
    uint16_t min = 0;
    uint16_t max = length - 1;
    uint16_t center;
    while (min < max)
    {
        center = (min + max)/2;
        if(arr[center] == x)
        {
            printf("\n");
            printf("Vi tri phan tu trong mang: %d\n", center);
            return 0;
        }
        if(arr[min] == x)
        {
            printf("\n");
            printf("Vi tri phan tu trong mang: %d\n", min);
            return 0;
        }
        if(arr[max] == x)
        {
            printf("\n");
            printf("Vi tri phan tu trong mang: %d\n", max);
            return 0;
        }
        if (arr[center] < x)
        {
            min = center +1;
        }
        if (arr[center] > x)
        {
            max = center - 1;
        }

    }
    printf("\n");
    printf("So %d khong co trong mang,\n", x);
    return -1;    

}
