CC = gcc
CFLAGS = -std=c99 -g -fno-stack-protector
LDFLAGS = -lm
EXEC = exo1

all: $(EXEC)

$(EXEC): main.o
		$(CC) -o $(EXEC) *.o $(LDFLAGS)

main.o : main.c
	$(CC) -o $@ -c $< $(CFLAGS)