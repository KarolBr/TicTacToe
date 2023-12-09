#include <gtest/gtest.h>
#include "tictactoe.h"

class ProjectTest : public ::testing::Test
{
    protected:
    ProjectTest() {};
    ~ProjectTest() override {};

    void SetUp() override{};
    void TearDown() override {};

    char tab[SIZE][SIZE];
};

/*
- - cell is empty
X - cell is occupied by First (X) user
O - cell is occupied by Second (O) user
*/



TEST_F(ProjectTest,IfBoardGameIsCreatedRandomCellShouldBeDash)
{
    createBoardGame(tab);
	EXPECT_TRUE(tab[1][1]=='-');
}

TEST_F(ProjectTest,TrueIfParticularCellIsEmpty)
{
    tab[0][0] = '-';
	EXPECT_TRUE(isCellEmpty(tab,0,0));
}

TEST_F(ProjectTest,EmptyBoardUsingShowBoardShouldReturnCustomString)
{
    std::string s1 = " | - | - | - |\n  -----------\n | - | - | - |\n  -----------\n | - | - | - |\n  -----------\n";
    tab[0][0] = 'X';
    tab[1][1] = 'X';
    tab[2][2] = 'X';
    std::string s2 = " | X | - | - |\n  -----------\n | - | X | - |\n  -----------\n | - | - | X |\n  -----------\n";
    //std::string s3 = " | 0 | 0 | 0 |\n  -----------\n | 0 | 0 | 0 |\n  -----------\n | 0 | 0 | 0 |\n  -----------\n";
    //std::string s4 = " | 0 | 0 | 0 |\n  -----------\n | 0 | 0 | 0 |\n  -----------\n | 0 | 0 | 0 |\n  -----------\n";
    EXPECT_EQ(showBoard(tab),s2);
}

TEST_F(ProjectTest,IfPutSighIntoParticularCellThisShouldNotBeEmpty)
{
    createBoardGame(tab);
    tab[0][0] = 'X';
    EXPECT_FALSE(isCellEmpty(tab,0,0));
}


TEST_F(ProjectTest,IfPutOutOfRangeCoordinateSetValueShuldFalse)
{
    char sign = 'X';
	EXPECT_FALSE(setValue(tab,sign,2,3));
}


TEST_F(ProjectTest,SetValueShouldReturnTrueAfterSettingValue)
{
    char sign = 'X';
	EXPECT_TRUE(setValue(tab,sign,0,2));
}









