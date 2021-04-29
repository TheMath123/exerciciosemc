REM *#CRIANDO O MAKEFILE PARA COMPILAR OS ARQUIVOS 
REM all: comp

REM comp: TADRacional.o teste.o
	gcc -Wall -o teste TADRacional.c teste.o
REM tad.o: TADRacional.c
	gcc -Wall -o TADRacional.o -c TADRacional.c
REM ain.o: teste.c TADRacional.h
	gcc -Wall -o teste.o -c teste.c

REM run: teste
	./teste
	pause

