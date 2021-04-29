#CRIANDO O MAKEFILE PARA COMPILAR OS ARQUIVOS 
all: comp

comp: TADLista.o main.o
	gcc -Wall -o main TADLista.o main.o
TADLista.o: TADLista.c
	gcc -Wall -o TADLista.o -c TADLista.c
main.o: main.c TADLista.h
	gcc -Wall -o main.o -c main.c

run: main
	./main


