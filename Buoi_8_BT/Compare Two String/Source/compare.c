#include <stdint.h>
#include "Header/compare.h"



Compare isEqual (const char arr1[], const char arr2[]){
    uint8_t i = 0;
    while (arr1 == arr2){
        if (arr1[i] == '\0')    return EQUAL;

        i++;
    }
    
    return EQUAL;

    
}



