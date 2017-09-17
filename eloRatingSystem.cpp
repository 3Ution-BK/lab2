#include "eloRatingSystem.h"
#include <math.h>

/*
class Elo_ratio{
private:
	int R_A, R_B;
	int K;
}
*/

Elo_Ratio::Elo_Ratio(){
	R_A = 0;
	R_B = 0;
	K = 0;
}

Elo_Ratio::Elo_Ratio(int num1, int num2, int num3){
	K = num1;
	R_A = num2;
	R_B = num3;
}

void Elo_Ratio::setR_A(int num){
	R_A = num;
}

void Elo_Ratio::setR_B(int num){
	R_B = num;
}

void Elo_Ratio::setK(int num){
	K = num;
}

int Elo_Ratio::getR_A(){
	return R_A;
}

int Elo_Ratio::getR_B(){
	return R_B;
}

void Elo_Ratio::calRatio(double S){
	double R_temp;
	int R_A_new, R_B_new;
	R_temp = R_A +(K * (S - (1 / (1 + pow(10.0, (static_cast<double> (R_B - R_A) / 400))))));
	R_A_new = (((static_cast<double> (R_temp - static_cast<int> (R_temp))) >= 0.5)? static_cast<int> (R_temp + 1):static_cast<int> (R_temp));

	R_temp = R_B + (K * ((1 - S) - (1 / (1 + pow(10.0, (static_cast<double> (R_A - R_B) / 400))))));
	R_B_new = (((static_cast<double> (R_temp - static_cast<int> (R_temp))) >= 0.5)? static_cast<int> (R_temp + 1):static_cast<int> (R_temp));

	R_A = R_A_new;
	R_B = R_B_new;
}

