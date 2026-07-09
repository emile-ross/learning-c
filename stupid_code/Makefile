ALL_FLAGS = -Wall -Wextra -Wpedantic -std=c89 -Wconversion -Wshadow

GCC = gcc
ZIG = zig cc

delete = delete.c -o del
kill_p = russian_roulette.c -o kill_process


all:
	$(GCC) $(delete) $(ALL_FLAGS)
	$(GCC) $(kill_p) $(ALL_FLAGS)

zig:
	$(ZIG) $(delete) $(ALL_FLAGS)
	$(ZIG) $(kill_p) $(ALL_FLAGS) -Werror

clean:
	@rm kill_process
	@rm del
