#include <gtest/gtest.h>
#include "tictactoe.h"

class ProjectTest : public ::testing::Test
{
    protected:
    ProjectTest() {};
    ~ProjectTest() override {};

    void SetUp() override{};
    void TearDown() override {};

    int tab[SIZE][SIZE];
};

/*
0 - cell is empty
1 - cell is occupied by First (X) user
2 - cell is occupied by Second (O) user
*/



TEST_F(ProjectTest,IfBoardGameIsCreatedRandomCellShouldBeZero)
{
    createBoardGame(tab);
	EXPECT_TRUE(tab[1][1]==0);
}

TEST_F(ProjectTest,TrueIfParticularCellIsEmpty)
{
    tab[0][0] = 0;
	EXPECT_TRUE(isCellEmpty(tab,0,0));
}

TEST_F(ProjectTest,EmptyBoardUsingShowBoardShouldReturnCustomString)
{
    std::string s = " | 0 | 0 | 0 |\n  -----------\n | 0 | 0 | 0 |\n  -----------\n | 0 | 0 | 0 |\n  -----------\n";
    EXPECT_EQ(showBoard(tab),s);
}









