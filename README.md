# Tiw
> The Norse god of war and adjudication.
> Pronounced _tyew_ (like the first part of the word **Tue**sday).

Tiw is (/will be) a command-line tool for adjudicating the
board game Diplomacy.

It uses an SQL-like script to affect the games, and returns
a string representation of the game's state after each
operation.

# Command syntax
Once you've run the program, you can interact with the program via script text files or using the interactive shell.

Either way, the syntax for all statements is:

```COMMAND [arguments];```

## Basic commands
Most of the time you will be using the following commands to create and administer standard 
games.

| Description                                                  | Syntax                                         | 
|--------------------------------------------------------------|------------------------------------------------|
| Create a new game                                            | ```CREATE GAME [<variant>\|default];```        | 
| Load a saved game                                            | ```LOAD GAME <game_id>;```                     | 
| Set positions for a faction.                                 | ```SET <faction_name> [A\|F:<province>]...;``` | 
| Create an order*                                             | ```ORDER <faction> [<instructions>]...;```     |
| Calculate the orders and advance to the next turn            | ```COMMIT;```                                  |
| Print the current positions of all (or a specified) factions | ```STATEOF [<faction>];```                     |

*See below for more details on how to write the orders/instructions.

## Advanced commands
These commands allow you to create variants. In fact, they are used to create the default setup 
for a standard game of Diplomacy, but you could write your own script files describing a custom
variant.

| Description                       | Syntax                                                 | 
|-----------------------------------|--------------------------------------------------------|
| Create a new variant              | ```CREATE VARIANT <name>;```                           | 
| Create or edit province/territory | ```PROVINCE <variant>.<abreviation> [<properties>];``` |
| Create or edit a faction          | ```FACTION <variant>.<faction> [<properties>];```      |