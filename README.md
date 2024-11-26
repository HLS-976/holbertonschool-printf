# _printf

## Description

The role of the 'printf' function is to do formated printing, and the goal of this project is to make a custom 'printf' function in c which supports different format specifiers: single characters, strings of characters, decimal numbers and integers in base 10.

## Compilation

The command needed to compile the files is:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

Please do not forget to include the files needed so the compiling process can be as simple as possible.

## Requirements

- All of our files are made to be compiled on Ubuntu 20.04 LTS
- Compiling has to be done through gcc
- The amount of functions per file does not exceed 5
- Our code uses the 'Betty' style

## Example

If you wish to try our function you can, for example, use this example:

```sh
#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    return(0);
}
```
Which would output: "Let's try to printf a simple sentence."

And would return "38" since that is the number of characters in this character string

## Man Page

- Name

printf - format and print data

- Synopsis

printf format (argument)

- Description

Print argument(s) according to format

- Return Value

It returns the length of the given specifier


## Authors
Hillias Soumahill and Gabriel Cohen from C#25
