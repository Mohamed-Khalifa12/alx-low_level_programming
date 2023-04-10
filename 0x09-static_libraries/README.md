# 0x09-static_libraries

<h6>In this task, we utilized all of the previously created functions and combined them into a static library. This library can now be easily used in other programs to incorporate the functionality of these functions without having to re-implement them.</h6>

1. First, we created a set of functions in separate `.c` files. These files can be found in the `C files` directory.

2. Next, we compiled each `.c` file into an object file (`.o`) using the `gcc -c` command. This generates an output file for each source file containing the compiled code, which will be used in the next step to build the static library. The command we used was:
```
gcc -c *.c
```
This command compiles all of the `.c` files in the current directory and generates a corresponding `.o` file for each.

3. Once we have all the object files, we can use the `ar` command to create a static library file (`.a`) containing all of the compiled functions. The command we used was:
```
ar -rc libmy.a *.o
```
This command creates a new static library file called `libmy.a` and archives all of the object files generated in step 2. The `-r` option tells `ar` to replace existing files in the archive, while the `-c` option tells it to create the archive if it doesn't already exist.

4. With the static library file created, we can now link it to our main program. To do this, we compile our main program (which uses the functions from the library) and link it to the library file using the `-l` flag. We also specify the directory where the library is located using the `-L` flag. The command we used was:
```
gcc test.c -L. -lmy -o test.exe
```
This command compiles the `test.c` file and links it with the `libmy.a` library file using the `-lmy` flag, which tells the compiler to look for the `libmy.a` file. The `-L`. flag specifies the directory where the library file is located (`.` means the current directory). The `-o` flag specifies the output file name, which in this case is `test.exe`.

# Resources
[UNIX/C Libraries](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html): This comprehensive guide provides information on various UNIX/C libraries, including how to use them and examples of their applications.