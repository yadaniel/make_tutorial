# --just-print, -n
# --no-builtin-rules, -r
# --no-builtin-variables, -R

# $@	first target (filename)
# $<	first prerequisite (filename)
# $^	unique prerequisite
# $+	complete prerequisite
# $?	prerequisite which are newer than target
# $%	archive member element	

GCC := $(shell which gcc)
CLANG := $(shell which clang)

SOURCES := $(sources *.c)

# VPATH variable, add directories to search for any filetype
VPATH += "."
# vpath directive, add directories by filetype
vpath %.c srcX
vpath %.h incX

all:
	echo $(shell which gcc)
	$(CC) --version
	echo $(SOURCES)

#include "base.mk"	# base.mk required, error when not found
#-include "clean.mk" # clean.mk ignored when no found

