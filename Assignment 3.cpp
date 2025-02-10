#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Define constants for board creation
const int WIDTH = 3;
const int HEIGHT = WIDTH;

void _player_switch(int &cplayer);
bool check_win(int size, char cboard[][HEIGHT], int moves, int spaces);

int main(){

    // Define a check for if the game is running
    bool playing = true;

    // Define what player is taking their turn
    int player = 1;


    // Define the number of spots on the board and the number of moves placed
    int spaces = WIDTH * HEIGHT;
    int moves = 0;

    // Define board
    char board[WIDTH][HEIGHT];

    // Create the base board using asterisks
    for(int x = 0; x < WIDTH; x++){
        for(int y = 0; y < HEIGHT; y++){
            board[x][y] = '*';
        }
    }

    // Continuously play the game until someone has won or it was a tie
    while(playing){

        // Define and reset temp variables
        int tempx = 0;
        int tempy = 0;

        // Recieve the player's move
        cin >> tempx >> tempy;

        // Check if the spot is taken
        if(tempx > WIDTH || tempy > HEIGHT){
            
            // If the spot is out of bounds, throw an error and redo the turn
            cout << "Spot out of bounds\n";
            _player_switch(player);

        }else if(board[tempy - 1][tempx - 1] == '*'){

            // If the spot is free, place a marker
            if(player == 1){
                board[tempy - 1][tempx - 1] = 'X';
            }else{
                board[tempy - 1][tempx - 1] = 'O';
            }

            // Increment moves
            moves++;

        }else{
            
            // If the spot is taken, throw an error and redo the turn
            cout << "Spot taken\n";
            _player_switch(player);

        }

        // Check if the game has ended (Only if its possible a player could have won yet)
        if (moves >= WIDTH){

            if(check_win(WIDTH, board, moves, spaces)){
                return 0;
            }

        }

        // Switch players every turn
        _player_switch(player);

        // Print board
        for(int i = 0; i < WIDTH; i++){
            for(int j = 0; j < HEIGHT; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
    }

    
    return 0;
}

// Switches the current player
void _player_switch(int &cplayer){
    if(cplayer == 1){
        cplayer = 2;
    }else{
        cplayer = 1;
    }
}

bool check_win(int size, char cboard[][HEIGHT], int moves, int spaces){
    
    // Check if all the spaces are filled and push a tie
    if(moves >= spaces){
        cout << "Game Over. it's a TIE.\n";
        return true;
    }

    // Loop through the collumns to check for vertical wins
    for(int x = 0; x < size; x++){

        // Check to see if the collumn starts with a player marker
        if(cboard[0][x] != '*'){
            
            // Define what player win we're looking for
            char temp = cboard[0][x];
            
            // Define the number of markers in a row
            int tempamount = 1;

            // Loop through the current collumn
            for(int y = 1; y < size; y++){

                // Check if its a matching marker
                if(cboard[y][x] == temp){

                    // Increment if it is
                    tempamount++;
                    cout << tempamount;

                    // Check if the player has won
                    if(tempamount >= size){
                        
                        if(temp == 'X'){
                            cout << "Player 1 (X) WINS!\n";
                        }else{
                            cout << "Player 2 (O) WINS!\n";
                        }
                        return true;
                    }
                }else{
                    break;
                }
            }
        }
    }

    // Loop through the rows to check for horizontal wins
    for(int x = 0; x < size; x++){

        // Check to see if the row starts with a player marker
        if(cboard[x][0] != '*'){
            
            // Define what player win we're looking for
            char temp = cboard[x][0];
            
            // Define the number of markers in a row
            int tempamount = 1;

            // Loop through the current row
            for(int y = 1; y < size; y++){

                // Check if its a matching marker
                if(cboard[x][y] == temp){

                    // Increment if it is
                    tempamount++;

                    // Check if the player has won
                    if(tempamount >= size){
                        
                        if(temp == 'X'){
                            cout << "Player 1 (X) WINS!\n";
                        }else{
                            cout << "Player 2 (O) WINS!\n";
                        }
                        return true;
                    }
                }else{
                    break;
                }
            }
        }
    }

    if(cboard[0][0] != '*'){

        // Define what player win we're looking for
        char temp = cboard[0][0];

        // Define the number of markers in a row
        int tempamount = 0;
        // Loop through the right diagonal 
        for(int i = 0; i < size; i++){

            // Check to see if the row starts with a player marker
            if(cboard[i][i] == temp){
                tempamount++;

                // Check if the player has won
                if(tempamount >= size){
                    if(temp == 'X'){
                        cout << "Player 1 (X) WINS!\n";
                    }else{
                        cout << "Player 2 (O) WINS!\n";
                    }
                        return true;
                    }

            }else{
                break;
            }
        }
    }


    if(cboard[size - 1][0] != '*'){

        // Define what player win we're looking for
        char temp = cboard[size - 1][0];

        // Define the number of markers in a row
        int tempamount = 0;
        // Loop through the right diagonal 
        for(int i = 0; i < size; i++){

            // Check to see if the row starts with a player marker
            if(cboard[i][size - i] == temp){
                tempamount++;

                // Check if the player has won
                if(tempamount >= size){
                    if(temp == 'X'){
                        cout << "Player 1 (X) WINS!\n";
                    }else{
                        cout << "Player 2 (O) WINS!\n";
                    }
                        return true;
                    }

            }else{
                break;
            }
        }
    }
    return false;
}