binary: main.o number.o add.o 
	gcc -m32 main.o number.o add.o -o binary 
	./binary

main.o: 
	gcc -m32 -c main.c -lm

number.o:
	gcc -m32 -c number.c -lm

add.o: 
	nasm -f elf add.s -o add.o

clear:
	rm *.o binary

