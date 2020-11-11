CC=gcc
FLAGS= -Wall -g
AR=ar

all: mains maind

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

libmyMath.a: basicMath.o power.o
	$(AR) -rcs libmyMath.a basicMath.o power.o
          
	
mymaths:
	$(AR) -rcs libmyMath.a basicMath.o power.o


libmyMath.so: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o
	

mymathd:
	$(CC) -shared -o libmyMath.so basicMath.o power.o	
       	
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

.PHONY: clean all

clean:
	rm -f mains maind *.so *.a *.o


