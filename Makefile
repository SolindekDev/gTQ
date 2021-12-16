testFileCompile: main.c
	gcc main.c -lwinmm
	./a.exe

libCompile: src/main.c
	gcc src/main.c