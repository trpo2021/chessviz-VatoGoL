CC = gcc
CFLAGS = -Wall -Wextra -Werror -MMD

BIN_DIR = bin
OBJ_DIR = obj
SRC_DIR = src

$(SRC_DIR)/chess/Chess: $(OBJ_DIR)/$(SRC_DIR)/chess/chess.o $(OBJ_DIR)/$(SRC_DIR)libtools/tools.o
	$(CC) $(CFLAGS) -o $(SRC_DIR)/chess/Chess $(OBJ_DIR)/$(SRC_DIR)/chess/chess.o $(OBJ_DIR)/$(SRC_DIR)libtools/tools.o
$(OBJ_DIR)/$(SRC_DIR)/chess/chess.o : $(SRC_DIR)/hello/chess.c
	$(CC) $(CFLAGS) -o $(OBJ_DIR)/$(SRC_DIR)/chess/chess.o $(SRC_DIR)/hello/chess.c
$(OBJ_DIR)/$(SRC_DIR)/libchess/tools.o: $(SRC_DIR)/libchess/tools.c
	$(CC) $(CFLAGS) -o $(OBJ_DIR)/$(SRC_DIR)/libchess/tools.o $(SRC_DIR)/libchess/tools.c
clean:
	rm -rf *.o