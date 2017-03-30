all: weight.o
	g++ -o main weight.o
weight.o :
	g++ -c weight.cpp

clean :
	rm main *.o
