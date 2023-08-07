#include <iostream>
#include <string>

#include "utils/commands.h"

using namespace std;

string stringToUpper(string text) {
    for (unsigned int i = 0; i < text.length(); i++) {
        if (!isalpha(text[1])) {
            continue;
        }
        text[i] = toupper(text[i]);
    }

    return text;
}

int main() {

    string input;
    Commands commands;

    while (true) {
        cout << "tiw>";
        input = "";
        getline(cin, input);

        input = stringToUpper(input);

        if (input.starts_with("EXIT")) {
            break;
        }

        commands.call(input);
    }

    return 0;
}
