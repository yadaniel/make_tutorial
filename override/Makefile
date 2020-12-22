FOO ?= foo_default
BAR ?= bar_default

# FOO=foo;BAR=bar make
# redefines the variables from bash
# using override will ignore values from bash

override BAR = FIXED_BAR

.PHONY: all

all:
	@echo "FOO=$(FOO)"
	@echo "BAR=$(BAR)"

