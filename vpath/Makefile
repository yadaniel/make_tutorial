CC = gcc
CFLAGS = -Wall

ifeq ($(CC),clang)
$(warning "using clang")
$(error "using clang ... stop")
endif

.phony: debug clean

# uncomment one and make will find main.c and create main.o
vpath %.c src
# VPATH += src

# make will not find main.c with wildcard function
CSRC1 = $(wildcard %.c)
# find can be used for this
CSRC2 = $(shell find -iname "*.c")

# vpath will find the sources but build them in current dir
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

prog: main.o
	$(CC) -o prog main.o

debug:
	@echo $(CSRC1)
	@echo $(CSRC2)
	@echo $(CC)
	@echo $(CFLAGS)

clean:
	rm -f prog.exe main.o

