# 0x15 C - File I/O :pencil2:

> C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. This projects covers bit manipulation

At the end of this project, I was able to solve this questions:
  
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call

## Tasks :heavy_check_mark:

0. Function that reads a text file and prints it to the POSIX standard output.
1. Function that creates a file.
2. Function that appends text at the end of a file.
3. Program that copies the content of a file to another file.
4. Program that displays the information contained in the ELF header at the start of an ELF file. (Work in progress)

## Results :chart_with_upwards_trend:

| Filename |
| ------ |
| [0-read_textfile.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x15-file_io/0-read_textfile.c)|
| [1-create_file.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x15-file_io/1-create_file.c)|
| [2-append_text_to_file.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x15-file_io/2-append_text_to_file.c)|
| [3-cp.c](hhttps://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x15-file_io/3-cp.c)|
| [100-elf_header.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x15-file_io/100-elf_header.c)|


## Additional info :construction:
### Resources

- GLIBC 2.24
- gcc 4.8.4
- betty linter 0.32



### Try It On Your Machine computer:	
```bash
git clone https://github.com/edward0rtiz/holbertonschool-low_level_programming.git
cd 0x15-file_io
gcc -Wall -pedantic -Werror -Wextra /PATH/main_files/MAIN_FILE.c FILENAME.c -o NEW_FILENAME
```
