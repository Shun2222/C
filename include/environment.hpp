#include <vector>
using namespace std;

class Environment
{
	private:
		int m_actionNum;
		double m_reward;
		vector<string> m_dataSet;
		vector<string> m_actionSet;
		bool m_isEndProblem;
	public:
		Environment(int &dataNum, int &actionNum);
		
		CreateDataSet(int &n);
		EvaluateAction(string action, string correctAction);
		DataShuffle();
}
