CC := cc

FLAGS = -Wall -Wextra -Wconversion -Wpedantic

unsafe:
	$(CC) stack_unsafe.c -o exp_stack $(FLAGS)
	$(CC) heap_unsafe.c -o exp_heap $(FLAGS)

safe:
	$(CC) stack_safe.c safe_stack $(FLAGS)
	$(CC) heap_safe.c -o safe_heap $(FLAGS)

