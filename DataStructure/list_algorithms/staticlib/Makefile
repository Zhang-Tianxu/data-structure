CXX=g++
CFLAGS=-Wall -O -g
CXXFLAGS=
INCLUDE=-I ./include
TARGET=liblist.a
LIBPATH=./lib/

vpath %.h ./include

OBJS=static_sequence_list.o dynamic_sequence_list.o singly_linked_list.o double_linked_list.o circular_singly_linked_list.o circular_double_linked_list.o static_linked_list.o
SRCS=static_sequence_list.cpp dynamic_sequence_list.cpp singly_linked_list.cpp double_linked_list.cpp circular_singly_linked_list.cpp circular_double_linked_list.cpp static_linked_list.cpp

$(OBJS):$(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^
all:$(OBJS)
	ar rcs $(TARGET) $^
	mv $(TARGET) $(LIBPATH)

./PHONY:
	clean
clean:
	-rm -f *.o
	-rm -f $(LIBPATH)*
