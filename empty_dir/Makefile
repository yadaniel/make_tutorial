# OPTION can be overriden with
# OPTION=b make
# make OPTION=b
OPTION ?= a

# VAR can be overriden only with
# make VAR=bar
VAR = foo

ifeq ($(wildcard $(OPTION)/.),)
$(warning "empty directory for option $(OPTION)")
$(error "... stop")
endif

.phony: debug

debug:
	@echo $(OPTION)
	@echo $(VAR)

