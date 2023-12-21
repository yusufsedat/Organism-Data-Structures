all: build run 

build:
	g++ -o ./lib/main.o -c ./src/main.cpp
	g++ -o ./lib/BST.o -c ./src/BST.cpp
	g++ -o ./lib/queue.o -c ./src/queue.cpp
	g++ -o ./lib/radix.o -c ./src/radix.cpp
	g++ -o ./lib/hucre.o -c ./src/hucre.cpp
	g++ -o ./lib/doku.o -c ./src/doku.cpp
	g++ -o ./lib/organ.o -c ./src/organ.cpp
	g++ -o ./lib/sistem.o -c ./src/sistem.cpp
	g++ -o ./lib/organizma.o -c ./src/organizma.cpp
	g++ -o ./lib/kontrol.o -c ./src/kontrol.cpp

	g++ -o ./bin/main ./lib/main.o ./lib/BST.o ./lib/queue.o ./lib/radix.o ./lib/hucre.o ./lib/doku.o ./lib/organ.o ./lib/sistem.o ./lib/organizma.o ./lib/kontrol.o

run:
	./bin/main