ifeq ($(shell [[ $(MAKE_VERSION) =~ "4." ]]; echo $$?), 0)
# $(info "make version passed")
else
$(error "update make to version 4")
endif

.DEFAULT_GOAL = all

CC = gcc
CFLAGS = -Wall -g

SRC = main.c util.c info.c
OBJ = $(patsubst %.c, %.o, $(SRC))
DEP = $(patsubst %.c, %.d, $(SRC))

SHOW ?= 0
ifeq ($(SHOW),1)
$(info src files $(SRC))
$(info obj files $(OBJ))
$(info dep files $(DEP))
endif

-include $(DEP)
# $(file <info.d)

.PHONY: all clean

all: main

main: $(OBJ) $(DEP)
	$(CC) $(OBJ) -o main

%.d: %.c
	$(CC) -M $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-@rm -f $(OBJ) $(DEP) main

