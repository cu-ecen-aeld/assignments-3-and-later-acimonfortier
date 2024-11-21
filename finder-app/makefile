CC=$(CROSS_COMPILE)gcc
CFLAGS=-I.

.PHONY: clean

all: writer


%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f *.o
	rm -f writer

