//Name:Sydnee Boothby
//Date:05/01/2024
//Class: CptS121
//Instructor: Andy O'Fallon
//TA: Claire Monsoon
//Assignment: Strings extra credit assignment.
//Description: Replicates various string.h library functions using exclusively pointer notation. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MY_EOF -1

//1

char* my_fgets(char* s, int n, FILE* stream);
//Description: Reads "n" number of characters from file to string. 
//Parameters: Pointer to string, int of number of characters to copy, input file.

//2

int my_fputs(const char* s, FILE* stream);
//Description: Writes string to output file.
//Parameters: String, output file. 


//3

int my_fgetc(FILE* stream);
//Description: Reads character from input file. 
//Parameters: Input file.

//4

int my_fputc(int c, FILE* stream);
//Description: Writes character to output file.
//Parameters: Character input to write, file destination.

//5

char* my_gets(char* s);
//Description: Reads string from stdin. 
//Parameters: Destination string. 

//6

int my_puts(const char* s);
//Description: Writes constant string to stdout. 
//Parameters: Constant string pointer. 

//7

int my_getchar(void);
//Description: Returns to ascii value of character read from stdin. 
//Parameters: Void. 

//8

int my_putchar(int c);
//Description: Writes inputed character to stdout. 
//Parameters: Input character. 

//9.

char* my_strcpy(char* destination, const char* source);
//Description: Copies source string to destination string. 
//Parameters: Pointer to destination and source strings. 

//10.

char* my_strncpy(char* destination, const char* source, int n);
//Description: Copies "n" number of characteres from source string to destination string. 
//Parameters: Pointer to destination and source strings, integer of number of characters to copy. 

//11.

char* my_strcat(char* destination, const char* source);
//Description: Adds source string to existing destination string. 
//Parameters: Pointer to destination and source strings. 

// 12.

char* my_strncat(char* destination, const char* source, int n);
//Description: Adds "n" characters of source string to existing destination string. 
//Parameters: Pointer to destination and source strings. 

//13.

int my_strcmp(const char* s1, const char* s2);
//Description: Compares two strings based on first non matching ascii codes. 
//Parameters: Strings 1 and 2. 

//14.

int my_strncmp(const char* s1, const char* s2, int n);
//Description: Compares two strings based on first non matching ascii codes up to "n" characters. 
//Parameters: Strings 1 and 2. 

//15.

int my_strlen(const char* s);
//Description: Determines the length of a string.
//Parameters: Input string. 
