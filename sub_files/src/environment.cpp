#include "environment.hpp"
#include <random>
using namespace std;
int ctoi(char &c){
	string s = {c};
	return stoi(s); 
}

Environment::Environment(int &dataNum, int &actionNum)
{
	m_dataNum = dataNum;
	m_actionNum = actionNum;
	m_reward = 0.0;
	m_isEndProblem = true;
}

vector<string> Environment::GetActionSet()
{
	return m_actionSet;
}

vector<string> Environment::GetDataSet()
{
	return m_dataSet;
}

void Environment::CreateDataSet()
{
	string data;
	string action;
	string str;

	srand( time(NULL) );
	for(int i=0; i<m_dataNum; i++)
	{
		data = "";
		for(int j=0; j<6; j++)
		{

			data += to_string(rand()%2);
		}
		m_dataSet.push_back(data);

	}
}

void Environment::CreateActionSet()
{
	string action;

	m_actionSet = {};
	for(int i=0; i<m_dataNum; i++)
	{
		action = m_dataSet[i][ctoi(data[0])*2+ctoi(data[1])+2];
		m_actionSet.push_back(action); 
	}
}
void Environment::EvaluateAction(string &action, string &correctAction)
{

}
void Environment::DataShuffle()
{
	mt19937 get_rand_mt;
	shuffle(m_dataSet.begin(), m_dataSet.end(), get_rand_mt );
	CreateActionSet();
}