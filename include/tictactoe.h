#pragma once


const int SIZE = 3;



void createBoardGame(char tab[][SIZE]);

bool isCellEmpty(char tab[][SIZE],int,int);

std::string showBoard(char tab[][SIZE]);

bool setValue(char tab[][SIZE],char,int,int);

bool checkWinner(char tab[][SIZE],char);