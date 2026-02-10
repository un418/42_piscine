## Strings - Array of Char
* https://www.geeksforgeeks.org/c/how-to-convert-a-string-to-a-char-array-in-c/
### Octal in C
* https://www.geeksforgeeks.org/c/octal-numbers-c/
# Iteration over an array

```c

```

## Pointer and array

* https://www.w3schools.com/c/c_pointers_arrays.php


> [!NOTE] 
> In C, the **name of an array**, is actually a **pointer** to the **first element** of the array.
```c
#include <stdio.h>
int main() {
  int myNumbers[4] = {25, 50, 75, 100};

  // Get the memory address of the myNumbers array
  printf("%p\n", myNumbers);
  // Return: 0x7fffc5517c70

  // Get the memory address of the first array element
  printf("%p\n", &myNumbers[0]);
  // Return: 0x7fffc5517c70

  return 0;
}
```
