#include <stdio.h>

import sys

def fibonacci_sequence(n):
    sequence = [1, 2]  # Starting with 1 and 2
    for i in range(2, n):
        sequence.append(sequence[i-1] + sequence[i-2])
    return sequence

fib_numbers = fibonacci_sequence(50)
fib_str = ', '.join(map(str, fib_numbers))
print(fib_str)
sys.stdout.flush()  # Ensure the output is flushed immediately

