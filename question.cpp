#include "Question.hpp"

void Question::printQ()
{
    std::cout << q << '\n' << ans1 << '\n' << ans2 
    << '\n' << ans3 << '\n' << ans4 << '\n'
    << '\n' << "Enter answer: " << std::endl;
}

void Question::testPrint()
{
    std::cout << q << '\n' << ans1 << '\n' << ans2 
    << '\n' << ans3 << '\n' << ans4 << '\n' << correct
    << '\n' << "Enter answer: " << std::endl;
}

bool isValidAnswer(int x)
{
  if ((x > 64 && x < 69) || (x > 96 && x < 101))
    return true;
  else
    return false;
}

void Question::compAnswer()
{
    // Recieve user answer
    std::cin >> inAnswer;

    // If user is correct lower or uppercase 
    if ((inAnswer - 64) == correct || (inAnswer - 96) == correct)
    {
      std::cout << "Correct!" << std::endl;
    }
    else if(!isValidAnswer(inAnswer)) // If invalid answer
    {
      std::cout << "Invalid input. Please choose A, B, C or D" << std::endl;
    }  
    else // Wrong answer
    {
      std::cout << "Incorrect, the correct answer was " 
                << (char)(correct + 64) 
                << ". ";

      switch(correct)
      {
        case 1 : std::cout << ans1 << std::endl;
        case 2 : std::cout << ans2 << std::endl;
        case 3 : std::cout << ans3 << std::endl;
        case 4 : std::cout << ans4 << std::endl;
      }
    }
}

// void Question::loadQuestion(std::ifstream &p_qFile)
// {
//       std::string q;
//       getline(p_qFile, q, '\n');
//       getline(p_qFile, ans1, '\n');
//       getline(p_qFile, ans2, '\n');
//       getline(p_qFile, ans3, '\n');
//       getline(p_qFile, ans4, '\n');
//       p_qFile >> correct;
// }