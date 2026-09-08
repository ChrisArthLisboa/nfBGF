
CC=cc
C_FLAGS=-Wall 
C_FLAGS_D=-Werror -g
BUILD=build
SRC=src

.PHONY: all setup clean build

all: setup main.o


setup: 
	mkdir -p ${BUILD}/obj ${BUILD}/sobj


clean:
	rm -r ${BUILD}

release: setup
	${CC} ${C_FLAGS} ${SRC}/main.c -o ${BUILD}/release.o

main.o: ${SRC}/main.c
	${CC} ${C_FLAGS} ${C_FLAGS_D} ${SRC}/main.c -o ${BUILD}/obj/main.o

