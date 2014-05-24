LINUX = gcc
W64 = x86_64-w64-mingw32-gcc 
CFLAGS = -Wall

linux: main.c watson.h chars.c
	$(LINUX) $(CFLAGS) -c main.c -o main.o
	$(LINUX) $(CFLAGS) -c chars.c -o chars.o
	$(LINUX) $(CFLAGS) main.o chars.o -o watson

windows: main.c watson.h chars.c
	$(W64) $(CFLAGS) -c main.c -o main.o
	$(W64) $(CFLAGS) -c chars.c -o chars.o
	$(W64) $(CFLAGS) main.o chars.o -o Watson.exe

clean:
	rm *.o
	rm watson
	rm watson.exe
	
