#include "header.h"

//1.
char* my_fgets(char* s, int n, FILE* stream) {
	if (s == NULL || stream == NULL) {
		return NULL; //unsuccessful >> null pointer returned
	}

	char* ptr = s; //pointer to string
	for (int i = 0; i < n - 1; i++) {
		char c = fgetc(stream);
		if (c == EOF || c == '\n') {
			break;
		}
		else {
			*ptr++ = c; //assigns character to string
		}
	}
	*ptr = '\0'; //null terminates new string
	return s;
}

//2.

int my_fputs(const char* s, FILE* stream) {
	if (feof(stream)) {
		return MY_EOF;
	}

	const char* ptr = s;
	int count = 0;
	while (*ptr != '\0') {
		fprintf(stream, "%c", *ptr);
		ptr++;
		count++;
	}

	return count;
}

//3.

int my_fgetc(FILE* stream) {

	char c = '\0';

	if (feof(stream)) 
	{
		return MY_EOF;
	}

	fscanf(stream, "%c", &c); //reads character from file
	return c;
}

//4.

int my_fputc(int c, FILE* stream) {
	int num = 0;
	num = fprintf(stream, "%c", c);
	if(num == 0)
	{
		return MY_EOF;
	}
	return c;
}

//5.

char* my_gets(char* s) {
	int i = 0;
	char c = '\0';

	scanf("%c", &c);
	char* ptr = s;

	while (c != '\n') {
		*ptr++ = c; //iterates to save each character in string
		i++;
		scanf("%c", &c);
	}

	*ptr = '\0'; //null terminates last index of string
	return s;
}

//6.

int my_puts(const char* s) {
	int count = 0; // Initialize count to 0
	while (*s != '\0') { 
		printf("%c", *s); // Print the character pointed by s
		s++; // Move to the next character
		count++; // Increment count to keep track of the number of characters printed
	}
	printf("\n"); // Print newline after printing the entire string
	return count; // Return the number of characters printed
}

//7. couldn't get this function to work :(

int my_getchar(void) 
{
	char c = '\0';
	scanf(" %c", &c);
	return c; //convert from char to ascii
}

//8.

int my_putchar(int c)
{
	printf("Printed character:  %c\n", c);
	return c; //returns ascii value of c
}

//9.

char* my_strcpy(char* destination, const char* source)
{
	if (*source == '\0') //if empty string
	{
		*destination = '\0'; //destination empty as well
	}
	if (*source != '\0') //if not empty string
	{
		*destination = *source; //copies string
		*(destination + 1) = '\0'; //last index null terminates
		return my_strcpy(destination + 1, source + 1) - 1; //recursive step, goes to next index
	}
	else
	{
		return *destination; //returns copied string
	}
}
//10. 

char* my_strncpy(char* destination, const char* source, int n) 
{
	int index = 0, index2 = 0; 
	if (*source == '\0') //while not end of source
	{
		while (index2 < n) 
		{
			*(destination + index2) = '\0';
			index2++;
		}
	}
	while(*(source + index)!='\0'&& index<n)
	{
		*(destination + index) = *(source + index); //copies string from source to destination
		index++;
	}
	return *destination; //returns string copied to "n" characters
}

char* my_strcat(char* destination, const char* source)
{
	// Pointer to the end of the destination string
	char* dest_end = destination;
	// Move the pointer to the end of the destination string
		while (*dest_end != '\0')
		{
			dest_end++; 
		}
		// Copy characters from source to destination
		while (*source != '\0') 
		{
			*dest_end = *source;
			dest_end++; //next index
			source++;
		}
		// Add null terminator to the end of the concatenated string
		*dest_end = '\0';

}


char* my_strncat(char* destination, const char* source, int n) 
{
	char* dest_end = destination; //points to destination string
	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*source != '\0' && n>0) //while the character at source array is not null and index doesn't exceed n
	{
		*dest_end = *source; //copy source to destination end
		dest_end++;
		source++;
		n--;
	}
	*dest_end = '\0'; //add null terminator to new array end 
}

int my_strcmp(const char *s1, const char *s2)
{
	const unsigned char* p1 = (const unsigned char*)s1; 
	const unsigned char* p2 = (const unsigned char*)s2;
	unsigned char n1, n2; //returns if negative or positive
	int result = 0;

	do
	{
		n1 = (unsigned char)*p1++; //stores the character at each index of each string, increments for each index
		n2 = (unsigned char)*p2++;
		if (n1 == '\0')
		{
			result =  n1 - n2;
		}
	} while (n1 == n2);
	result = n1 - n2; //returns either a negative or a positive

	if (result > 0) 
	{
		return 1;
	}
	if (result < 0) 
	{
		return -1;
	}
}

int my_strncmp(const char* s1, const char* s2, int n) 
{
	const unsigned char* p1 = (const unsigned char*)s1;
	const unsigned char* p2 = (const unsigned char*)s2;
	unsigned char n1, n2; //returns if negative or positive
	int result = 0;

	do
	{
		n1 = (unsigned char)*p1++; //stores the character at each index of each string, increments for each index
		n2 = (unsigned char)*p2++;
		n--; //stores characters until max met
		if (n1 == '\0')
		{
			result = n1 - n2;
		}
	} while (n1 == n2 && n>=0);
	result = n1 - n2; //returns either a negative or a positive

	if (result > 0)
	{
		return 1;
	}
	if (result < 0)
	{
		return -1;
	}
}

int my_strlen(const char* s)
{
	int length = 0;
	char* p = s;
	while (*p != '\0') {
		p++; //iterate through string
		length++; //increments length each time character is read from string
	}
	return length;
}
