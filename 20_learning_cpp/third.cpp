// this is a random number generator

#include <iostream>
#include <ctime>   // this is for the time livrary
#include <cstdlib> // this is for the random number
using namespace std;
int main()
{
    // creating a random  number generator for the dice
    int dice = 0;
    srand(time(0)); // this is the seeding
    // create a random number for time zero
    // so for every time we get a new number
    dice = (rand() % 6) + 1;
    cout << "you rolled " << dice << endl;
    return 0;
}