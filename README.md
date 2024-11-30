
# _Printf






## Description

The role of the "_printf" is to do formated printing, and the goal of this project is to make a custom printf function in see which supports different format specifier : <span style="color : violet>single characters "%c"<span>, strings "%s", decimal number and integers "%d or %i" in base 10.

## Compilation

The command needed to compile the files is :

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format _printf.c print_function.c 
```

Please make sure you include the necessary files for the compilation.
## Requirements

- All of our files are made to be compiled on Ubuntu 20.04 LTS
- Compiling has to be done through gcc
- The amount of functions per file does not exceed 5
- Our code uses the 'Betty style'
## Usage/Examples

Here's an example of how to use our function on main.c file:

```c
#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: always 0 (Success)
 */
#include "main.h"

int main(void)
{
        int len, a, b;

        a = 3;
        b = 5;

        len = _printf("The principle of evolution is much faster in computers than in bipeds :)\n");
        _printf("Length:[%d]\n", len);
        _printf("Welcome to the %s School !!\n", "Holberton");
        _printf("Negative:[%d]\n", -7625344);
        _printf("%d x %d = %d\n", a, b, (a * b));
        _printf("Character:[%c]\n", 'H');
        _printf("Percent:[%%]\n");
        _printf("Unknown:[%r]\n");

        return (0);
}
```
And the output should look like this :
```
The principle of evolution is much faster in computers than in bipeds :)
Length:[73]
Welcome to the Holberton School !!
Negative:[-7625344]
3 x 5 = 15
Character:[H]
Percent:[%]
Unknown:[%r]
```
## Man page

Execution : man ./man_3_printf

![Mon image](https://imgur.com/7s6Ezbb.png)

## Authors

[Hilliass Soumahill](https://github.com/HLS-976), [Gabriel Cohen](https://github.com/GabrielCoh).
