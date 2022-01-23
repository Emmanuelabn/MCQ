#include "MCQ.h"
using namespace std;

int main() {
    Question q1("Which of the following food components is required for the growth and maintenance of the human body?",
        { Answer("Proteins", true), Answer("Vitamins", true), Answer("Minerals") });

    Question q2( "Which of the following food components give energy to our body?",
        { Answer("Proteins"), Answer("Vitamins"), Answer("Minerals"), Answer("Carbohydrates", true) });

    Question q3("Which of the following mineral functions by building strong bones and teeth?",
        { Answer("Iodine"), Answer("Calcium", true), Answer("Iron"), Answer("Sodium") });

    Question q4("Which of the following food components is rich in fat?",
        { Answer("Butter", true), Answer("Eggs"), Answer("Cheese", true), Answer("Oil", true) });

    Question q5("Egg is a rich source of _________.",
        { Answer("Proteins", true), Answer("Iron"), Answer("Vitamins", true), Answer("Minerals", true) });

    MCQ exam("Food exam:\n");
    exam.add_question(q1);
    exam.add_question(q2);
    exam.add_question(q3);
    exam.add_question(q4);
    exam.add_question(q5);
    exam.ask();

    return 0;
}