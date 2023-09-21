This project involves the implementation of singly linked lists and related functions. The project structure is organized as follows:

Testing: The "Testing" directory contains test cases for evaluating the functionality of the linked list operations.

Header File (lists.h): The "lists.h" header file defines structures and function prototypes used in the project. It includes a structure list_t with fields for a string (char *str), string length (unsigned int len), and a reference to the next element (struct list_s *next).

Task Descriptions:

Print List (0-print_list.c): This C function prints all elements of a list_t list. If the string str is NULL, it prints "[0] (nil)".

List Length (1-list_len.c): A C function that calculates and returns the number of elements in a linked list_t list.

Add Node (2-add_node.c): This C function adds a new node to the beginning of a list_t list. If the addition fails, it returns NULL; otherwise, it returns the address of the new element.

Add Node at the End (3-add_node_end.c): A C function that adds a new node to the end of a linked list_t list. It returns NULL in case of failure or the address of the new element on success.

Free List (4-free_list.c): This C function is responsible for freeing the memory allocated for a list_t list.

The Hare and the Tortoise (100-first.c): A C function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the main function is executed.

Real Programmers Can Write Assembly Code in Any Language (101-hello_holberton.asm): A 64-bit assembly program that prints "Hello, Holberton" followed by a new line using only the printf function without interrupts.
