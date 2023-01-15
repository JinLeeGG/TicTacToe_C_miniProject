#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>

/* Initialize the base */
char base[10] = {"none", "1", "2", "3", "4", "5", "6", "7", "8", "9"}; //"none" is only to match the index so there is no confusion

int checkWin(); //it will return 1 if there is winner, -1 if the game is in progress, and 0 if game has been drawn  
void drawBoard();


/* 
initalize player to keep track of player. 
Initialy it has the value of 1,
i is for tracking progress of the game (whether the game is in progress or not),
and choice is to tracking user's choice. 
*/
int main(){
    int player = 1, i, choice;
    char mark; //X or O
    do {
        drawBoard();
        player = (player % 2) ? 1 : 2; //if player's value is zero, it will return false and if its 1, it will return true
        printf("Player %d, enter the choice : ", player);
        scanf("%d", &choice);
        
        mark = (player == 1) ? 'X' : 'O'; 

        // if player's choice is n number, mark n 
        if(choice == 1 && base[1] == "1"){
            base[1] = mark;
        } 
        else if (choice == 2 && base[2] == "2"){
            base[2] = mark;
        } 
        else if (choice == 3 && base[3] == "3"){
            base[3] = mark;
        } 
        else if (choice == 4 && base[4] == "4"){
            base[4] = mark;
        } 
        else if (choice == 5 && base[5] == "5"){
            base[5] = mark;
        } 
        else if (choice == 6 && base[6] == "6"){
            base[6] = mark;
        } 
        else if (choice == 7 && base[7] == "7"){
            base[7] = mark;
        } 
        else if (choice == 8 && base[8] == "8"){
            base[8] = mark;
        } 
        else if (choice == 9 && base[9] == "9"){
            base[9] = mark;
        } 
        
        //if player's choice is invalid
        else {
            printf("Sorry I can't do that please try again.");
            player--;
            getch(); //return to the game
        }
        i = checkWin(); 
        player++;
        



    } while (i == -1);

    drawBoard();
    if(i == 1) {
        printf("Player %d Won!!", --player);
    }
    else {
        printf("==>Game draw");
    }
        getch();
        return 0;
}

/*
Tic Tac Toe has 8 winning cases  
*/
int checkWin(){
    if(base[1] == base[2] && base[2] == base[3]){
        return 1;
    }
    else if(base[4] == base[5] && base[5] == base[6]){
        return 1;
    }
    else if(base[7] == base[8] && base[8] == base[9]){
        return 1;
    } 
    else if(base[1] == base[4] && base[4] == base[7]){
        return 1;
    } 
    else if(base[2] == base[5] && base[5] == base[8]){
        return 1;
    } 
    else if(base[3] == base[6] && base[6] == base[9]){
        return 1;
    } 
    else if(base[1] == base[5] && base[5] == base[9]){
        return 1;
    } 
    else if(base[3] == base[5] && base[5] == base[7]){
        return 1;
    } 
    else if(base[1] != "1" && base[2] != "2" && base[3] != "3" && base[4] != "4" && base[5] != "5" && base[6] != "6" && base[7] != "7" && base[8] != "8" && base[9] != "9"){
        return 0; //we have no winner
    }
    else 
        return -1; //game is still in the progress
}

void drawBoard(){
    system("cls");
    printf("\n\n\t Tic Tac Toe \n\n");
    printf("Plyer1 (X) - Player2 (O) \n\n\n");
    printf("    |    |    \n");
    printf(" %c  |   %c  |  %c  \n", base[1], base[2], base[3]);
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf(" %c  |   %c  |  %c  \n", base[4], base[5], base[6]);
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf(" %c  |   %c  |  %c  \n", base[7], base[8], base[9]);\
    printf("    |    |    \n");
}
