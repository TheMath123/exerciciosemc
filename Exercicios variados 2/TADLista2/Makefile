#CRIANDO O MAKEFILE PARA COMPILAR OS ARQUIVOS 
all: comp

comp: TADLista.o mainLista.o
	gcc -Wall -o mainLista TADLista.o mainLista.o
TADLista.o: TADLista.c
	gcc -Wall -o TADLista.o -c TADLista.c
mainLista.o: mainLista.c TADLista.h
	gcc -Wall -o mainLista.o -c mainLista.c

run: mainLista	./mainLista
