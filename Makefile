output: main.o rtc.o
	g++ main.o rtc.o -o rtc

main.o: main.cpp
	g++ -c main.cpp

rtc.o: rtc.cpp
	g++ -c rtc.cpp

clean: 
	rm *.o rtc
