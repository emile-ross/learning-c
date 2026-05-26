# basic memory management

allocating memory for buffers

## void-ptr.c

the void-ptr.c file allocates memory with the void* data type
this means the data pointed to by the pointer could be anything.  It can be a char* an int a long and so on..

we are treating it as a string but it's still declared as a void*
 
## f-malloc.c

the f-malloc file makes basic use of the malloc() function
it allocates buffers based on the size of the data it contains
