CC = gcc
CFLAGS = -Wall -Werror -MMD

BIN_DIR = bin
OBJ_DIR = obj
SRC_DIR = src

$(BIN_DIR)/Chess: chess.o tools.o
	$(CC) $(CFLAGS) -o chess.o tools.o
$(OBJ_DIR)/chess.o: chess.c
	$(CC) $(CFLAGS) -o chess.c
$(OBJ_DIR)/tools.o: tools.c
	$(CC) $(CFLAGS) -o tools.c
clean:
	rm -rf *.o