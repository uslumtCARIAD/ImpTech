ACFLAGS ?= -v1 -k 
ACXX    ?= $(PWD)/ag++ --data_joinpoints --builtin_operators
export ACXX

ACTESTS = $(filter-out Makefile%, $(filter-out CVS,$(notdir $(wildcard $(PWD)/examples/CodeGen/EmbeddedCoder/add/combine))))

.PHONY: $(ACTESTS)

all: testrun

test: $(addsuffix .make, $(ACTESTS))

testrun: test $(addsuffix .run, $(ACTESTS))

clean: $(addsuffix .clean, $(ACTESTS))

%.make: %
	make -C examples/CodeGen/EmbeddedCoder/add/combine

%.run: %
	make -C examples/CodeGen/EmbeddedCoder/add/combine run

%.clean: %
	make -C examples/CodeGen/EmbeddedCoder/add/combine clean
