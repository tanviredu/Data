#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int numEggs = 3 * 1.5;
    // this is the num casting
    // casting a number looks like this
    cout << static_cast<int>(numEggs * 1.5);
    cout << "" << endl;
    cout << static_cast<double>(numEggs * 1.5);
    return 0;
}
