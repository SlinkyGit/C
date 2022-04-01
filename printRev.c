// Nikhil Solanki
// CS 283
// H1 Homework
// Q1

// a C program to print the contents of a text file line-by-line but backwards so that the last line is printed first

#include <stdio.h>
#include <stdlib.h>

void printRevRecursively(FILE *fp){
    //Create Char array with space for 200 bytes
    char lines[200];

    //If there are characters in the file, recursively call the func again, and print each word in file
    //fgets reads in at most one less than size characters from stream and stores them into the buffer pointed to by "lines"; stops at EOF/error
    if (fgets(lines, 200, fp) != NULL) {
        printRevRecursively(fp);
        printf("%s ", lines);
    //Else, just return if there are no more characters to read
    } else {
        return;
    }
}

int main(int argc, char *argv[]) {

    FILE *fp;
    
//If no file is given in CMD-line, raise error
    if(argc == 1) {
        printf("No file given for input.\n");
        exit(-1);
    } else {
        fp = fopen(argv[1], "r");
    }
//If file pointer is NULL, print error message
    if (fp == NULL){
        printf("Cannot find %s\n", argv[1]);
    } else {
//Call recursive function to print in rev order
        printRevRecursively(fp);
    }
}
