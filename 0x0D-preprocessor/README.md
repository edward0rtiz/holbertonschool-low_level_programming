# 0x0D C - Preprocessor :pencil2:

> C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. This projects covers the concept of preprocessor and how it works

  At the end of this project, I am able to explain to anyone, without the help of Google:

* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files
  _pu
## Tasks :heavy_check_mark:

0. Create a header file that defines a macro named SIZE as an abbreviation for the token 1024
1.Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
2. program that prints the name of the file it was compiled from.
3. Function-like macro ABS(x) that computes the absolute value of a number x.
4. Function-like macro SUM(x, y) that computes the sum of the numbers x and y.
5. Write a program that can print Hello, Holberton uisng preprocessor guidelines

## Results :chart_with_upwards_trend:

| Filename |
| ------ |
| [0-object_like_macro.h](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/0-object_like_macro.h)|
| [1-pi.h](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/1-pi.h)|
| [2-main.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/2-main.c)|
| [3-function_like_macro.h](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/3-function_like_macro.h)|
| [4-sum.h](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/4-sum.h)|
| [101-preprocessor_abuse.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/101-preprocessor_abuse.c)| (Work in progress)

## Additional info :construction:
### Resources

- GLIBC 2.24
- gcc 4.8.4
- betty linter 0.32



### Try It On Your Machine computer:	
```bash
git clone https://github.com/edward0rtiz/holbertonschool-low_level_programming.git
cd 0x0D-preprocessor
gcc -Wall -pedantic -Werror -Wextra _putchar.c /PATH/main_files/MAIN_FILE.c FILENAME.c -o NEW_FILENAME
```
