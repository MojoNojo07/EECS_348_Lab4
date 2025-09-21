# The name of the executable file
EXEC=exec

all: $(EXEC)

$(EXEC): main.o isOdd.o
	gcc main.o isOdd.o -o $(EXEC)

main.o: main.c
	gcc -c main.c

isOdd.o: isOdd.c
	gcc -c isOdd.c

clean: 
	rm -rf *.o
	rm -rf $(EXEC)