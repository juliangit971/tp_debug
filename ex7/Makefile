CC=gcc
TARGET=program.out



all: $(TARGET)
 
program.out: lock.c 
	$(CC) -g $^ -o $@


clean:
	rm -fr $(TARGET)