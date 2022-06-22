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

		int GetDataNum();
		vector<string> GetActionSet();	
		vector<string> GetDataSet();

		void CreateDataSet();
		void CreateActionSet();
		void EvaluateAction(string &action, string &correctAction);
		void DataShuffle();
};
