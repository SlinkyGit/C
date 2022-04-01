// Nikhil Solanki
// CS 283
// H1 Homework
// Q3

// a C program to find out how many bits a variable of type long int is

int printf(const char *format, ...);

void numBits(long int num) {
    //Memory locations of the number and the position right next to it
    long int *before = &num;
    long int *after = &num + 1;

    //Then we can subtract the difference to get the size of the address, and multiply by 4 bits since an int is 4 bits
    int size = 4 * (after - before); 

    printf("The size in bits of %li, is %i.\n", num, size);
}

int main(int argc, char *argv[]) {
// Example, any long int will work...
    numBits(325);

// Below will work if the <stdio.h> library is included, because scanf is apart of it
    // int in;
    // printf("Enter a long int: ");
    // scanf("%i", &in);
    // numBits(in);
    // return 0;
}

