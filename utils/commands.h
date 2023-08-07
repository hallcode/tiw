//
// Created by Alex Hall on 07/08/2023.
//

#ifndef TIW_COMMANDS_H
#define TIW_COMMANDS_H

#include <string>
#include <map>

using commandFunction = void (*)(std::string);

class Commands {
public:
    Commands();
    void call(std::string);

private:
    std::map<std::string, commandFunction> keywords;
    static void test_command(std::string);
};

#endif //TIW_COMMANDS_H
