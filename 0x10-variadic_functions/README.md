0x10. C - Variadic functions
Variadic functions are functions that can accept a variable number of arguments. Here's a summary of the key points:

Why Variadic Functions are Used:

Regular C functions have a fixed number of arguments with specified data types.
Variadic functions are used when a function needs to accept an unlimited number of arguments, especially when the number or types of arguments can vary.
How Variadic Functions are Defined and Used:

Variadic functions are defined using a prototype with an ellipsis (...) in the argument list, followed by special macros to access the variable arguments.
When calling variadic functions, you pass required arguments first, followed by optional ones, just like in regular function calls.
It's common to declare the function with a prototype specifying the types of required arguments, but the prototype for optional arguments is omitted.
Syntax for Variable Arguments:

To define a variadic function, use an ellipsis in the argument list after at least one required argument.
Example: int func(const char *a, int b, ...);
Receiving the Argument Values:

Variadic functions access their arguments using special macros from stdarg.h.
The sequence involves initializing an argument pointer with va_start, accessing arguments with va_arg, and cleaning up with va_end.
Arguments are accessed sequentially in the order they were provided.
How Many Arguments Were Supplied:

There's no built-in mechanism for a variadic function to determine the number and types of optional arguments.
Functions typically establish conventions for callers to specify the number and types of arguments, such as passing the count as a required argument.
Calling Variadic Functions:

Calling variadic functions is straightforward. Just provide the required and optional arguments within parentheses.
It's recommended to declare the function with a prototype, but it's not always required.
Argument Access Macros (from stdarg.h):

va_list: Type for argument pointer variables.
va_start(ap, last-required): Initializes the argument pointer.
va_arg(ap, type): Retrieves the next optional argument and advances the argument pointer.
va_end(ap): Ends the use of the argument pointer.
va_copy(dest, src): Copies an argument pointer (C99).C
