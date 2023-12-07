#include <iostream>
#include "config.h"
#include "tictactoe.h"

// matrix declaration
    int tab[SIZE][SIZE];





int main()
{

    std::cout << project_name << std::endl;
    std::cout << project_version << std::endl;
    
    int _x{},_y{};

    // filling matrix by 0
    

    createBoardGame(tab);
    //showBoard(tab);

    std::cout<<showBoard(tab);

    return 0;
}
