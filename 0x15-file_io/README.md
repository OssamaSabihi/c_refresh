 - File I/O

This project focuses on **File I/O in C**, with an emphasis on the three standard file descriptors, their POSIX names, and the difference between **functions** and **system calls**.

Through these tasks, I practiced using the `open`, `close`, `read`, and `write` system calls, as well as file access flags such as `O_RDONLY`, `O_WRONLY`, and `O_RDWR`. I also worked with creating, reading, writing, appending to, and setting permissions for files.

## Header File

* [`main.h`](./main.h) — Header file containing the prototypes for all functions in the project.

| File                      | Prototype                                                            |
| ------------------------- | -------------------------------------------------------------------- |
| `0-read_textfile.c`       | `ssize_t read_textfile(const char *filename, size_t letters);`       |
| `1-create_file.c`         | `int create_file(const char *filename, char *text_content);`         |
| `2-append_text_to_file.c` | `int append_text_to_file(const char *filename, char *text_content);` |

## Tasks

### 0. Tread lightly, she is near

[`0-read_textfile.c`](./0-read_textfile.c) contains a function that reads a text file and prints its contents to the POSIX standard output.

* `letters` specifies the maximum number of bytes to read and print.
* Returns `0` if:

  * `filename` is `NULL`.
  * The file cannot be opened.
  * The file cannot be read.
  * `write` fails or writes fewer bytes than expected.
* Returns the actual number of bytes successfully read and printed otherwise.

### 1. Under the snow

[`1-create_file.c`](./1-create_file.c) contains a function that creates and writes to a file.

* `filename` is the name of the file to create.
* `text_content` is the null-terminated string to write.
* If `text_content` is `NULL`, an empty file is created.
* New files are created with permissions `rw-------` (`0600`).
* Existing file permissions are not changed.
* Existing files are truncated.
* Returns `-1` if `filename` is `NULL` or an error occurs.
* Returns `1` on success.

### 2. Speak gently, she can hear

[`2-append_text_to_file.c`](./2-append_text_to_file.c) contains a function that appends text to the end of an existing file.

* Does not create the file if it does not exist.
* If `text_content` is `NULL`, nothing is appended.
* Returns `-1` if:

  * `filename` is `NULL`.
  * The file does not exist.
  * The user does not have write permissions.
  * An error occurs.
* Returns `1` on success.

### 3. cp

[`3-cp.c`](./3-cp.c) is a program that copies the contents of one file into another.

**Usage:**

```bash
cp file_from file_to
```

Behavior:

* If `file_to` exists, it is truncated before writing.
* A newly created `file_to` has permissions `rw-rw-r--` (`0664`).
* Existing permissions are preserved when `file_to` already exists.
* Incorrect argument count prints:
  `Usage: cp file_from file_to`
  and exits with status `97`.
* If `file_from` cannot be read, prints:
  `Error: Can't read from file NAME_OF_THE_FILE`
  and exits with status `98`.
* If `file_to` cannot be created or writing fails, prints:
  `Error: Can't write to NAME_OF_THE_FILE`
  and exits with status `99`.
* If a file descriptor cannot be closed, prints:
  `Error: Can't close fd FD_VALUE`
  and exits with status `100`.

### 4. elf

[`100-elf_header.c`](./100-elf_header.c) is a program that displays information contained in the ELF header of an ELF file.

**Usage:**

```bash
elf_header elf_filename
```

The program displays:

* Magic
* Class
* Data
* Version
* OS/ABI
* ABI Version
* Type
* Entry point address

The output format follows `readelf -h` (version `2.26.1`).

If an error occurs or the provided file is not an ELF file, an appropriate error message is printed to `stderr` and the program exits with status `98`.

## Concepts Learned

* POSIX standard file descriptors
* System calls vs. library functions
* `open()`, `close()`, `read()`, and `write()`
* File access modes and flags
* File permissions
* File creation and truncation
* Reading and writing files
* Appending data to files
* Copying files
* Understanding ELF file headers

