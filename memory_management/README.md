# basic memory management

allocating memory for buffers

## void_ptr.c

the void-ptr.c file allocates memory with the void* data type
this means the data pointed to by the pointer could be anything.  It can be a char* an int a long and so on..

we are treating it as a string but it's still declared as a void*
 
## f_malloc.c

the f-malloc file makes basic use of the malloc() function
it allocates buffers based on the size of the data it contains

## pointer_math.c

Calculate the size of the buffer.  The buffer was declared as void*.  

The buffer is then printed out to the screen by casting is as a char* before printing it.
