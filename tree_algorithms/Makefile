CXX=g++
CXXFLAGS=
INCLUDE=-I ./staticlib/include
TARGET=binary_tree_test binary_sort_tree_test
LIBVAR=-ltree
LIBPATH=-L ./staticlib/lib

vpath %.cpp ./test/
vpath %.h ./staticlib/include

OBJS=binary_tree_test.o binary_sort_tree_test.o

binary_tree_test.o:binary_tree_test.cpp binary_tree.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^
binary_sort_tree_test.o:binary_sort_tree_test.cpp binary_sort_tree.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $^



all:$(OBJS)
	cd ./staticlib/ && make all
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o binary_tree_test binary_tree_test.o $(LIBPATH) $(LIBVAR)
	$(CXX) $(CXXFLAGS) $(INLCUDE) -o binary_sort_tree_test binary_sort_tree_test.o $(LIBPATH) $(LIBVAR)
	mv $(TARGET) ./bin

./PHONY:
	clean
clean:
	-rm -f *.o
	-rm -f $(TARGET)
	cd ./staticlib/ && make clean


