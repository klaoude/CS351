CC = gcc
CFLAGS = -std=c99 -g
LDFLAGS =
EXEC = Math

all: $(EXEC)

$(EXEC): main.o math.o
		$(CC) -o $(EXEC) *.o $(LDFLAGS)

math.o : math.c
		$(CC) -o $@ -c $< $(CFLAGS)

main.o : main.c
		$(CC) -o $@ -c $< $(CFLAGS)

clean:
		rm -rf *.o
