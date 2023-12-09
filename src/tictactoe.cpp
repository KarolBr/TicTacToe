#include <iostream>
#include <string>
#include "tictactoe.h"

void createBoardGame(char tab[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            tab[i][j] = '-';
        }
    }
}

bool isCellEmpty(char tab[][SIZE], int x, int y)
{
    if (x < SIZE && y < SIZE)
    {
        if (tab[x][y] == '-')
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}

std::string showBoard(char tab[][SIZE])
{
    std::string output{};
    std::string temp{};
    for (int i = 0; i < SIZE; i++)
    {
        // std::cout<<" | ";
        for (int j = 0; j < SIZE; j++)
        {
            temp = tab[i][j];
            output += " | " + temp;
        }
        output += " |\n";
        output += "  -----------\n";
    }
    return output;
}

bool setValue(char tab[][SIZE], char sign, int x, int y)
{
    if (isCellEmpty(tab, x, y))
    {
        tab[x][y] = sign;
        return true;
    }
    else
        return false;
}