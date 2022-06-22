#include "environment.hpp"
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
	cout<<dataset[0]<<endl;
	return 0;
}
