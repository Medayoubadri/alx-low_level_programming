
# 0x1A. C - Hash tables

## 📋 Table of Contents
- [General Info](#general-info)
- [Requirements](#requirements)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Function Descriptions](#function-descriptions)
- [Author](#author)

## 📖 General Info
In this project, we dive into the world of **Hash Tables**, one of the most fundamental data structures for efficient data storage and retrieval. We implement basic hash tables using chaining to resolve collisions and sorted hash tables for those times when you need both speed and order.

Hash tables allow you to store key-value pairs, where each key maps to a unique value, but here we add a twist by maintaining the sorted order of keys in some cases.

## 🛠 Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 20.04 LTS** using `gcc` with the options:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line.
- The code should follow the **Betty** coding style and be checked with `betty-style.pl` and `betty-doc.pl`.
- No global variables allowed.
- No more than 5 functions per file unless otherwise specified.
- Header files should be include-guarded.

## 📂 Project Structure

| Filename                    | Description                                                                 |
| ----------------------------|-----------------------------------------------------------------------------|
| `0-hash_table_create.c`      | Function to create a hash table.                                             |
| `1-djb2.c`                   | Implementation of the djb2 hash function.                                    |
| `2-key_index.c`              | Function to compute the index of a key in the hash table.                    |
| `3-hash_table_set.c`         | Adds an element to the hash table, handling collisions by chaining.          |
| `4-hash_table_get.c`         | Retrieves a value associated with a key.                                     |
| `5-hash_table_print.c`       | Prints a hash table.                                                         |
| `6-hash_table_delete.c`      | Deletes a hash table and frees memory.                                       |
| `100-sorted_hash_table.c`    | Implementation of sorted hash tables with ordered key-value pairs.           |
| `hash_tables.h`              | Header file containing all function prototypes and structure definitions.    |



## 🛠 Usage

Here is an example of how to run the hash table programs:

```bash
./output_file
```

## 🔧 Function Descriptions

### 0. hash_table_create
Creates a hash table with a given size.

### 1. djb2
Implements the djb2 algorithm to generate a hash value for a string.

### 2. key_index
Uses the djb2 hash function to compute the index for a given key.

### 3. hash_table_set
Adds or updates a key/value pair in the hash table, handling collisions using chaining.

### 4. hash_table_get
Retrieves the value associated with a specific key.

### 5. hash_table_print
Prints the contents of the hash table.

### 6. hash_table_delete
Deletes the hash table and frees all memory.

### 100. Sorted Hash Table
Implements a hash table that stores key-value pairs in sorted order.

## 👨‍💻 Author
**[MedayouBadri](https://github.com/medayoubadri)**

## Fun fact
The Python dictionary (which is essentially a hash table) is optimized to access data in constant time. But did you know that Python 3.7 officially made dictionaries ordered by default? This means Python dictionaries now keep the insertion order, much like the sorted hash table we're implementing here. So, next time you're using a dictionary in Python, you're essentially using a more advanced version of the same data structure you're creating in C!

It’s a bit like your sorted hash table but with a little Python magic! 😎