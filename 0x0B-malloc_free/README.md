# 0x0B C - malloc, free :pencil2:

> C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. This projects covers allocation with malloc and free allocation of memory

  At the end of this project, I am able to explain to anyone, without the help of Google:

* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak
  
## Tasks :heavy_check_mark:

0. Function that creates an array of chars, and initializes it with a specific char.
1. Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2. Function that concatenates two strings.
3. Function that returns a pointer to a 2 dimensional array of integers.
4. Function that frees a 2 dimensional grid previously created by your alloc_grid function.
5. Function that concatenates all the arguments of your program.
6. Function that splits a string into words.


## Results :chart_with_upwards_trend:

| Filename |
| ------ |
| [0-create_array.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c)|
| [1-strdup.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c)|
| [2-str_concat.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c)|
| [3-alloc_grid.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c)|
| [4-free_grid.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c)|
| [5-argstostr.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/5-argstostr.c)|
| [100-strtow.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/100-strtow.c)| (Work in progress)

## Additional info :construction:
### Resources

- GLIBC 2.24
- gcc 4.8.4
- betty linter 0.32
- Valgrind


### Try It On Your Machine computer:	
```bash
git clone https://github.com/edward0rtiz/holbertonschool-low_level_programming.git
cd 0x0B-malloc_free
gcc -Wall -pedantic -Werror -Wextra /PATH/main_files/MAIN_FILE.c FILENAME.c -o NEW_FILENAME
```
