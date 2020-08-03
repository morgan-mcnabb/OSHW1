
program: main.o Traveler.o Knight.o Helper.o BridgeKeeper.o
	g++ main.o Traveler.o Knight.o Helper.o BridgeKeeper.o -o program

main.o: main.cpp
	g++ -c main.cpp

Traveler.o: Traveler.cpp
	g++ -c Traveler.cpp

Knight.o: Knight.cpp
	g++ -c Knight.cpp

Helper.o: Helper.cpp
	g++ -c Helper.cpp

BridgeKeeper.o: BridgeKeeper.cpp
	g++ -c BridgeKeeper.cpp

clean:
	rm *.o progam
