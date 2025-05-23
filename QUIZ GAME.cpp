#include <iostream>
using namespace std;

int main() {
    string questions[10] = {
        // Simple
        "1. What is 2 + 2?",
        "2. What color is the sky on a clear day?",

        // Medium
        "3. Who painted the Mona Lisa?",
        "4. What is the capital of Japan?",
        "5. Which gas do plants absorb from the atmosphere?",

        // Hard
        "6. Who developed the theory of general relativity?",
        "7. What is the square root of 144?",

        // Tough
        "8. What is the chemical formula of table salt?",
        "9. Who was the first person to reach the South Pole?",
        "10. What is the value of Pi (π) up to 3 decimal places?"
    };

    string options[10][4] = {
        {"A. 3", "B. 4", "C. 5", "D. 6"},
        {"A. Blue", "B. Red", "C. Green", "D. Yellow"},

        {"A. Picasso", "B. Michelangelo", "C. Leonardo da Vinci", "D. Van Gogh"},
        {"A. Beijing", "B. Tokyo", "C. Seoul", "D. Bangkok"},
        {"A. Oxygen", "B. Nitrogen", "C. Carbon Dioxide", "D. Hydrogen"},

        {"A. Isaac Newton", "B. Galileo", "C. Einstein", "D. Tesla"},
        {"A. 10", "B. 12", "C. 14", "D. 16"},

        {"A. NaCl", "B. H2O", "C. CO2", "D. KCl"},
        {"A. Neil Armstrong", "B. Edmund Hillary", "C. Roald Amundsen", "D. Robert Scott"},
        {"A. 3.142", "B. 3.124", "C. 3.241", "D. 3.412"}
    };

    char answers[10] = {'B', 'A', 'C', 'B', 'C', 'C', 'B', 'A', 'C', 'A'};
    char userAnswer;
    int score = 0;

    cout << "Welcome to the Quiz Game!" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "\n" << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }
        cout << "Your answer (A/B/C/D): ";
        cin >> userAnswer;

        if (toupper(userAnswer) == answers[i]) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! The correct answer is " << answers[i] << "." << endl;
        }
    }

    cout << "\nYour final score is: " << score << " out of 10." << endl;
    return 0;
}
