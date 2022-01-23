#include "MCQ.h"

MCQ::MCQ(std::string const& title, std::vector<Question> questions)
{
	this->title = title;
	this->questions = questions;
}

void MCQ::add_question(Question const& q)
{
	questions.push_back(q);
}

void MCQ::ask()
{
	std::cout << title << std::endl;
	int correct = 0;
	for (size_t i(0); i < questions.size(); ++i)
	{
		std::cout << char('A' + i) <<" - " ;
		bool t = questions[i].ask();
		if (t == true)
		{
			correct += 1;
			std::cout << "\nGreat!\n\n";
		}
		else
		{
			std::cout << "\nAnswer is : " << std::endl;
			std::cout << "====================\n" << std::endl;
			questions[i].solution();
			std::cout << std::endl;
		}
	}
	std::cout << std::endl << "Grade : " << correct << "/" << questions.size() << std::endl;
}