#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int main() {
    cout << "Enter word: ";
    string word;
    cin >> word;
    cout << endl;
    for (int i = 0; i < word.length(); i++){
        string words;
        char d = word[i];
        if (islower(d)){
            words += (char)toupper(d); // toupper return value as int so i put (char) to make it return as string
        }
        else if (isupper(d)){
            words += (char)tolower(d);
        }
    cout << words;
    }
}