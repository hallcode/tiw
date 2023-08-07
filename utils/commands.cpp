//
// Created by Alex Hall on 07/08/2023.
//

#include <iostream>
#include <string>
#include "commands.h"

using namespace std;

// Add commands to vector
Commands::Commands() {
    this->commands.push_back({"TEST", Commands::test_command});
}


// Get first word and call correct function
void Commands::call(const string command) {
    if (command.empty()) {
        return;
    }

    for (int i = 0; i < this->commands.size(); i++) {
        if (!command.starts_with(this->commands[i].keyword)) {
            continue;
        }

        unsigned int keywordLength = this->commands[i].keyword.length();
        string arguments = command.substr(keywordLength+1);

        this->commands[i].function(arguments);
        return;
    }

    cout << "Command \"" << command << "\" not recognised." << endl;
}

// Commands
void Commands::test_command(const string args) {

    // Does nothing
    cout << "Test has worked" << endl;
    if (!args.empty()) {
        cout << "Arguments: " << args << endl;
    }
}