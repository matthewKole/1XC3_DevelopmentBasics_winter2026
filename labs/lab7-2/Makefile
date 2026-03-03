CC = gcc
CFLAGS = -Wall -g
OBJ = main.o LetterGrade.o

all: myExe

myExe: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o myExe

main.o: main.c LetterGrade.h
	$(CC) $(CFLAGS) -c main.c

LetterGrade.o: LetterGrade.c LetterGrade.h
	$(CC) $(CFLAGS) -c LetterGrade.c

clean:
	rm -f *.o myExe