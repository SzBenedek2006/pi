pi: pi.c
	mkdir bin
	gcc -o ./bin/pi pi.c -lm

clean:
	rm -rf ./bin
