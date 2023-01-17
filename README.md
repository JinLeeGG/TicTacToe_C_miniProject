# TicTacToe_C_miniProject

## Introduction
This is a simple command-line based Tic Tac Toe game written in C programming language. The game is played between two players and the goal is to place three of your symbols (either 'X' or 'O') in a horizontal, vertical, or diagonal row.

## Algorithms
this is all possibilities of winning:

![image](https://user-images.githubusercontent.com/98343991/212817992-ddbad16d-1d2e-49b8-87e0-0a3de1724cc7.png)


## Requirements
A C compiler (e.g. GCC)

## How to Play
1. Compile the source code using a C compiler (e.g. gcc -o tic-tac-toe tic-tac-toe.c)
2. Run the compiled executable file (e.g. ./tic-tac-toe)
3. The game will prompt you to enter the row and column coordinates of the cell where you want to place your symbol. The top-left cell is (0,0), the top-middle cell is (0,1), etc.
4. The game will alternate between player 1 (X) and player 2 (O) until one of them wins or the game ends in a draw.
5. The game will announce the winner or that the game is a draw.

## Game Rules
- The game is played on a 3x3 grid
- Player 1 is X and player 2 is O
- Players take turns placing their symbol on an empty cell
- A player wins if they place three of their symbols in a horizontal, vertical, or diagonal row
- The game ends in a draw if all cells are filled and no player has won

## Limitations
- The game does not check for invalid input. It is the responsibility of the player to enter valid row and column coordinates.
- The game does not check for the case where player enters the same cell twice.
- The game does not handle error or invalid input.

## Contact
For any issues or suggestions, please contact me at gjlee99211@gmail.com.
