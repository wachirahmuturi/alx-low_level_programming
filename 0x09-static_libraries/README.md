# Static libraries

Project aims to learn about static libraries in **C language**.

## Technologies
* Scripts written in Bash 5.0.17(1)
* C files are compiled using `gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0`
* C files are written according to the C90 standard
* Tested on Ubuntu 20.04 LTS

## Files
All of the following files are scripts and programs written in C:

| Filename | Description |
| -------- | ----------- |
| `libmy.a` | Static library that contains a lot of functions |
| `create_static_lib.sh` | Script that creates a static library called `liball.a` from all the `.c` files that are in the current directory |
| `main.h` | Header file that contains all the prototypes of the used functions |
