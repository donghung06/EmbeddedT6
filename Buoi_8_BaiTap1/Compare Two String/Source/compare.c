#include <stdint.h>
#include "Header/compare.h"



CompareEqual compareTwoString (const char arr1[], const char arr2[]){
    uint8_t i = 0;
    while (arr1 == arr2){
        if (arr1[i] == '\0')    
        {
            printf("EQUAL\n");
            return 0;
        }
    if(arr1[i] > arr2[i])
    {
        printf("BIGGER\n");
    }
    else    printf("SMALLER\n");

    }
    
}



