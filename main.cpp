#include "environment.hpp"
#include "output.hpp"
#include <ostream>
#include <iostream>
using namespace std;

int main()
{
	int dataNum = 10;
	int actionNum = 10;
	Environment env(dataNum, actionNum);
	env.CreateDataSet();
	vector<string> dataset = env.GetDataSet();

	Output out(env);
	out.WriteData();

	return 0;
}
