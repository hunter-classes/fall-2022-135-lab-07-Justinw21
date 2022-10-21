main: main.o funcs.o
	g++ -o main main.o funcs.o

indent: indent.o funcs.o
	g++ -o indent indent.o funcs.o

unindent: unindent.o funcs.o 
	g++ -o unindent unindent.o funcs.o

unindent.o: unindent.cpp funcs.h

indent.o: indent.cpp funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm -f main indent unindent unindent.o funcs.o main.o indent.o 