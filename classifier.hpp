#pragma once
#include "hyperparameter.hpp"
using namespace std;

class Classifier
{
	private:
		HyperParameter m_param;
		string C = "";
		vector<string> A;	
		double p;
		int eps;
		double F;
		int exp = 0;
		int ts;
		int actionSet = 0;
		int num = 1;
		int kappa = 0;
	public:
		Classifier(int timeStamp, HyperParameter &param);
		void getState():
		void printState();
		int getNum();
 }
