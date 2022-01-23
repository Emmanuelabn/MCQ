#include "Question.h"

Question::Question(std::string const& question_txt, std::vector<Answer> answers)
{
	this->question_txt = question_txt;
	this->answers = answers;
}

size_t Question::nbAnswers() const
{
	size_t counter = 0;
	for (size_t i(0); i < answers.size(); ++i)
	{
		if (answers[i].isCorrect() == true)
			counter += 1;
	}
	return counter;
}
std::vector<size_t> Question::inputAnswers()
{
	size_t correct_answers = nbAnswers();
	std::vector<size_t> question_choice(correct_answers);
	std::cout << "\nThis question has " << correct_answers << " correct answers, enter your answers: \n";
	for (size_t i(0); i < correct_answers; ++i) {
		std::cout << i + 1 << " : ";
		std::cin >> question_choice[i];
	}
	for (size_t i(0); i < correct_answers; ++i)
		question_choice[i] -= 1;

	return question_choice;
}

bool Question::verifyAnswers(std::vector<size_t> const& answers_index) const
{
	int correct = 0, incorrect = 0;
	for (size_t i(0); i < answers_index.size(); ++i) {
		if (answers[answers_index[i]].isCorrect())
			correct += 1;
		else
			incorrect += 1;
	}
	if (incorrect != 0)
		return false;
	else
		return true;
}
void Question::display_answers(bool b) // private member (not usable)
{
	std::cout << question_txt << std::endl << std::endl;
	for (size_t i(0); i < answers.size(); ++i)
	{
		std::cout << i + 1;
		answers[i].display(b);
	}
}

bool Question::ask()
{
	display_answers();
	std::vector<size_t> chosen_answers = inputAnswers();
	bool j = verifyAnswers(chosen_answers);
	if (j == true)
		return true;
	else
		return false;
}
void Question::solution()
{
	display_answers(true);
}