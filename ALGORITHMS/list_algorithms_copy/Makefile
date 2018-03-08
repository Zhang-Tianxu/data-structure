CXX=g++
all:static_sequence_list_test dynamic_sequence_list_test singly_linked_list_test double_linked_list_test circular_singly_linked_list_test circular_double_linked_list_test static_linked_list_test
.PHONY:all

#the compile of static sequence list
Objects1=static_sequence_list.o static_sequence_list_test.o
static_sequence_list_test:$(Objects1)
	$(CXX) -o static_sequence_list_test $(Objects1)
static_sequence_list_test.o:static_sequence_list_test.cpp static_sequence_list.h
	$(CXX) -c static_sequence_list_test.cpp
static_sequence_list.o:static_sequence_list.cpp static_sequence_list.h
	$(CXX) -c static_sequence_list.cpp


#the compile of dynamic sequence list
Objects2=dynamic_sequence_list.o dynamic_sequence_list_test.o
dynamic_sequence_list_test:$(Objects2)
	$(CXX) -o dynamic_sequence_list_test $(Objects2)
dynamic_sequence_list_test.o:dynamic_sequence_list_test.cpp dynamic_sequence_list.h
	$(CXX) -c dynamic_sequence_list_test.cpp
dynamic_sequence_list.o:dynamic_sequence_list.cpp dynamic_sequence_list.h
	$(CXX) -c dynamic_sequence_list.cpp


#the compile of singly linked list
Objects3=singly_linked_list.o singly_linked_list_test.o
singly_linked_list_test:$(Objects3)
	$(CXX) -g -o singly_linked_list_test $(Objects3)
singly_linked_list_test.o:singly_linked_list_test.cpp singly_linked_list.h
	$(CXX) -g -c singly_linked_list_test.cpp
singly_linked_list.o:singly_linked_list.cpp singly_linked_list.h
	$(CXX) -g -c singly_linked_list.cpp

#the compile of double linked list
Objects4=double_linked_list.o double_linked_list_test.o
double_linked_list_test:$(Objects4)
	$(CXX) -o double_linked_list_test $(Objects4)
double_linked_list_test.o:double_linked_list_test.cpp double_linked_list.h
	$(CXX) -c double_linked_list_test.cpp
double_linked_list.o:double_linked_list.cpp double_linked_list.h
	$(CXX) -c double_linked_list.cpp

#the compile of circular singly linked list
Objects5=circular_singly_linked_list.o circular_singly_linked_list_test.o
circular_singly_linked_list_test:$(Objects5)
	$(CXX) -g -o circular_singly_linked_list_test $(Objects5)
circular_singly_linked_list_test.o:circular_singly_linked_list_test.cpp circular_singly_linked_list.h
	$(CXX) -g -c circular_singly_linked_list_test.cpp
circular_singly_linked_list.o:circular_singly_linked_list.cpp circular_singly_linked_list.h
	$(CXX) -g -c circular_singly_linked_list.cpp


Objects6=circular_double_linked_list.o circular_double_linked_list_test.o
circular_double_linked_list_test:$(Objects6)
	$(CXX) -g -o circular_double_linked_list_test $(Objects6)
circular_double_linked_list_test.o:circular_double_linked_list_test.cpp circular_double_linked_list.h
	$(CXX) -g -c circular_double_linked_list_test.cpp
circular_double_linked_list.o:circular_double_linked_list.cpp circular_double_linked_list.h
	$(CXX) -g -c circular_double_linked_list.cpp

Objects7=static_linked_list.o static_linked_list_test.o
static_linked_list_test:$(Objects7)
	$(CXX) -g -o static_linked_list_test $(Objects7)
static_linked_list_test.o:static_linked_list_test.cpp static_linked_list.h
	$(CXX) -g -c static_linked_list_test.cpp
static_linked_list.o:static_linked_list.cpp static_linked_list.h
	$(CXX) -g -c static_linked_list.cpp

#remove intermediate document
.PHONY:
	clean
clean:
	-rm *.o
