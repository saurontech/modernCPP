PRJS = find_if init_list tuple unique_ptr weak_ptr

all: ${PRJS}

find_if: find_if.cc
	g++ -std=c++17 -o $@ $^
		
init_list: init_list.cc
	g++ -std=c++17 -o $@ $^

tuple: tuple.cc
	g++ -std=c++17 -o $@ $^

unique_ptr: unique_ptr.cc
	g++ -o $@ $^

weak_ptr: weak_ptr.cc
	g++ -o $@ $^

clean:
	rm -f ${PRJS}
