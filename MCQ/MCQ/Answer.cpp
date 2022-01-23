#include "Answer.h"

Answer::Answer(std::string const& answer_txt, bool answer_value)
{
	this->answer_txt = answer_txt;
	this->answer_value = answer_value;
}
void Answer::display(bool const& withAnswer)
{
	if (withAnswer == false)
	{
		std::cout << "-" << answer_txt << std::endl;
	}
	else if (withAnswer == true)
	{
		if (answer_value == true)
			std::cout << "-" << answer_txt << "\t<<<\n";
		else if (answer_value == false)
			std::cout << "-" << answer_txt << "\tX\n";
	}
}
bool Answer::isCorrect() const
{
	return answer_value;
}