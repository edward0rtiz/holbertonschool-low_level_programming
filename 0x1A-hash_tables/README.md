# 0x1A C - Hash tables :pencil2:

> C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. This projects covers the concepts of hash tables

At the end of this project, I was able to solve these questions:
  
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

## Tasks :heavy_check_mark:

0. Function that creates a hash table.
1. Hash function implementing the djb2 algorithm
2. Function that gives you the index of a key.
3. Function that adds an element to the hash table.
4. Function that retrieves a value associated with a key.
5. Function that prints a hash table.
6. Function that deletes a hash table.
7. Rewrite the previous functions using these data structures for hash tables ordered in PHP (task in progress)


## Results :chart_with_upwards_trend:

| Filename |
| ------ |
| [0-hash_table_create.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x1A-hash_tables/0-hash_table_create.c)|
| [1-djb2.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x1A-hash_tables/1-djb2.c)|
| [2-key_index.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x1A-hash_tables/2-key_index.c)|
| [3-hash_table_set.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x1A-hash_tables/3-hash_table_set.c)|
| [4-hash_table_get.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x1A-hash_tables/4-hash_table_get.c)|
| [5-hash_table_print.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x1A-hash_tables/5-hash_table_print.c)|
| [6-hash_table_delete.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x1A-hash_tables/6-hash_table_delete.c)|
| [100-sorted_hash_table.c](https://github.com/edward0rtiz/holbertonschool-low_level_programming/blob/master/0x1A-hash_tables/100-sorted_hash_table.c)|

## Additional info :construction:
### Resources

- GLIBC 2.24
- gcc 4.8.4
- betty linter 0.32
- Valgrind



### Try It On Your Machine computer:	
```bash
git clone https://github.com/edward0rtiz/holbertonschool-low_level_programming.git
cd 0x1A-hash_tables
gcc -Wall -pedantic -Werror -Wextra /PATH/main_files/MAIN_FILE.c FILENAME.c -o NEW_FILENAME
```
