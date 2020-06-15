# 0x18 C - Dynamic libraries :pencil2:

> C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. This projects covers dynamic libraries creation and implementation

At the end of this project, I was able to solve this questions:
  
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig

## Tasks :heavy_check_mark:

0. Create the dynamic library libholberton.so.
1. Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
2. Create a dynamic library that contains C functions that can be called from Python
3. Run two commands on the same server where the Giga Millions program runs (101-make_me_win)

## Results :chart_with_upwards_trend:

| Filename |
| ------ |
| [holberton.h](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/holberton.h)|
| [libholberton.so](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libholberton.so)|
| [1-create_dynamic_lib.sh](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/1-create_dynamic_lib.sh)|
| [100-operations.so](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/100-operations.so)|
| [101-make_me_win.sh](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/101-make_me_win.sh)|

## Additional info :construction:
### Resources

- GLIBC 2.24
- gcc 4.8.4
- betty linter 0.32



### Try It On Your Machine computer:	
```bash
git clone https://github.com/edward0rtiz/holbertonschool-low_level_programming.git
cd 0x18-dynamic_libraries
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lholberton -o len
FOR TASK 1:
nm -D --defined-only liball.so
FOR TASK 100:
python3 100-tests.py 
FOR TASK 101:
./101-make_me_win.sh
```
