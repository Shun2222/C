#include "xcs.hpp"
#include <random>
using namespace std;

class GA
{
	private:
		Classifier m_parent1;
		Classifier m_parent2;
		Classifier m_child1;
		Classifier m_child2;

	public:
		GA(XCS &xcs);
		void execute();
		void selectParent();
		void createChildren();
		void clossover();
		void mutation();
}
