wykon: kod1.o dodaw.o
    gcc kod1.o dodaw.o -o wykon
kod1.o: kod1.cpp dodaw.h
    gcc -Wall -c kod1.cpp -o kod1.o
dodaw.o: dodaw.cpp dodaw.h
    gcc -Wall -c dodaw.cpp -o dodaw.o
clean:
    rm kod1.o dodaw.o
