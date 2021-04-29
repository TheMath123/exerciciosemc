#CRIANDO O MAKEFILE PARA COMPILAR OS ARQUIVOS 
all: comp

comp: TADListaP.o main.o
	gcc -Wall -o main TADListaP.o main.o
TADListaP.o: TADListaP.c
	gcc -Wall -o TADListaP.o -c TADListaP.c
main.o: main.c TADListaP.h
	gcc -Wall -o main.o -c main.c

clean: 
	rm -rf *.o
mrproper: clean
	rm -rf main

run: main
	./main


