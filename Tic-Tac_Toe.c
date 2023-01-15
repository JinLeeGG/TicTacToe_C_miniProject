#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>

/* Initialize the base */
char base[10] = {"none", "1", "2", "3", "4", "5", "6", "7", "8", "9"}; //"none" is only to match the index so there is no confusion

int checkWin();
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
}


