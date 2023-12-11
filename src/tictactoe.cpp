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
    if (x < SIZE or y < SIZE)
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

bool checkWinner(char tab[][SIZE], char sign)
{

    bool isCheckd[SIZE]{false};
    // the same sign in a row
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (tab[i][j] == sign)
                isCheckd[j] = true;
        }
        if (isCheckd[0] and isCheckd[1] and isCheckd[2])
            return true;

        isCheckd[0] = false;
        isCheckd[1] = false;
        isCheckd[2] = false;
    }

    // the same sign in a column
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (tab[j][i] == sign)
                isCheckd[j] = true;
        }
        if (isCheckd[0] and isCheckd[1] and isCheckd[2])
            return true;
        isCheckd[0] = false;
        isCheckd[1] = false;
        isCheckd[2] = false;
    }

    if (tab[0][0] == sign and tab[1][1] == sign and tab[2][2] == sign)
        return true;

    if (tab[0][2] == sign and tab[1][1] == sign and tab[2][0] == sign)
        return true;

    return false;
}

void getCoordinates(char &sign, int &x, int &y)
{
    std::cout << "Put coordinate for: " << sign << "\n";
    std::cin >> x;
    std::cin >> y;
    std::cin.get();
}

void runGame(char tab[][SIZE])
{
    // board game has 9 fields/cells
    int fieldCount{0};
    int x{0};
    int y{0};
    char sign{'O'};
    //std::cout << showBoard(tab);
    while (fieldCount < 9)
    {
        std::cout<<showBoard(tab);
        getCoordinates(sign, x, y);
        if (x < SIZE and y < SIZE)
        {
            if (setValue(tab, sign, x, y))
            {
                if (checkWinner(tab, sign))
                {
                    std::cout<<showBoard(tab);
                    std::cout << "Bravo, the winner is " << sign << "\n";
                    break;
                }
                else
                {
                    if (sign == 'O')
                        sign = 'X';
                    else
                        sign = 'O';
                    fieldCount++;
                }
            }
            continue;
        }
        continue;
    }
}