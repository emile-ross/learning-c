ZIG = zig cc 
GCC = gcc

FG = -Wall -Wextra -Wpedantic

PRIME_SQRT = check_if_prime.c -o check_if_prime
TAXES = taxes.c -o taxes
DIVIDE_SRC = dividing.c -o div

base:
	$(ZIG) $(PRIME_SQRT) $(FG) -Werror
	$(ZIG) $(DIVIDE_SRC) $(FG) -Werror

gcc:
	$(GCC) $(PRIME_SQRT) $(FG)
	$(GCC) $(DIVIDE_SRC) $(FG)

all:
	$(ZIG) $(PRIME_SQRT) $(FG)
	$(ZIG) $(DIVIDE_SRC) $(FG)

clean:
	@rm check-if-prime
	@rm div
