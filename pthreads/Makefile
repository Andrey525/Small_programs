all: prog

prog: main.c
	gcc -Wall -Werror $< -o $@ -lpthread

clean:
	rm -rf prog

.PHONY: all clean