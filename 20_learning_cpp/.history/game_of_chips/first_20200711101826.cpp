#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

string FindPlayerName(string name[], bool player1turn)
{
    if (player1turn)
    {
        return name[0];
    }
    else
    {
        return name[1];
    }
}

//  we make sure the max chips will be under 100
// so we deeclare a const and const can declare
// outside the main function
const int MAX_CHIPS = 100; // this will not change
const float MAX_TURN = .5;
int main()
{
    ofstream outstream;
    outstream.open("log.txt");
    bool playerTurn = true;
    bool gameOver = false;
    // in the beginning the chips in the pile are 0
    // and the chips taken are 0
    int chipsinPile = 0;
    int chipsTaken = 0;
    int maxPerTurn = 0;
    char UserChoice;
    //  adding  a player turn
    bool player1turn = true;

    // need two player name in the array
    string PlayerName[2];
    cout << "Player 1 Enter your name " << endl;
    cin >> PlayerName[0];
    cout << "Player 2 Enter your name " << endl;
    cin >> PlayerName[1];

    // seed the random number
    srand(time(0));
    do
    {
        chipsinPile = (rand() % MAX_CHIPS) + 1;
        cout << "This round wil start with " << chipsinPile << endl;
        // prompting the user with a do while loop
        // if the user choice is Y then gameOver will be false again
        // and the game will be start again
        gameOver = false;
        while (gameOver == false)
        {
            do
            {
                // if (player1turn)
                // {
                cout << "Welcome " << FindPlayerName(PlayerName, player1turn) << " HOW Many Chips do You like" << endl;
                // }
                // else
                // {
                // cout << "Welcome " << FindPlayerName(PlayerName, player1turn) << " HOW Many Chips do You like" << endl;
                // }
                cout << "You can take up to ";
                if (static_cast<int>(MAX_TURN * chipsinPile) == 0)
                {
                    cout << "1 \n";
                }
                else
                {
                    cout << static_cast<int>(MAX_TURN * chipsinPile) << endl;
                }

                cin >> chipsTaken;

            } while (chipsTaken > (static_cast<int>(MAX_TURN * chipsinPile)) && (chipsinPile > 1));
            chipsinPile = chipsinPile - chipsTaken;
            cout << "There are " << chipsinPile << " Left in the Pile\n";
            if (chipsinPile <= 0)
            {
                gameOver = true;
                if (player1turn)
                {
                    // now if the last player 1 turn
                    // then the player 2 wins
                    cout << PlayerName[1] << " WON" << endl;
                    outstream << PlayerName[1];
                }
                else
                {
                    cout << PlayerName[0] << " WON" << endl;
                    outstream << PlayerName[0];
                }
            }
            else
            {
                player1turn = !player1turn;
            }
        }
        cout << "Do you want to play Again ??? (Y/N)" << endl;
        cin >> UserChoice;

    } while ((UserChoice == 'Y') || (UserChoice == 'y'));

    return 0;
}
