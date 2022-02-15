BIN_DIR = /usr/bin
CC = g++
CFLAGS = 

all: clean RaspberryPiRAMAdder 

RaspberryPiRAMAdder: main.cpp
	$(CC) -o RaspberryPiRAMAdder main.cpp $(CFLAGS)

clean:
	rm -f RaspberryPiRAMAdder
