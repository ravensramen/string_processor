#include "header.h"

int main() {
	int n = 0;
	char s[100] = "";

	FILE* input = fopen("input.txt", "r");
	FILE* output = fopen("output.txt", "w");

	//1. 

	printf("Enter a n value: ");
	scanf("%d", &n);
	my_fgets(s, n, input);

	//2. 

	int chars_written = 0;
	chars_written = my_fputs(s, output);
	printf("Characters written = %d\n", chars_written);
	
	//3.

	printf("The integer coresponding to the read character is: %d\n", my_fgetc(input));

	//4.

	char c = '\0';
	printf("Enter a character to print to the file: ");
	scanf(" %c", &c);
	printf("The integer coresponding to the printed character is: %d", my_fputc(c, input));

	//5.

	my_gets(s);

	//6.

	my_puts(s);

	//7. //couldn't get this function to work :(

	/*my_getchar(); */

	//8.
	my_putchar(c);

	//9

	char source[] = "Hello World";
	char dest[100] = "";

	my_strcpy(dest, source);

	//10. 

	char dest_2[100] = "";

	printf("Enter the number of characters to copy: \n");
	scanf("%d", &n);
	my_strncpy(dest_2, source, n);

	//11.
	char dest_3[100] = "String 1";
	my_strcat(dest_3, source);

	//12.
	char dest_4[100] = "String 2";
	printf("Enter the number of characters to concatinate: \n");
	scanf("%d", &n);
	my_strncat(dest_4, source, n);

	//13. 
	char cmp_string[] = "Hello";
	char cmp_string2[] = "World";
	

	int strcmp = 0;
	strcmp = my_strcmp(cmp_string, cmp_string2);
	printf("The result of string comparison is %d \n", strcmp);

	//14. 
	int cmp_n = 0; 
	int strncmp = 0;

	printf("Enter the number of characters to compare: \n");
	scanf("%d", &cmp_n);
	strncmp = my_strncmp(cmp_string, cmp_string2, cmp_n);
	printf("The result of string comparison is %d \n", strncmp);

	//15.
	char strlen_str[] = "Hello World";
	int len = 0;
	len = my_strlen(strlen_str);
	printf("The string is %d characters long.", len);

	//close files from earlier problems
	fclose(input);
	fclose(output);
	return 0;
}
