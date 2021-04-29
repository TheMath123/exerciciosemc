
	gcc -Wall -o main TADListaP.o main.o
	gcc -Wall -o TADListaP.o -c TADListaP.c
	gcc -Wall -o main.o -c main.c
	rm -rf *.o
	rm -rf main
	main