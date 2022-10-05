testres:test.o
	gcc -o testres test.o

test.o:test.c
	gcc -c test.c -o test.o

test.c:test.y
	bison -d test.y -o test.c

clean:
	rm -rf *.o test