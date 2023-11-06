struct_for_mod.o: struct_for_mod.c struct_for_mod.h
	gcc -g -Wall -c struct_for_mod.c -o struct_for_mod.o

mod1.o: mod1.c mod1.h
	gcc -g -Wall -c mod1.c -o mod1.o

mod2.o: mod2.c mod2.h
	gcc -g -Wall -c mod2.c -o mod2.o

prog: prog.c struct_for_mod.o mod1.o mod2.o 	
	gcc -g -Wall prog.c struct_for_mod.o mod1.o mod2.o -o prog
