0x15. C - File I/O
In C programming, file input/output (I/O) operations are commonly performed using the <stdio.h> library functions. To read and write data to a file, you typically follow these steps:

Opening a File:

To open a file for reading, you can use the fopen function. To open a file for writing, you can use fopen with different modes like "w" for write or "a" for append.

Here's how to open a file for reading:

FILE *file_ptr;
file_ptr = fopen("filename.txt", "r");
if (file_ptr == NULL) {
    perror("Error opening file");
    return 1;
}
Reading from a File:

You can use functions like fscanf, fgets, or fread to read data from the file.

Here's an example using fscanf to read an integer from the file:

c
int data;
if (fscanf(file_ptr, "%d", &data) == 1) {
    printf("Read: %d\n", data);
} else {
    printf("Error reading from file.\n");
}
Writing to a File:

To write data to a file, you can use functions like fprintf, fputs, or fwrite.

Here's an example using fprintf to write an integer to the file:

c
int value = 42;
fprintf(file_ptr, "%d", value);
Closing a File:

After you've finished reading or writing, it's essential to close the file using the fclose function to free up resources:

c
fclose(file_ptr);
Error Handling:

Always check if the file was successfully opened before performing any read or write operations.
Use error-checking functions like feof, ferror, or return values to handle errors appropriately.
Remember to include error handling in your code to handle cases where the file might not exist or other I/O errors occur. Additionally, it's good practice to check if file operations are successful before proceeding with further operations.
