#pragma once
#ifndef QUESTION_H
#define QUESTION_H

#include "Answer.h"

class Question
{
public:
	Question(std::string const& question_txt, std::vector<Answer> answers);
	// Constructor to create a question with its possible answers.
	size_t nbAnswers() const;
	// Method that returns the number of correct answers of the question.
	std::vector<size_t> inputAnswers();
	// Method that takes answers indexes and returns them.
	bool verifyAnswers(std::vector<size_t> const& answers_index) const;
	// Method that verifies if the input is correct or not.
	bool ask();
	// Method that asks the question, display its possible answers, makes
	// the user input his answers and verify if they're correct or not
	void solution();
	// Method that displays the question solution

private:
	std::string question_txt;
	std::vector<Answer> answers;
	void display_answers(bool b = false);
};

#endif // !QUESTION_H
