# Makefile para projeto_alunos
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I./include
OBJDIR = obj
SRCDIR = src
TARGET = gestao_alunos

OBJS = $(OBJDIR)/main.o $(OBJDIR)/aluno.o $(OBJDIR)/lista.o

# Regra principal
$(TARGET): $(OBJS)
	$(CC) $^ -o $@

# Compilar cada .o
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Criar pasta obj se não existir
$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR) $(TARGET)

.PHONY: clean