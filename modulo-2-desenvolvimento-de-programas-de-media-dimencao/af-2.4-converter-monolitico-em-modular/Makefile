CC=gcc
CFLAGS=-Wall -Wextra -I./include
OBJS=obj/stats.o obj/main.o

programa: $(OBJS)
	$(CC) -o $@ $^

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@