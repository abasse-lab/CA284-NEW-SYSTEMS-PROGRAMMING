targets = main.c number_generator.c heapsort.c radix.c shellsort.c insertionsort.c

build: $(targets)
	@true

%: %.c
	gcc -o $@ $<

test:
	./main 100
	./main 500
	./main 2000
	./main 30000
	./main 400000
	./main 1000000
