#CRIANDO O MAKEFILE PARA COMPILAR OS ARQUIVOS 
all: comp

comp: TADFila.o mainFila.o
	gcc -Wall -o mainFila TADFila.o mainFila.o
TADFila.o: TADFila.c
	gcc -Wall -o TADFila.o -c TADFila.c
mainFila.o: mainFila.c TADFila.h
	gcc -Wall -o mainFila.o -c mainFila.c

run: mainFila	./mainFila
