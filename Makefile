testFileCompile: main.c
	gcc main.c
	./a.exe

libCompile: src/main.c
	gcc src/main.c