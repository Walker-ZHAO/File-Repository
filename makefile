OBJ=main
CC=gcc
SRC=main.c
$(OBJ):$(SRC)
	$(CC) $^ -o $@
clear:
	rm -f $(OBJ)
