#CRIANDO O MAKEFILE PARA COMPILAR OS ARQUIVOS 
all: comp

comp: TADRacional.o teste.o
	gcc -o teste TADRacional.o teste.o
tad.o: TADRacional.c
	gcc -o TADRacional.o -c TADRacional.c
main.o: teste.c TADRacional.h
	gcc -o teste.o -c teste.c

run: teste
	./teste


