#include "output.hpp"

Output::Output(Environment &env)
{
	m_env = env;
}
 
void Output::WriteData()
{

	int n = m_env.GetDataNum();
	vector<string> DataSet =  m_env.GetDataSet();
	vector<string> ActionSet = m_env.GetActionSet();
	
	ofstream ofs("../result/dataSet.csv");
	ofs << "data, action" << endl;
	for(int i=0; i<n; i++)
	{
		ofs << DataSet[i] << ", " << ActionSet[i] << endl;
	}
	cout << "Create dataSet.csv." << endl;
}
