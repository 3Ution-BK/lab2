main: mainProgram.o eloRatingSystem.o
	g++ -o lab2 mainProgram.o eloRatingSystem.o

mainProgram.o: mainProgram.cpp
	g++ -c mainProgram.cpp

eloRatingSystem.o: eloRatingSystem.cpp eloRatingSystem.h
	g++ -c eloRatingSystem.cpp

clean:
	rm eloRatingSystem *.o
