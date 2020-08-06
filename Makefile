CFLAGS = -fsanitize=address,undefined  -g

program: main.o Traveler.o Knight.o BridgeKeeper.o
	g++ main.o Traveler.o Knight.o BridgeKeeper.o -o program

main.o: main.cpp
	g++ -c main.cpp

Traveler.o: Traveler.cpp
	g++ -c Traveler.cpp

Knight.o: Knight.cpp
	g++ -c Knight.cpp

BridgeKeeper.o: BridgeKeeper.cpp
	g++ -c BridgeKeeper.cpp

clean:
	rm *.o program
