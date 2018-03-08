CXX=g++
all:sequence_stack_test linked_stack_test
.PHONY:all

#the compile of static sequence list
Objects1=sequence_stack.o sequence_stack_test.o
sequence_stack_test:$(Objects1)
	$(CXX) -o sequence_stack_test $(Objects1)
sequence_stack_test.o:sequence_stack_test.cpp sequence_stack.h
	$(CXX) -c sequence_stack_test.cpp
sequence_stack.o:sequence_stack.cpp sequence_stack.h
	$(CXX) -c sequence_stack.cpp

Objects2=linked_stack.o linked_stack_test.o
linked_stack_test:$(Objects2)
	$(CXX) -o linked_stack_test $(Objects2)
linked_stack_test.o:linked_stack_test.cpp linked_stack.h
	$(CXX) -c linked_stack_test.cpp
linked_stack.o:linked_stack.cpp linked_stack.h
	$(CXX) -c linked_stack.cpp

#remove intermediate document
.PHONY:
	clean
clean:
	-rm *.o
