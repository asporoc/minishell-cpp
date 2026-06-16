# minishell-cpp

A simple Unix-like shell written in C++ for learning how command execution works.

---

## Features

- Basic REPL loop
- Command parsing (whitespace split)
- Executes system commands using `fork` + `execvp`

Example:

ls -la
echo hello
pwd


---

## Structure


main.cpp → REPL loop
parser.cpp → splits input into tokens
executor.cpp → runs commands


---

## Build

g++ -std=c++23 main.cpp parser.cpp executor.cpp -o minishell


---

## run
./minishell


- No pipes yet
- No redirections yet
- No quotes yet
- This is a learning project (early stage shell)
