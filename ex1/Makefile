CC=gcc
CFLAGS=-O3 -g
LDFLAGS=-Wl,-rpath="$(PWD)"
TARGET=program.out



all: $(TARGET)
 
program.out: main.c libppm.so
	$(CC) $(CFLAGS) $(LDFLAGS) main.c -lppm -L. -o $@


libppm.so : ppm.c ppm.h
	$(CC) $(CFLAGS) -fpic -shared $^ -o $@
 

clean:
	rm -fr $(TARGET) *.so