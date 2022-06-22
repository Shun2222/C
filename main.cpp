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
	cout<<"finish"<<endl;
	return 0;
}
