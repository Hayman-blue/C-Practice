/*
*simple use of uint8_t which is a unsigined 8 bit integer 
* unsigned integers can only hold positve integer types 
*/


#include <stdio.h>
#include <stdint.h>

int main() {

    uint8_t smallNumber = 0x12; // this is a small number 

    printf("0x12 is %u decimal\n", smallNumber); 
    printf("0x12 is %o octal\n", smallNumber);
    printf("0x12 is %x hex\n", smallNumber);
    return(0);
}