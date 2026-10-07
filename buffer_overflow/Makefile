CC := cc

FLAGS = -Wall -Wextra -Wconversion -Wpedantic

unsafe:
	$(CC) stack_unsafe.c -o exp_stack $(FLAGS)
	$(CC) heap_unsafe.c -o exp_heap $(FLAGS)

safe:
	$(CC) safe.c $(OUT) $(FLAGS)

