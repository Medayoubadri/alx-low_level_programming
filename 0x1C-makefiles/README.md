
# 0x1C. C - Makefiles

## Resources
- [Makefile basics](https://makefiletutorial.com/)
- [GNU Make documentation](https://www.gnu.org/software/make/manual/make.html)
- Understanding implicit and explicit rules in Makefiles.

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone:
- What are `make`, Makefiles
- How to use rules in Makefiles
- What are macros and how to use them
- What are implicit and explicit rules

## Project Tasks
### Mandatory Tasks
1. **0. make -f 0-Makefile**
   - Create a Makefile that builds an executable `school`.

2. **1. make -f 1-Makefile**
   - Add variables (`CC` and `SRC`) for compiler and source files.

3. **2. make -f 2-Makefile**
   - Add rules to recompile only updated files.
   - Clean up unnecessary files.

4. **3. make -f 3-Makefile**
   - Add rules: `clean`, `oclean`, `fclean`, and `re` for better management.

5. **4. A complete Makefile**
   - Use `CFLAGS` and extend the Makefile to handle all requirements.

6. **100. make -f 100-Makefile**
   - Advanced Makefile with strict constraints: limited variable usage, no implicit rules, and dynamic dependency management.

### Example Usage
```bash
$ make -f 3-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
$ ./school
Output of the program
$ make clean -f 3-Makefile
rm -f *~ school
$ make re -f 3-Makefile
rm -f main.o school.o
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
```

## Tips
- Always start with `make all` to ensure the executable builds correctly.
- Use `make clean` to avoid clutter in your directory.
- Keep your Makefiles DRY (Don’t Repeat Yourself) by using variables.

---

### **Fun Fact:** 
The first version of `make` was written by Stuart Feldman in 1976. It's older than many of us!