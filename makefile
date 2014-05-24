LINUX = gcc
W64 = x86_64-w64-mingw32-gcc 
CFLAGS = -Wall
FILES = main.c watson.h data.c

linux: $(FILES)
	$(LINUX) $(CFLAGS) -c main.c -o main.o
	$(LINUX) $(CFLAGS) -c data.c -o data.o
	$(LINUX) $(CFLAGS) main.o data.o -o watson

windows: $(FILES)
	$(W64) $(CFLAGS) -c main.c -o main.o
	$(W64) $(CFLAGS) -c data.c -o data.o
	$(W64) $(CFLAGS) main.o data.o -o Watson.exe

clean:
	rm *.o
	rm watson
	rm watson.exe
	
