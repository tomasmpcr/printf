# Requirements
- Allowed editors: vi, vim, emacs - All your files will be compiled on Ubuntu 14.04 LTS - Your programs and functions will be compiled with gcc 4.8.4 using the 
flags -Wall -Werror -Wextra and -pedantic - All your files should end with a new line - A README.md file, at the root of the folder of the project is mandatory - 
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl - You are not allowed to use global variables - No more than 5 
functions per file - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to 
your repo (if you do we wont take them into account). - We will use our own main.c files at compilation. Our main.c files might be different from the one shown in 
the examples - The prototypes of all your functions should be included in your header file called holberton.h - Dont forget to push your header file - All your 
header files should be include guarded - Note that we will not provide the _putchar function for this project
#  Compilation
- Your code will be compiled this way:
    
    ```
    $ gcc -Wall -Werror -Wextra -pedantic *.c
    
    ```
    
- As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all 
your tests files including main functions)
    
- Our main files will include your main header file (holberton.h): #include holberton.h
    
- You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf
    
- We strongly encourage you to work all together on a set of tests
    
- If the task does not specify what to do with an edge case, do the same as printf
#
#  Tasks! 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life mandatory
Write a function that produces output according to a format. ``` Prototype: int _printf(const char *format, ...); ``` - Returns: the number of characters printed 
(excluding the null byte used to end output to strings) write output to stdout, the standard output stream format is a character string. The format string is 
composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
    
    c 
    s
    %
    
- You dont have to reproduce the buffer handling of the C library printf function
    
- You dont have to handle the flag characters
    
- You dont have to handle field width
    
- You dont have to handle precision
    
- You dont have to handle the length modifiers
## 1. Education is when you read the fine print. Experience is what you get if you don't mandatory
Handle the following conversion specifiers:
``` 
d 
i
```
- You dont have to handle the flag characters - You dont have to handle field width - You dont have to 
handle precision - You dont have to handle the length modifiers
# 2. Just because it's in print doesn't mean it's the gospel
Create a man page for your function.


# 14. Print is the sharpest and the strongest weapon of our party

Handle the following custom conversion specifier:

- r : prints the reversed string

# 15. The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:

- R: prints the rot13'ed string

# Federico Blengio && Tomas Martinez Holberton School UY 2021
