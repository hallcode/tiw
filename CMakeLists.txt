cmake_minimum_required(VERSION 3.26)
project(tiw)

set(CMAKE_CXX_STANDARD 23)

add_executable(tiw main.cpp
        utils/commands.cpp
        utils/commands.h
        utils/ScriptParser.cpp
        utils/ScriptParser.h
        game/Faction.cpp
        game/Faction.h
        game/Territory.cpp
        game/Territory.h
)
