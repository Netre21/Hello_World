__start__: a.out
    ./a.out

a.out: kod1.o dodaw.o
    g++ kod1.o dodaw.o
kod1.o: kod1.cpp dodaw.h
    g++ -c -Wall pedantic kod1.cpp
dodaw.o: dodaw.cpp dodaw.h
    g++ -c -Wall pedantic dodaw.cpp
clean:
    rm edit kod1.o dodaw.o
