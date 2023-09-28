Bit manipulation involves performing operations on individual bits within a binary representation of a number. Here are some common bit manipulation operations:

Bitwise AND (&): This operation compares each pair of bits in two numbers. The result is 1 if both bits are 1; otherwise, it's 0. For example:

0b1010 & 0b1100 = 0b1000
Bitwise OR (|): This operation compares each pair of bits in two numbers. The result is 1 if at least one bit is 1. For example:
0b1010 | 0b1100 = 0b1110
Bitwise XOR (^): This operation compares each pair of bits in two numbers. The result is 1 if the bits are different; otherwise, it's 0. For example:

0b1010 ^ 0b1100 = 0b0110
Bitwise NOT (~): This operation inverts the bits of a number. It changes 1s to 0s and vice versa. For example:
~0b1010 = 0b0101
Left Shift (<<): This operation shifts the bits of a number to the left by a specified number of positions. It effectively multiplies the number by 2 to the power of the shift count. For example:
0b0010 << 1 = 0b0100
Right Shift (>>): This operation shifts the bits of a number to the right by a specified number of positions. It effectively divides the number by 2 to the power of the shift count. For example:
0b0100 >> 1 = 0b0010
