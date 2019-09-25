CC = gcc
CFLAGS = -std=c99 -g
LDFLAGS = -lm
EXEC = exo3

all: $(EXEC)

$(EXEC): main.o
		$(CC) -o $(EXEC) *.o $(LDFLAGS)

main.o : main.c
	$(CC) -o $@ -c $< $(CFLAGS)