#my make file
CC=gcc
FLAG=-Wall

all: isort txtfind
# algo make file
isort: main_isort.o isort.o isort.h
	$(CC) $(FLAG) main_isort.o isort.o -o isort

main_isort.o: main_isort.c isort.h
	$(CC) -c main_isort.c

isort.o: isort.c isort.h
	$(CC) -c isort.c
# search make file
txtfind: main_txtfind.o txtfind.o txtfind.h
	$(CC) $(FLAG) main_txtfind.o txtfind.o -o txtfind

main_txtfind.o: main_txtfind.c txtfind.h
	$(CC) -c main_txtfind.c

txtfind.o: txtfind.c txtfind.h
	$(CC) -c txtfind.c

.PHONY: clean all

clean:
	rm -f *.o txtfind isort
