CXX=g++
CFLAGS=-Wall -O -g
CXXFLAGS=
INCLUDE=-I ./staticlib/include
TARGET=static_sequence_list_test dynamic_sequence_list_test singly_linked_list_test double_linked_list_test circular_singly_linked_list_test circular_double_linked_list_test static_linked_list_test
LIBVAR=-llist
LIBPATH=-L./staticlib/lib/
vpath %.cpp ./test/
vpath %.h ./staticlib/include

OBJS=static_sequence_list_test.o dynamic_sequence_list_test.o singly_linked_list_test.o double_linked_list_test.o circular_singly_linked_list_test.o circular_double_linked_list_test.o static_linked_list_test.o

#edit:$(OBJS)
#	$(CXX) $(CXXFLAGS) $(INCLUDE) -o edit $(OBJS)

static_sequence_list_test.o:static_sequence_list_test.cpp static_sequence_list.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^
dynamic_sequence_list_test.o:dynamic_sequence_list_test.cpp dynamic_sequence_list.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^
singly_linked_list_test.o:singly_linked_list_test.cpp singly_linked_list.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^
double_linked_list_test.o:double_linked_list_test.cpp double_linked_list.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^
circular_singly_linked_list_test.o:circular_singly_linked_list_test.cpp circular_singly_linked_list.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^
circular_double_linked_list_test.o:circular_double_linked_list_test.cpp circular_double_linked_list.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^
static_linked_list_test.o:static_linked_list_test.cpp static_linked_list.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^

all:$(OBJS)
	cd ./staticlib/ && make all
#	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $(TARGET) $(OBJS) $(LIBPATH) $(LIBVAR)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o static_sequence_list_test static_sequence_list_test.o $(LIBPATH) $(LIBVAR)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o dynamic_sequence_list_test dynamic_sequence_list_test.o $(LIBPATH) $(LIBVAR)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o singly_linked_list_test singly_linked_list_test.o $(LIBPATH) $(LIBVAR)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o double_linked_list_test double_linked_list_test.o $(LIBPATH) $(LIBVAR)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o circular_singly_linked_list_test circular_singly_linked_list_test.o $(LIBPATH) $(LIBVAR)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o circular_double_linked_list_test circular_double_linked_list_test.o $(LIBPATH) $(LIBVAR)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o static_linked_list_test static_linked_list_test.o $(LIBPATH) $(LIBVAR)
	mv $(TARGET) ./bin

./PHONY:
	clean
clean:
	-rm -f *.o
	-rm -f $(TARGET)
	cd ./staticlib && make clean
