all: lib clean

lib: obj lib/ lib/tlibc.so

lib/tlibc.so: obj/printlib.o obj/syscalllib.o obj/memalloc.o
	ld --dynamic-linker=/lib64/ld-linux-x86-64.so.2 --shared -o $@ $^

obj: obj/ obj/printlib.o obj/syscalllib.o obj/memalloc.o

obj/printlib.o: src/asm/printlib.s
	nasm -f elf64 -o $@ $<

obj/syscalllib.o: src/asm/syscalllib.s
	nasm -f elf64 -o $@ $<

obj/memalloc.o: src/memalloc.c
	gcc -c -o $@ -fPIC $<

obj/:
	mkdir obj

lib/:
	mkdir lib


test: test_bin/ test_bin/memalloc_test

test_bin/memalloc_test: test/memalloc_test.c
	gcc -c -o test_bin/memalloc_test.o $<
	ld --dynamic-linker=/lib64/ld-linux-x86-64.so.2 -o test_bin/memalloc_test test_bin/memalloc_test.o lib/*

test_bin/:
	mkdir test_bin

clean:
	-rm -r obj
