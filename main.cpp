#include <iostream>

using namespace std;

void charProgram() {
    char sequence[] = {'a', 'b', 'c', 'd'};
    int initArraySize = sizeof(sequence) / sizeof sequence[0];

    char newSequence[initArraySize * 2];

    int iteration = 0;

    for (int i = 0; i < initArraySize; i++) {
        char *tempChar = &sequence[i];
        newSequence[i + iteration] = *tempChar;
        newSequence[i + iteration + 2] = *tempChar;

        if (i % 2 != 0)
            iteration += 2;
    }

    cout << "Исходная строка(char[]): " << endl;
    for (char &c: sequence)
        cout << c << "";
    cout << endl << "Полученная строка(char[]): " << endl;
    for (char &c: newSequence)
        cout << c << "";
    cout << endl << endl;
}

void stringProgram() {
    string sequence = "abcd";
    string newSequence = sequence + sequence;

    int iteration = 0;

    for (int i = 0; i < sequence.size(); i++) {
        char *tempChar = &sequence.at(i);
        newSequence.replace(i + iteration, 1, string(1, *tempChar));
        newSequence.replace(i + iteration + 2, 1, string(1, *tempChar));

        if (i % 2 != 0)
            iteration += 2;
    }

    cout << "Исходная строка(string): " << endl << sequence << endl;
    cout << "Полученная строка(string): " << endl << newSequence << endl;
}

int main() {
    charProgram();
    stringProgram();

    return 0;
}


