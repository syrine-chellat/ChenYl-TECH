# Nom du compilateur
CC = gcc

# Options de compilation
CFLAGS = -Wall -Wextra -g

# Recherche automatique de tous les .c
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
EXEC = monprogramme

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Règle explicite pour générer les .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(EXEC)

.PHONY: all clean
