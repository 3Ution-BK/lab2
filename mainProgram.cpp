#include <iostream>
#include <fstream>
#include <cstdlib>
#include "eloRatingSystem.h"
using namespace std;

int main(){
	ifstream inFile;
	inFile.open("file.in", ios::in);

	ofstream outFile;
	outFile.open("file.out", ios::out);
	
	if(!inFile || !outFile){
		cerr << "ERROR! FILE OPEN FAILURE" << endl;
		exit(EXIT_FAILURE);
	}

	int K;
	int R_A, R_B;
	double S;

	inFile >> K >> R_A >> R_B;

	Elo_Ratio ratio(K, R_A, R_B);

	outFile << ratio.getR_A() << " " << ratio.getR_B() << endl;

	while(inFile >> S){
		ratio.calRatio(S);

		outFile << ratio.getR_A() << " " << ratio.getR_B() << endl;
	}

	inFile.close();
	outFile.close();

}
