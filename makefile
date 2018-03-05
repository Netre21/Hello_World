wykon: kod1.o dodawanie.o
	g++ -lm kod1.o dodawanie.o -o wykon

dodawanie.o: dodawanie.cpp dodawanie.h
	g++ -Wall -c dodawanie.cpp -o dodawanie.o

kod1.o: kod1.cpp dodawanie.h
	g++ -Wall -c kod1.cpp -o kod1.o

.PHONY: clean

clean:
	rm -f kod1.o dodawanie.o wykon

