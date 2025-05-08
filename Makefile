# Nom du compilateur
CC = gcc

# Options de compilation
CFLAGS = -Wall -Wextra -g

# Recherche automatique de tous les .c
SRCS = $(wildcard *.c)

# Convertit tous les .c en .o
OBJS = $(SRCS:.c=.o)

# Nom de l'exécutable final
EXEC = monprogramme

# Cible par défaut
all: $(EXEC)

# Création de l'exécutable à partir des objets
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Nettoyage
clean:
	rm -f *.o $(EXEC)

.PHONY: all clean
