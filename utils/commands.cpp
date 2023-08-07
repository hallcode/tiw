//
// Created by Alex Hall on 07/08/2023.
//

#include <iostream>
#include <string>
#include "commands.h"

// Constructor
Commands::Commands() {
    // Add an entry to the keywords map for every command function
    this->keywords["TEST"] = &Commands::test_command;
}

// Get first word and call correct function
void Commands::call(std::string command) {
    if (command.empty()) {
        return;
    }

    u_long splitPosition = command.find_first_of(' ');

    if (splitPosition == std::string::npos) {
        this->keywords[command]("");
        return;
    }

    std::string keyword = command.substr(0, splitPosition);
    this->keywords[keyword](command.substr(splitPosition+1, std::string::npos));
}

// Commands
void Commands::test_command(std::string arguments) {
    // Does nothing
    std::cout << "Test has worked" << std::endl;
    if (!arguments.empty()) {
        std::cout << "You said: " << arguments << std::endl;
    }
}