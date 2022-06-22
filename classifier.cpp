#include "classifier.hpp"

Classifier::Classifier(int timeStamp, HyperParameter &param)
{
	m_param = param;
	p = m_param.P_I;
	eps = m_param.EPS_I;
	F = m_param.F_I;
	ts = timeStamp;
}

void Classifier::printState()
{
	cout<<C<<A<<p<<F<<num<<endl;
}

int Classifier::getNum()
{
	return num;
}
