#CRIANDO O MAKEFILE PARA COMPILAR OS ARQUIVOS 
all: comp

comp: TADPilha.o mainPilha.o
	gcc -Wall -o mainPilha TADPilha.o mainPilha.o
TADPilha.o: TADPilha.c
	gcc -Wall -o TADPilha.o -c TADPilha.c
mainPilha.o: mainPilha.c TADPilha.h
	gcc -Wall -o mainPilha.o -c mainPilha.c

run: mainPilha	./mainPilha
