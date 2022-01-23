#pragma once
#ifndef MCQ_H
#define MCQ_H

#include "Answer.h"
#include "Question.h"

class MCQ
{
public:
	MCQ(std::string const& title, std::vector<Question> questions = {});
	//Constructor which creates an MCQ with its title and a vector of questions
	void add_question(Question const& q);
	//Method which adds a question to the MCQ
	void ask();
	//Method that asks the MCQ's questions and grades it

private:
	std::string title;
	std::vector<Question> questions;
};

#endif // !MCQ_H
