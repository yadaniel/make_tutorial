# GNU make tutorial

the goal of the tutorial is to summarize *GNU make* features 

## examples

## rules

### pattern rules

### syntax rules
obsolete syntax

### static pattern rules

## builtin functions

## builtin variables
VPATH
.vpath

## user variables, assignment
VAR = X   # recursive
VAR := X  # non-recursive
VAR ?= X  # set VAR to X when not VAR not defined (empty)
VAR += X  # append X to VAR

use either $(VAR) or ${VAR}

## user macros

## phony targets
.phony: all clean distclean

## debugging options
