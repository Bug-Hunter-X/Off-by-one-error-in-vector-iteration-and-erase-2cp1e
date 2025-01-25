# Off-by-one error in C++ vector iteration and erase
This repository demonstrates a common off-by-one error that occurs when removing elements from a `std::vector` while iterating through it using an index-based loop.  After an element is erased, the indices of subsequent elements change, leading to potential errors.

The `bug.cpp` file contains the buggy code. The `bugSolution.cpp` file provides the corrected code, showing safe and efficient ways to handle element removal during iteration.

## How to reproduce
1. Clone this repository.
2. Compile and run `bug.cpp`. Observe the incorrect output.
3. Compile and run `bugSolution.cpp`. Observe the correct output.