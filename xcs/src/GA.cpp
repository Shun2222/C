#include  "GA.hpp"

GA::GA(XCS &xcs)
{
	m_xcs = xcs;
}

GA::Execute()
{
	int nA = xcs.A.siez();
	int sum1 = 0, sum2 = 0;
	for(int i=0; i<nA; i++)
	{
		sum1 += xcs.A[i].ts * xcs.A[i].num;
		sum2 += xcs.A[i].num;
	}
	if(xcs.m_iteration - sum1/sum2 > param.THETA_GA )
	{
		for(int i=0; i<nA; i++)
		{
			xcs.A[i].ts = xcs.m_iteration;
		}
		selectParent(xcs.A);
		selectParent(xcs.A);
		createChildren(parent1, parent2);
	}
}

GA::selectParent()
{
	int nA = xcs.A.size();
	for(int i=0; i<nA; i++)
	{
		
	}
}
