# 0x09 C - Static libraries :pencil2:

> C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. This project covers the concept of static libraries

  At the end of this project, I am able to explain to anyone, without the help of Google:

* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm
  
## Tasks :heavy_check_mark:

0. Create the static library libholberton.a
1. Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c


## Results :chart_with_upwards_trend:

| Filename |
| ------ |
| [libholberton.a](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x09-static_libraries/libholberton.a)|
| [create_static_lib.sh](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x09-static_libraries/create_static_lib.sh)|


## Additional info :construction:
### Resources

- GLIBC 2.24
- gcc 4.8.4
- betty linter 0.32


### Try It On Your Machine computer:	
```bash
git clone https://github.com/edward0rtiz/holbertonschool-low_level_programming.git
cd 0x09-static_libraries
For create a static library:
    nm FILENAME.a
    gcc main.c -L. -lFILENAME.a -o quote
For execute a bash file then create a static library
    ./FILENAME.sh
    ar -t liball.a
```
