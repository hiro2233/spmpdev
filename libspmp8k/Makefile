#
# libspmp8k
#
# root makefile
#
# -> windows version, we dont build the tools since this would require mingw gcc
#

SPMP8K_BINDIR	= ./bin

all: build-lib build-demos
# build-tools

clean:
	make -C libspmp8k clean
	make -C demos clean
	make -C tools clean

build-lib:
	make -C libspmp8k

build-demos:
	make -C demos

#build-tools:
#	make -C tools

