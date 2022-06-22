#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "environment.hpp"
using namespace std;

class Output
{
	private:
		Environment m_env;
	public:
		Output(Environment &env);
		void WriteData();
};
