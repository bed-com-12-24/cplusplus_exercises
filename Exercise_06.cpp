#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void calculateWords(string fileData);
void reverseString(string fileData);
void secondLetterCapitalized(string fileData);
void calculateVowels(string fileData);

int main() {
    ifstream input("text.txt");
    string first;
    string fileData;
    int counter = 0;
    
    cout << first << endl;
    while(!input.eof()){
        getline(input, first);
        fileData += first;
            
    }
    input.close();
    calculateWords(fileData);
    reverseString(fileData);   
    secondLetterCapitalized(fileData);
    calculateVowels(fileData);
    return 0;
}

void calculateWords(string fileData) {
    int wordCount = 0;
    for (size_t i = 0; i < fileData.length(); i++) {
        if (fileData[i] == ' ' || fileData[i] == '\n') {
            wordCount++;
        }
    }
    cout << "Number of words: " << wordCount << endl;
}

void reverseString(string fileData) {
    string reversed;
    for (int i = fileData.length() - 1; i >= 0; i--) {
        reversed += fileData[i];
    }
    cout << "Reversed string: " << reversed << endl;
}

void secondLetterCapitalized(string fileData) {
    bool inWord = false;
    int letterCount = 0;
    
    for (size_t i = 0; i < fileData.length(); i++) {
        if (fileData[i] != ' ' && fileData[i] != '\n') {
            // We're inside a word
            if (!inWord) {
                inWord = true;
                letterCount = 1; // First letter of the word
            } else {
                letterCount++;
            }
            
            // Capitalize the second letter of each word
            if (letterCount == 2) {
                fileData[i] = toupper(fileData[i]);
            }
        } else {
            // We've reached a word boundary (space or newline)
            inWord = false;
            letterCount = 0;
        }
    }
    cout << "Capitalized second letters: " << fileData << endl;
}

void calculateVowels(string fileData) {
    int vowelCount = 0;
    for (size_t i = 0; i < fileData.length(); i++) {
        char ch = tolower(fileData[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;
}

