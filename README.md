
# _Printf






## Description

The role of the "_printf" is to do formated printing, and the goal of this project is to make a custom printf function in see which supports different format specifier : single characters, strings, decimal number and integers in base 10.

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

Here's an example of how to use our function :
```c
#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
    int length = 0;

    length = _printf("%c\n", 'G');
    _printf("%d\n", length);

    length = _printf("Hello %s\n", "World");
    _printf("%d\n", length);

    length = _printf("%i\n", 25);
    _printf("%d\n", length);

    return (0);
}
```
And the output should look like this :
```
[Output] : G
[Output] : 2
[Output] : Hello World
[Output] : 12
[Output] : 25
[Output] : 3
```
## Man page

Execution : man ./man_3_printf

![Mon image](https://imgur.com/7s6Ezbb.png)


## Flowchart

![Mon image 2](https://imgur.com/ooxX38U.png)

## Authors

[Hilliass Soumahill](https://github.com/HLS-976), [Gabriel Cohen](https://github.com/GabrielCoh).
