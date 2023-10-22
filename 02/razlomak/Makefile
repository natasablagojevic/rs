PROGRAM = razlomak
CXX = g++
CXXFLAGS = -g -std=c++20 -Wall -Wextra 

$(PROGRAM): main.o razlomak.o
	$(CXX) -o $(PROGRAM) $^
	echo "============================"

razlomak.o:	razlomak.cpp razlomak.hpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

.PHONY: clean dist 

clean:
	-rm *.o $(PROGRAM)

dist: clean 
	-tar -czvf $(PROGRAM).tar.bz2 *