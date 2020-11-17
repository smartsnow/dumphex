test: test.c dumphex.c dumphex.h
	cc -g -o test test.c dumphex.c

clean:
	rm -f test