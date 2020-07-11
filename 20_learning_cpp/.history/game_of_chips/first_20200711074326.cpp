#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//  we make sure the max chips will be under 100
// so we deeclare a const and const can declare
// outside the main function
const int MAX_CHIPS = 100; // this will not change
const int MAX_TURN = .5;
int main()
{
    bool playerTurn = true;
    bool gameOver = false;

    // in the beginning the chips in the pile are 0
    // and the chips taken are 0
    int chipsinPile = 0;
    int chipsTaken = 0;

    // seed the random number
    srand(time(0));
    chipsinPile = (rand() % MAX_CHIPS) + 1;
    cout << "This round wil start with " << chipsinPile << endl;
    cout << chipsinPile * MAX_TURN << endl;
    return 0;
}