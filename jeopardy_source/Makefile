CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LFLAGS = 
LIBS = 
SOURCES = jeopardy.c questions.c players.c
OBJECTS = $(patsubst %.c,build/%.o,$(SOURCES))
EXE = jeopardy.exe
.PHONY: clean help

jeopardy.exe : build/jeopardy.o build/questions.o build/players.o
	$(CC) $(CFLAGS) $^ $(LIBS) -o $@ 

build/%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(EXE)

clean:
	rm -f build/*.o $(EXE) *~

cleanup:
	rm -f build/*.o *~

help:
	@echo "Valid targets:"
	@echo "  all:    generates all binary files"
	@echo "  clean:  removes .o and .exe files"
