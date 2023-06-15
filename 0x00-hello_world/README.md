gcc $CFILE -E -o c : a script that runs a C file through the preprocessor and save the result into another file.


gcc $CFILE -c : a script that compiles a C file but does not link and the output has an extension of .o.

gcc $CFILE -S :  a script that generates the assembly code of a C code and save it in an output file output file should be named the same as the C file, but with the extension .s instead of .c.

gcc $CFILE -o cisfun :  a script that compiles a C file and creates an executable named cisfun.
