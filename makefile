test: executor.c
	gcc executor.c -o test
clean:
	rm *~
run: test
	./test
