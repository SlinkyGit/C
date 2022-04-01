// Nikhil Solanki
// CS 283
// H1 Homework
// Q2

// a C program to convert and print a decimal unsigned, integer number to binary in 32 bits

#include <stdio.h>
#include <string.h>
#define BIT_LEFT 1
#define BIT_RIGHT 31

// Function that takes in an unsigned number as a parameter
void binary(unsigned num) {
// Initialize a null-char array (to be overwritten later)
    char bin[100] = { 0 };
    char z = '0';
    char o = '1';
// Shift from 1 to 31, because we want to observe 32 bits (0-31); 1 * 2^31
    unsigned cnt = BIT_LEFT << BIT_RIGHT;

// While the number is still positive, enter loop 
    while (cnt > 0) {
// We can check to see if the given number ANDed with its bitwise representation (2^n; nth bit) is equal to 0 
        if ((num & cnt) == 0) {
// If it is, that is equal to a 0 in binary; the switch is turned OFF
// Add a zero to the string
            strncat(bin, &z, 1);
        } else {
// If it is not, that is equal to a 1 in binary; the switch is turned ON
// Add a one to the string
            strncat(bin, &o, 1);
        }
// Onto the next binary position; recursive case
        cnt = cnt / 2;
    }
    printf("32-bit Binary Representation of %i: %s", num, bin);
    printf("\n");
}

int main(){
// Example, any unsigned int will work...
    // binary(444);
    int in;
    printf("Enter an unsigned int: ");
    scanf("%i", &in);
    binary(in);

}


