BIN_DIR = /usr/bin
CC = g++
CFLAGS = 

all: clean RaspberryPiRAMAdder RaspberryPiRAMRemover

RaspberryPiRAMAdder: main.cpp
	$(CC) -o RaspberryPiRAMAdder main.cpp $(CFLAGS)

RaspberryPiRAMRemover: remover.cpp
	$(CC) -o RaspberryPiRAMRemover remover.cpp $(CFLAGS)
clean:
	rm -f RaspberryPiRAMAdder RaspberryPiRAMRemover
