#include "XCS.hpp"

XCS::XCS(Environment env)
{
	m_env = env;
}

XCS::Execute()
{
	vector<string> dataSet = m_env.GetDataSet();
	vector<string> actionSet = m_env.GetActionSet();
	int n = m_env.GetDataNum();
	int nP = 
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<n; j++)
		{
			Run();
			for(int k=0; j<nP; k++)
			{
				cout << P[i].GetState() << endl;
			}
			cout << 
		}
	}
}
