PRJS = find_if init_list tuple

all: ${PRJS}

find_if: find_if.cc
	g++ -std=c++20 -o $@ $^
		
init_list: init_list.cc
	g++ -std=c++20 -o $@ $^

tuple: tuple.cc
	g++ -std=c++20 -o $@ $^

