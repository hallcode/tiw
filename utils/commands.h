//
// Created by Alex Hall on 07/08/2023.
//

#ifndef TIW_COMMANDS_H
#define TIW_COMMANDS_H

#include <string>
#include <vector>

using namespace std;

using commandFunction = void (*)(string);

class Commands {
public:
    Commands();

    struct Command {
        string keyword;
        commandFunction function;
    };

    void call(string);

private:
    vector<Command> commands;

    static void test_command(string);
};

#endif //TIW_COMMANDS_H
