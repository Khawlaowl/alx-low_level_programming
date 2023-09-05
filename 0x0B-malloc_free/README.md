0x0B. C - malloc, free
#### Function 0: Create an Array (0-create_array.c)
Write a function that creates an array of characters and initializes it with a specific character.

- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if `size` is 0.
- Returns a pointer to the array or `NULL` if memory allocation fails.

#### Function 1: String Duplication (1-strdup.c)
Write a function that returns a pointer to a newly allocated space in memory, containing a copy of the provided string.

- Prototype: `char *_strdup(char *str);`
- The `_strdup()` function returns a pointer to a new string, which is a duplicate of `str`. Memory for the new string is allocated using `malloc`.
- Returns `NULL` if `str` is `NULL`.
- On success, it returns a pointer to the duplicated string; otherwise, it returns `NULL` if there's not enough memory available.

#### Function 2: Concatenate Strings (2-str_concat.c)
Write a function that concatenates two strings.

- Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory containing the contents of `s1`, followed by the contents of `s2`, and null-terminated.
- If either `s1` or `s2` is `NULL`, treat it as an empty string.
- The function should return `NULL` on failure.

#### Function 3: Allocate a 2D Grid (3-alloc_grid.c)
Write a function that returns a pointer to a 2-dimensional array of integers.

- Prototype: `int **alloc_grid(int width, int height);`
- Each element of the grid should be initialized to 0.
- The function should return `NULL` on failure.
- If `width` or `height` is 0 or negative, return `NULL`.

#### Function 4: Free a 2D Grid (4-free_grid.c)
Write a function that frees a 2-dimensional grid previously created by the `alloc_grid` function.

- Prototype: `void free_grid(int **grid, int height);`
- Note that we will compile with your `alloc_grid.c` file, so make sure it compiles.

#### Function 5: Concatenate Program Arguments (100-argstostr.c)
Write a function that concatenates all the arguments of your program.

- Prototype: `char *argstostr(int ac, char **av);`
- Returns `NULL` if `ac` is 0 or `av` is `NULL`.
- Returns a pointer to a new string or `NULL` if it fails.
- Each argument should be followed by a newline character `\n` in the new string.

#### Function 6: Split a String into Words (101-strtow.c)
Write a function that splits a string into words.

- Prototype: `char **strtow(char *str);`
- The function returns a pointer to an array of strings (words).
- Each element of this array should contain a single word, null-terminated.
- The last element of the returned array should be `NULL`.
- Words are separated by spaces.
- Returns `NULL` if `str` is `NULL` or an empty string.
- If your function fails, it should return `NULL`.
