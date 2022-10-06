# C - Makefiles

This is the project with C.
learn about Makefiles.

## Learning Objectives

* What are make, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

## Tasks

### 0. make -f 0-Makefile
Create your first Makefile.
  * name of the executable: school
  * rules: all
    The all rule builds your executable
  * variables: none

### 1. make -f 1-Makefile
Requirements:
  * name of the executable: school
  * rules: all
    The all rule builds your executable
  * variables: CC, SRC
    CC: the compiler to be used
    SRC: the .c files

### 2. make -f 2-Makefile
Create your first useful Makefile.
Requirements:
  * name of the executable: school
  * rules: all
    The all rule builds your executable
  * variables: CC, SRC, OBJ, NAME
    CC: the compiler to be used
    SRC: the .c files
    OBJ: the .o files
    NAME: the name of the executable
  * The all rule should recompile only the updated source files
  * You are not allowed to have a list of all the .o files

### 3. make -f 3-Makefile
Requirements:
