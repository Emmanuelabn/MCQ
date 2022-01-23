#pragma once
#ifndef ANSWER_H
#define ANSWER_H

#include<iostream>
#include<vector>
#include<string>

class Answer
{
public:
	Answer(std::string const& answer_txt, bool answer_value = false);
	//Constructor to create an answer, false by default
	bool isCorrect() const;
	//Method that returns true if the answer is true and false otherwise
	void display(bool const& withAnswer = false);
	//Method that displays answer without showing if it's correct or not by default,
	//if withAnswer is set to true, it will display if it's correct or not
	
private:
	std::string answer_txt;
	bool answer_value;
};

#endif // !ANSWER_H
