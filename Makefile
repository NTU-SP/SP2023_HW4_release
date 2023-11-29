CC = gcc
CFLAGS = -I ./ -pthread
FILE = my_pool.c
OBJ = sample bench

all: $(OBJ)

%:testcases/%/main.c
	$(CC) $(CFLAGS) $^ $(FILE) -o $@

.PHONY: clean

clean:
	rm -f $(OBJ)