/*
 * this program is to show the difference in the integer sizes
 *
*/

#include <stdio.h>

int main()
{

    short int aShortInt; // this is a short integer and is considered smaller than int 
    int aInteger; // this is a default integer 
    long int aLongInt; // this is a long integer that is larger than int 
    long long int aLongLongInt; // this is longer integer that is larger than long int 

    printf("Size of (short int = %ld (bytes) %ld bits\n", sizeof(aShortInt), sizeof(aShortInt)*8);

    printf("size of (int) = %ld (bytes) %ld bits\n", sizeof(aInteger), sizeof(aInteger)*8);

    printf("Size of (long int) = %ld (bytes) %ld bits\n", sizeof(aLongInt), sizeof(aLongInt)*8);

    printf("Size of (long long int) = %ld (bytes) %ld bits\n", sizeof(aLongLongInt), sizeof(aLongLongInt)*8);

    return(0);
}