testres:exp2.o
	gcc -o exp2res exp2.o

exp2.o:exp2.c
	gcc -c exp2.c -o exp2.o

exp2.c:exp2.y
	bison -d exp2.y -o exp2.c

clean:
	rm -rf *.o exp2