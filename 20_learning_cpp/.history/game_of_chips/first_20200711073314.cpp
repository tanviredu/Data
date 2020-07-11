#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

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
    chipsinPile = (rand() % 100) + 1;
    cout << "This round wil start with " << chipsinPile << endl;
    return 0
}