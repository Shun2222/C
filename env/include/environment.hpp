#pragma once
#include <vector>
#include <string>
#include <random>
#include <algorithm>

using namespace std;

class Environment
{
	private:
		int m_dataNum;
		int m_actionNum;
		double m_reward;
		vector<string> m_dataSet;
		vector<string> m_actionSet;
		bool m_isEndProblem;
	
	public:
		Environment();
		Environment(int &dataNum, int &actionNum);

		int getDataNum();
		vector<string> getActionSet();	
		vector<string> getDataSet();

		void createDataSet();
		void createActionSet();
		double recieveReward(char &action, char &correctAction);
		void dataShuffle();
		bool isEndProblem();
};
