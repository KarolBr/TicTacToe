#include <iostream>
#include <string>
#include "tictactoe.h"

void createBoardGame(int tab[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            tab[i][j] = 0;
        }
    }
}

bool isCellEmpty(int tab[][SIZE], int x, int y)
{
    if (tab[x][y] == 0)
    {
        return true;
    }else
        return false;
}

std::string showBoard(int tab[][SIZE])
{
    std::string output{};
    for (int i = 0; i < SIZE; i++)
    {
        // std::cout<<" | ";
        for (int j = 0; j < SIZE; j++)
        {
            output += " | " + std::to_string(tab[i][j]);
        }
        output += " |\n";
        output += "  -----------\n";
    }
    return output;
}
