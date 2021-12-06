<p aling="center">
	<img  src="https://i0.wp.com/colaboratorio.net/wp-content/uploads/2017/01/bash.jpg?fit=2000%2C1200&ssl=1" 
	width="400" height="200">
</p>

# **_Simple Shell Project_**

In this repository you will find our version of a simple UNIX commandinterpreter: Shell.

## Man Page

- To see the shell manual you must execute this command.

## Environment

```
 This project has been tested on `Ubuntu 14.06.6 LTS`
```

## Instructions

```
 *Compiling the program: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

*Interactive mode:

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

*Non-interactie mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

```

## Files

| **NAME**                   | CONTENT                                                                |
| -------------------------- | ---------------------------------------------------------------------- |
| [_README.md_](./README.md) | It contains all the information about the project and all it's content |
| [_shell.c_](./shell.c)     | Is the main function of our project.                                   |
| [_shell.h_](./shell.h)     | It's the header of our project.                                        |
| [_prompt_](./prompt.c)     | Function that shows the '$' as our promp                               |
| [_AUTHORS_](./AUTHORS)     | File in which the people who contributed to this project are listed.   |

## Flowchart

### Requirements

## General

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 14.04 LTS
Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
No more than 5 functions per file
All your header files should be include guarded
Use system calls only when you need to (why?)
List of allowed functions and system calls

## Authors

- [_Joana Casallas_](https://github.com/joacasallas) -
- [_Edisson Osorio_](https://github.com/edisson11osorio) - edissonosi12@gmail.com
