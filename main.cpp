#include <iostream>
#include <string>

#include "utils/commands.h"

using namespace std;

int main() {

    string input;
    Commands commands;

    while (true) {
        cout << "tiw> ";
        input = "";
        std::getline(cin, input);

        if (input == "EXIT") {
            break;
        }

        commands.call(input);
    }

    return 0;
}
