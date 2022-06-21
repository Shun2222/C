#include "environment.hpp"
#include <random>
using namespace std;

Environment::Environment(int &dataNum, int &actionNum)
{
	m_actionNum = actionNum;
	m_reward = 0.0;
	m_isEndProblem = true;
}

Environment::CreateDataSet(int &n)
{
	string data;
	string action;

	srand( time(NULL) );
	for(int i=0; i<n; i++)
	{
		data = ''
		for(int j=0; j<6; j++)
		{
			data += to_string(rand()%2)
		}
		action = data[stoi(data[0])*2+stoi(data[1])+2];
		m_dataSet.push_back(data);
		m_actionSet.push_back(action)

	}
}
Environment::EvaluateAction(string &action, string &correctAction)
{

}
Environment::DataShuffle()
{

}
