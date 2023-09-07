Project
0x0C. C - More malloc, free
malloc (Memory Allocation):

Description: The malloc function stands for "memory allocation." It is used to allocate a specified number of bytes of memory on the heap (dynamically allocated memory) and returns a pointer to the first byte of the allocated memory block.
Example Usage: int *arr = (int *)malloc(10 * sizeof(int));
calloc (Contiguous Allocation):

Description: The calloc function is used to allocate a specified number of blocks of memory, each of a specified size, and initializes all the bytes in the allocated memory to zero.
Example Usage: int *arr = (int *)calloc(10, sizeof(int));
realloc (Reallocate Memory):

Description: The realloc function is used to change the size of a previously allocated memory block. It can be used to make the block larger or smaller and returns a pointer to the newly allocated memory.
Example Usage: int *new_arr = (int *)realloc(arr, 20 * sizeof(int));
free (Free Allocated Memory):

Description: The free function is used to release or deallocate memory that was previously allocated using malloc, calloc, or realloc. It allows you to return the memory to the system, preventing memory leaks.
Example Usage: free(arr);
strdup (String Duplicate):

Description: The strdup function is used to duplicate a given string by dynamically allocating memory to store a copy of the string. It returns a pointer to the newly allocated string.
Example Usage: char *duplicate = strdup("Hello, World");
sizeof (Size of Object):

Description: The sizeof operator is used to determine the size, in bytes, of a data type or an object. It's often used in conjunction with memory allocation functions to calculate the size of memory needed.
Example Usage: size_t size = sizeof(int);
