#pragma once
#include <string>
#include <iostream>
#include <vector>

class Question 
{
public:
	void printQ();
	void testPrint();

	void compAnswer();

	// Currently does nothing, couldn't work out how to load
	// through class method
	void loadQuestion(std::ifstream &p_qFile);

    std::string q;
	std::string ans1;
	std::string ans2;
	std::string ans3;
	std::string ans4;
	int correct;
	char inAnswer;
};

