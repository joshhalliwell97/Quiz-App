#include <iostream>
#include <fstream>

#include "Question.hpp"

#define NO_OF_GEOGRAPHY_QUESTIONS 3

void loadQuestions(std::ifstream &p_qFile, Question p_qArray[], int p_noOfQ);
void presentQuestions(Question p_qArray[]);

int main()
{
	// Open file with quiz questions
	std::ifstream questionsFile ("quiz-data.txt");

	// Create array of Question objects
	Question geographyQuestionArray[NO_OF_GEOGRAPHY_QUESTIONS];

	// Loads each question into seperate Question object
	loadQuestions(questionsFile, geographyQuestionArray, NO_OF_GEOGRAPHY_QUESTIONS);	
	
	presentQuestions(geographyQuestionArray);
	
	// for (int i = 0; i < NO_OF_GEOGRAPHY_QUESTIONS; i++)
	// 	geographyQuestionArray[i].printQ();

	return 0;
}

void loadQuestions(std::ifstream &p_qFile, Question p_qArray[], int p_noOfQ)
{
	for (int i = 0; i < p_noOfQ; i++)
	{
		getline(p_qFile, p_qArray[i].q, '\n');
		getline(p_qFile, p_qArray[i].ans1, '\n');
		getline(p_qFile, p_qArray[i].ans2, '\n');
		getline(p_qFile, p_qArray[i].ans3, '\n');
		getline(p_qFile, p_qArray[i].ans4, '\n');
		p_qFile >> p_qArray[i].correct;
		//p_qArray[i].testPrint();
	}	 
}

void presentQuestions(Question p_qArray[])
{
	for (int i = 0; i < NO_OF_GEOGRAPHY_QUESTIONS; i++)
	{
		p_qArray[i].printQ();
		p_qArray[i].compAnswer();
	}
}