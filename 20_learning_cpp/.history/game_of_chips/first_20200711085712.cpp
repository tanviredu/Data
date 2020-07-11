#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//  we make sure the max chips will be under 100
// so we deeclare a const and const can declare
// outside the main function
const int MAX_CHIPS = 100; // this will not change
const float MAX_TURN = .5;
int main()
{
    bool playerTurn = true;
    bool gameOver = false;
    // in the beginning the chips in the pile are 0
    // and the chips taken are 0
    int chipsinPile = 0;
    int chipsTaken = 0;
    int maxPerTurn = 0;
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
    chipsinPile = (rand() % MAX_CHIPS) + 1;
    cout << "This round wil start with " << chipsinPile << endl;
    // prompting the user with a do while loop

    while (gameOver == false)
    {
        // until the game is over
        // the inner loop will work
        do
        {
            if (player1turn)
            {
                // output the first element of the player
                cout << PlayerName[0] << " how many chips do  you like ?? \n >";
            }
            else
            {
                cout << PlayerName[1] << " how many chips do  you like ?? \n >";
            }
            cout << "you can take upTo " << static_cast<int>(MAX_TURN * chipsinPile) << endl;
            cin >> chipsTaken;
            cout << "There are " << chipsinPile << " left on the table" << endl;
        } while (chipsTaken > (static_cast<int>(MAX_TURN * chipsinPile)) && (chipsinPile > 1));

        // now we need the condition to end the loop
        chipsinPile = chipsinPile - chipsTaken;
        cout << "There are " << chipsinPile << " left on the table" << endl;
        // now end the loop
        if (chipsinPile == 0)
        {
            gameOver == true;
        }
        else
        {
            // kep interchanging the player
            player1turn = !player1turn;
        }
    }

    return 0;
}