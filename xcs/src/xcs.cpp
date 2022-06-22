#include "XCS.hpp"

XCS::XCS(int &dataNum, int &actionNum)
{
	m_env(dataNum, actionNum);
}

XCS::execute()
{
	int n = m_env.getDataNum();
	int nP = P.size();
	int i = 0;
	while(i<10)
	{
		m_env.dataShuffle();
		vector<string> dataSet = m_env.getDataSet();
		vector<string> actionSet = m_env.getActionSet();
		for(int j=0; j<n; j++)
		{
			run(dataSet[j], actionSet[j]);
			int sum = 0;
			for(int k=0; j<nP; k++)
			{
				P[k].printState();
				sum += P[k].getNum();
			}
			cout<<"sum: " <<sum<<endll;
		}
		i += 1;
	}
	//Output
}

XCS::run(string &sigma, char &correctAction)
{
	createMatchSet(P, sigma);
	createPredictionArray();
	char action = selectAction();
	double rho = env.receiveReward(action, correctAction);
	double p;
	if(prevA.empty() != "")
	{
		p = prevRho + m_param.GAMMA *max_element(PA.begin(), PA.end());
		updateSet(prevA, prevSigma, P);
	}
	if(m_env.isEndProblem())
	{
		p = rho;
		updateSet(A, p, P);
		GA::execute();
		prevA = "";
	}
	else
	{
		prevA = A;
		prevRho = rho;
		prevSigma = sigma;
	}
	m_iteration += 1;
}

