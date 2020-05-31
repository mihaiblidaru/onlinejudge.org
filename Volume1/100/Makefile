CC = gcc
CFLAGS =  -O2 -pipe -ansi -DONLINE_JUDGE -Wall -Werror -Wextra -pedantic -g -fsanitize=address
LDFLAGS = -fsanitize=address
LBLIBS = -lm -lcrypt

SRC = 100.c
OBJ = $(SRC:.c=.o)
EXEC = 100

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)