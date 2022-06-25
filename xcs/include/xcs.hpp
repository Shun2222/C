#pragma once
#include <string>
#include <vector>
using namespace std;

struct Data
{
}
class XCS
{
	private:
	public:
		Environment m_env;
		Pram m_param;
		int m_iteration;
		vector<Classifier> P; //Population
		vector<double> PA; //Predict Array
		vector<string> M; // Matched Set
		vector<Classifier> A; // Action Set
		vector<string> prevSigma; // Previous State
		vector<string> prevA; // Previous Action
		int prevRho;
		HyperPrameter pram;
		
		XCS(Environment env);
		void execute();
		void run(string &sigma, char &correctAction);
		// Match Set
		void createMatchSet();
		bool doseMatch();
		// Covering
		void createCoveringClassifier();
		// Prediction Array
		void createPredictionArray();
		void selectAction();
		// Action Set
		void createActionSet();
		// Update
		void updateSet();
		void updateFitness();
		// Population Operation
		void addPopulation();
		void deletePopulation();
		// Vote
		void delectionVote();
		// Else
		int getDiffActionNum();
		string randomAction();
}
