#include <iostream>
#include <fstream>
using namespace std;
// this is for reading and writing file

int main()
{
    ifstream instream;
    instream.open("passphrase.txt");
    string passphrase;
    if (!instream.fail())
    {
        // so the instream takes all the data
        // in the file
        // then we give them to the variable
        // then we print the variable
        instream >> passphrase;
        cout << "The Pasphrase is " << passphrase << endl;
    }
}