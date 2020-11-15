CC = cc
default: main

main: libmymath.a
	$(CC) main.c libmymath.a -o myprogram

libmymath.a: mymath.o
	ar -rcv $@ $^
