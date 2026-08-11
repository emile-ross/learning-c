CC = gcc

SRC_FILES := main

CFLAGS = -Wall -Wextra -Wpedantic -Wconversion
OUT = -o game

FILES := $(addsuffix .c, $(SRC_FILES))
OBJ_FILES := $(addsuffix .o, $(SRC_FILES))

all:
	$(CC) $(FILES) $(OUT)

base: 
	$(CC) $(FILES) $(OUT) $(CFLAGS)

android: base
	cp -f $(N) ~/
	chmod u+x ~/$(N)
	

obj:
	$(CC) -c $(FILES) -o $(OBJ_FILES) $(CFLAGS)
