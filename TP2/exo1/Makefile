CC = gcc
CFLAGS = -std=c99 -g
LDFLAGS =
EXEC = Multiplication

all: $(EXEC)

$(EXEC): multi.o
		$(CC) -o $(EXEC) *.o $(LDFLAGS)

multi.o : multi.c
		$(CC) -o $@ -c $< $(CFLAGS)

clean:
		rm -rf *.o
