# 0x18. C - Dynamic libraries
- A project on Dynamic libraries in my ALX Software engineering journey

## What to expect from this project
|        Table of contents           | 
| -----------------------------------| 
|   What i learnt in this project    |
|        My header file              |
|   Project tasks(task 0 - task 13)  |

## What i learnt in this project
In this project i learnt 
- what dynamic libraries are and how different they are from static libraries
- How to create dynamic libraries,how they work and how to use them
- About the environment variable $LD_LIBRARY_PATH and how to use it
- The basic usage of nm, ldd, ldconfig

## My header file
- All the prototypes of my functions for task 10 were included in my header file main.h0000000

## Project tasks
### 0. A library is not a luxury but one of the necessities of life
Dynamic library libdynamic.so containing all the functions listed below:
![image](https://github.com/arkoaikins/alx-higher_level_programming/assets/110135034/4d36cdb0-06dd-4cf9-b192-6770589496cd)

#### Tested code with
![image](https://github.com/arkoaikins/alx-higher_level_programming/assets/110135034/48f5a90b-76de-4f21-ba98-9cc3b2074626)
![image](https://github.com/arkoaikins/alx-higher_level_programming/assets/110135034/ede4bac3-b277-4c02-8a52-c1d019d99c97)
- File:libdynamic.so

### 1. Without libraries what have we? We have no past and no future
A script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
#### Tested code with
![image](https://github.com/arkoaikins/alx-higher_level_programming/assets/110135034/c07dde3f-d6d4-4c7d-be56-3c7fd4310735)
- file: 1-create_dynamic_lib.sh

### 2. Let's call C functions from Python
A dynamic library that contains C functions that can be called from Python
#### Tested code with
![image](https://github.com/arkoaikins/alx-higher_level_programming/assets/110135034/27a97f39-d0a3-4934-97b2-860afa2dfe7c)
- file : 100-operations.so

### 3. Code injection: Win the Giga Millions!
Bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?
Mole got us a copy of the program, I downloaded it here(https://github.com/holbertonschool/0x18.c). Mole also gave us a piece of documentation:
![image](https://github.com/arkoaikins/alx-higher_level_programming/assets/110135034/68144755-5e08-431c-ac33-b516fc71395a)

- Can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
- The system is an Linux Ubuntu 16.04
- The server has internet access
-  Mole will be only able to run two commands from a shell script, without being detected by MSSi
#### Tested code with
![image](https://github.com/arkoaikins/alx-higher_level_programming/assets/110135034/b9476cb7-2d74-4002-846b-0154dfc1388b)


## Author:page_with_curl:
Edwin Arko Aikins
