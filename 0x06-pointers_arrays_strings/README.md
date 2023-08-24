More Pointers, Arrays, and Strings
Task 0: strcat
Implement a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);

This function should append the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adding a new terminating null byte. The function should return a pointer to the resulting string dest.

Task 1: strncat
Implement a function that concatenates two strings, using at most n bytes from the source.

Prototype: char *_strncat(char *dest, char *src, int n);

Similar to the _strcat function, this function should concatenate src onto the end of dest. However, it should only use up to n bytes from src. The source string doesn't need to be null-terminated if it has n or more bytes. The function should return a pointer to the modified dest string.

Task 2: strncpy
Write a function that copies a string, limiting the copy to n characters.

Prototype: char *_strncpy(char *dest, char *src, int n);

This function should copy up to n characters from the src string into the dest string. If src is shorter than n characters, the remaining characters in dest should be filled with null bytes. The function should return a pointer to the modified dest string.

Task 3: strcmp
Create a function that compares two strings and returns an integer indicating their order.

Prototype: int _strcmp(char *s1, char *s2);

This function should work similar to the strcmp function. It should return a positive value if s1 is greater, a negative value if s2 is greater, and 0 if both strings are equal.

Task 4: Reversing Array
Implement a function that reverses the content of an array of integers.

Prototype: void reverse_array(int *a, int n);

Given an array a with n elements, this function should reverse the order of the elements in-place.

Task 5: Uppercase Conversion
Write a function that converts all lowercase letters in a string to uppercase.

Prototype: char *string_toupper(char *str);

This function should modify the characters in the input string str, changing any lowercase letters to their uppercase equivalents.

Task 6: Capitalizing Words
Implement a function that capitalizes the first letter of each word in a string.

Prototype: char *cap_string(char *str);

This function should capitalize the first letter of each word in the input string str. Words are separated by space, tabulation, new line, comma, semicolon, period, exclamation mark, question mark, double quotes, parentheses, and curly braces.

Task 7: 1337 Encoding
Write a function that encodes a string using the 1337 (leet) encoding.

Prototype: char *leet(char *str);

This function should replace specific letters in the input string str with their corresponding leet encoding as follows: 'a' or 'A' with '4', 'e' or 'E' with '3', 'o' or 'O' with '0', 't' or 'T' with '7', and 'l' or 'L' with '1'.

Task 8: ROT13 Encoding
Implement a function that encodes a string using the ROT13 cipher.

Prototype: char *rot13(char *str);

This function should apply the ROT13 transformation to each letter in the input string str, leaving non-letter characters unchanged.

Task 9: Printing Numbers
Write a function to print an integer using _putchar.

Prototype: void print_number(int n);

This function should print the integer n using only the _putchar function and without using long, arrays, or pointers.

Task 10: Array Access
Add one line of code to the given program to print a specific element from an array.

Initial Code:

c
#include <stdio.h>

int main(void) {
    int a[] = {98, 402, 198, 298, 298};
    int *p;

    p = a;
    /* Add your code here */
    return (0);
}
You are not allowed to modify the variable p, and you can only write one statement.

Task 11: Adding Big Numbers
Write a function to add two positive numbers represented as strings.

Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);

This function should take two strings n1 and n2 representing positive numbers and store their sum in the buffer r. The size_r parameter represents the size of the buffer. The function should return a pointer to the result. If the result cannot fit in r, the function should return 0.

Task 12: Printing Buffer
Implement a function that prints the content of a buffer in a specific format.

Prototype: void print_buffer(char *b, int size);

This function should print the content of the buffer pointed to by b. The output should display 10 bytes per line, showing the position of the first byte in hexadecimal, the hexadecimal content of the buffer, and the corresponding printable characters or '.' if the byte is not printable. If size is 0 or negative, the output should be a new line.


