all : original run1 run2 run3 run4 run5 run6 run7 run8

original : simplechain_original.c
	gcc -o original simplechain_original.c

run1 : simplechain1.c
	gcc -o run1 simplechain1.c

run2 : simplechain2.c
	gcc -o run2 simplechain2.c

run3 : simplechain3.c
	gcc -o run3 simplechain3.c

run4 : simplechain4.c
	gcc -o run4 simplechain4.c

run5 : simplechain5.c
	gcc -o run5 simplechain5.c

run6 : simplechain6.c
	gcc -o run6 simplechain6.c

run7 : simplechain7.c
	gcc -o run7 simplechain7.c

run8 : simplechain8.c
	gcc -o run8 simplechain8.c

clean :
	rm original
	rm run1
	rm run2
	rm run3
	rm run4
	rm run5
	rm run6
	rm run7
	rm run8
