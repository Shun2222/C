#pragma once
#include <string>
#include <vector>
using namespace std;

struct Sets 
{
	vector<Classifier> P;
	vector<string> M;
	vector<string> prevSigma;
	vector<string> prevA;
}
class XCS
{
	private:
		Environment m_env;
		Pram m_param;
		int m_prevRho;
		int m_iteration;
		
	public:
		XCS(Environment env);
		void Execute();
		void Learn();
		// Match Set
		void CreateMatchSet();
		bool DoseMatch();
		// Covering
		void CreateCoveringClassifier();
		// Prediction Array
		void CreatePredictionArray();
		void SelectAction();
		// Action Set
		void CreateActionSet();
		// Update
		void UpdateSet();
		void UpdateFitness();
		// Population Operation
		void AddPopulation();
		void DeletePopulation();
		// Vote
		void DelectionVote();
		// Else
		int GetDiffActionNum();
		string RandomAction();
}
