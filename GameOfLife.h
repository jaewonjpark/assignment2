// Jaewon Park
// 2328614
// jaepark@chapman.edu
// CPSC 350
// Assignment 2 - Game of Life

#include <iostream>
#include <fstream>

using namespace std;

class Game {
  private:
    string outputType;
    string outFileName = "";
    string layoutFile = "";
    int generation;


  public:
    Game();
    ~Game();

    void gameSettings();
    void gameMode(int& boardLength, int& boardWidth, char**& board);

    int classicMode(int boardLength, int boardWidth, char**& board);
    int doughnutMode(int boardLength, int boardWidth, char**& board);
    int mirrorMode(int boardLength, int boardWidth, char**& board);

    void randomlyGenerateBoard(int& boardLength, int& boardWidth);
    void gameBoardFromFile(string file);

    void printOutputType(string outputType, int generation, char**& board, int boardLength, int boardWidth);
};
