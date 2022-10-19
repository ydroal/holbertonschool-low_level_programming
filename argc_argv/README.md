# C - argc, argv

This is the project with C.
learn about argc / argv and how to compile with unused variables.

## General

* How to use arguments passed to your program
* What are two prototypes of main that you know of, and in which case do you use one or the other
* How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

## Tasks

### 0. 
Write a program that prints its name, followed by a new line.
    * If you rename the program, it will print the new name, without having to compile it again
    * You should not remove the path before the name of the program

File: 0-whatsmyname.c

### 1. 
Write a program that prints the number of arguments passed into it.

File: 1-args.c
    
### 2.
Write a program that prints all arguments it receives.

    * All arguments should be printed, including the first one
    * Only print one argument per line, ending with a new line

File: 2-args.c

### 3.
Write a program that multiplies two numbers.

    * Your program should print the result of the multiplication, followed by a new line
    * You can assume that the two numbers and result of the multiplication can be stored in an integer
    * If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

File: 3-mul.c

### 4.
Write a program that adds positive numbers.

    * Print the result, followed by a new line
    * If no number is passed to the program, print 0, followed by a new line
    * If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
    * You can assume that numbers and the addition of all the numbers can be stored in an int

File: 4-add.c

## Repo
* GitHub repository: holbertonschool-low_level_programming
* Directory: argc_argv

