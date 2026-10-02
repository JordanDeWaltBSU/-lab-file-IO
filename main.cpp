#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {

    ifstream file("data.csv");

    string line;
    string temp;
    string word;
    int num1;
    int num2;

    while (getline(file, line)) {

        stringstream ss(line);

        getline(ss, temp, ',');
        stringstream(temp) >> num1;

        getline(ss, temp, ',');
        stringstream(temp) >> num2;

        getline(ss, word);

        // Remove any hidden carriage return from the end of the word
        if (!word.empty() && word.back() == '\r') {
            word.pop_back();
        }

        int total = num1 + num2;

        for (int i = 0; i < total; i++) {
            cout << word << " ";
        }

        cout << endl;
    }

    file.close();

    return 0;
}
