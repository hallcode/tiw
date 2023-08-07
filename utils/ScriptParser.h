//
// Created by alexh on 07/08/2023.
//

#ifndef TIW_SCRIPTPARSER_H
#define TIW_SCRIPTPARSER_H

#include <string>
#include <vector>

using namespace std;

using Function = void (*)(string);

class ScriptParser {
public:
    ScriptParser(string);

    struct Command {
        string name;
        string regex;
        string syntax;
        string description;
        Function function;
    };
    struct Statement {
        string text;
        string command;
        vector<string> arguments;
    };

private:
    vector<Command> commands;
    vector<Statement> statements;

    // -------------------------------------------------
    // Command functions
    // -------------------------------------------------
    int create_game(vector<string>);
    int load_game(vector<string>);
    int order(vector<string>);
};


#endif //TIW_SCRIPTPARSER_H
