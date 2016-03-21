main: class.o main.o
	g++ -o class main.o class.o

class.o: class.cpp class.h
	g++ -c class.cpp

main.o: main.cpp class.h
	g++ -c main.cpp

clean:
	rm *.o
