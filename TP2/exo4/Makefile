CC = gcc
CFLAGS = -std=c99 -g
LDFLAGS = -lX11
EXEC = Mosaique

all: $(EXEC)

$(EXEC): main.o graphlib.o dessine.o
		$(CC) -o $(EXEC) *.o $(LDFLAGS)

graphlib.o: graphlib/graphlib.c
	$(CC) -o $@ -c $< $(CFLAGS)

main.o : main.c
	$(CC) -o $@ -c $< $(CFLAGS)

dessine.o: dessine.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
		rm -rf *.o
