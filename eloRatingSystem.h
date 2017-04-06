#include <iostream>
using namespace std;

class Elo_Ratio{
public:
	Elo_Ratio();
	Elo_Ratio(int num1, int num2, int num3);
	void setR_A(int num);
	void setR_B(int num);
	void setK(int num);
	int getR_A();
	int getR_B();
	void calRatio(double S);
private:
	int R_A, R_B;
	int K;
};
