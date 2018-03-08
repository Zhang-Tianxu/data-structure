CXX=g++
CXXFLAGS=
INCLUDE1=-I ./include
INCLUDE2=-I ../../queue_algorithms/
TARGET =libtree.a
LIBPATH=./lib/

vpath %.h ./include 

OBJS=binary_tree.o binary_sort_tree.o

SRCS=binary_tree.cpp binary_sort_tree.cpp

$(OBJS):$(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDE1) $(INCLUDE2) -c $^

all:$(OBJS)
	ar rcs $(TARGET) $^
	mv $(TARGET) $(LIBPATH)

./PHONY:
	clean
clean:
	-rm -f *.o
