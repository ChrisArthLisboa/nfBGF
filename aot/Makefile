
CC=cc
C_FLAGS=-Wall 
C_FLAGS_D=-Werror -g -fsanitize=address
BUILD=build
SRC=src

.PHONY: all setup clean

all: setup main.o


setup: 
	mkdir -p ${BUILD}/{obj,sobj}


clean:
	rm -r ${BUILD}

main.o: ${SRC}/main.c
	${CC} ${C_FLAGS} ${C_FLAGS_D} ${SRC}/main.c -o ${BUILD}/obj/main.o

