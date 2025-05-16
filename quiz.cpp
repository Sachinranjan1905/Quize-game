#include <iostream>
using namespace std;

int main() {
    int score = 0;
    string answer;

    cout << "Welcome to the Quiz Game!\n";

    cout << "Question 1: What is the capital of France?\n";
    cout << "A. Paris  B. London  C. Rome  D. Madrid\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "A" || answer == "a") score++;

    cout << "Question 2: What is 5 + 3?\n";
    cout << "A. 7  B. 8  C. 9  D. 10\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "B" || answer == "b") score++;

    cout << "Your score: " << score << "/2\n";
    
    return 0;
}
