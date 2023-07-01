#include <stdint.h>
#include <stdio.h>





int main(int argc, char const *argv[])
{
   uint16_t *array = createArray(1000);

   sort(array, 1000);

    uint16_t i;
   for (i = 0; i < 1000; i++)
   {
    printf("%d, ", array[i]);
   }

   binarySearch(array, 1000, 999);
    return 0;
}