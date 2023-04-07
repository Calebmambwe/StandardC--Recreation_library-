LNK		= src
SRC		= $(LNK)/*.c
HEAD 	= inc

all: makelib

makelib:
	gcc main.c -I $(HEAD) $(SRC) && ./a.out \1

clean:
	/bin/rm -f *.o