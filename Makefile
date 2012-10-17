main:code.c
	g++ -g -o main code.c
clean:
	@echo "clean project"
	-rm main *.o
	@echo "complete"
.PHONY:clean
