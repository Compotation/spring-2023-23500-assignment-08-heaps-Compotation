OBJECTS = heap.o
CXXFLAGS = -g

all: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp heap.h
heap.o: heap.cpp heap.h
clean:
	rm -f main tests *.o
