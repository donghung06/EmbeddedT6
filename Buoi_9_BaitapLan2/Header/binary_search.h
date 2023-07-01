/*
* File: binary_search.h
* Author: Dong Hung
* Date: 7/1/2023
* Description: This is a file that searches for a number in an array
*/





/*
* Function: randomNumber
* Description: this is a function that compares 2 strings
* Input:
*   minN - a interger number
*   maxN - a interger number with value > minN
* Output:
*   returns a random number in the range minN to maxN
*/
int randomNumber(int minN, int maxN)


/*
* Function: createArray
* Description: this is a function that create a array with "length" dimension
* Input:
*   Length - a interger number (dimension array)
* Output:
*   returns a array with "length" dimension
*/
uint16_t *createArray(uint16_t length)


/*
* Function: sort
* Description: this is a function that sort array from smallest to largest
* Input:
*   arr[]: name of array
*   length: a interger number (dimension array)
* Output:
*   returns a array with value which sorted from smallest to largest
*/
void sort(uint16_t arr[], uint16_t length)


/*
* Function: binarySearch
* Description: this is a function that look a number in array
* Input:
*   arr[]: name of array
*   length: a interger number (dimension array)
*   x: a number to find
* Output:
*   returns a location of number in array
*/
uint16_t binarySearch(uint16_t arr[], uint16_t length ,uint16_t x)


#endif