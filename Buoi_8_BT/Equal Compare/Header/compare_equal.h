/*
* File: compare.h
* Author: Dong Hung
* Date: 29/6/2023
* Description: This is a file that compares 2 equal strings
*/


#ifndef COMPAREEQUAL_H
#define COMPAREEQUAL_H

typedef enum{
    SMALLER,
    BIGGER,
    EQUAL
}CompareEqual;


/*
* Function: isEqual
* Description: this is a function that compares 2 strings
* Input:
*   arr1[] - char
*   arr2[] - char
* Output:
*   returns longer string
*/

CompareEqual isEqual (const char arr1[], const char arr2[]);

#endif