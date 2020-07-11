// writing item to the file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inStream;
    string passphrase;
    inStream.open("passphrase.txt");
    ofstream outstream;
    outstream.open("second.txt");
    if (!inStream.fail())
    {
        while (inStream >> passphrase)
        {
            cout << "The PassPhrase is " << passphrase << endl;
            outstream << passphrase << endl;
        }
    }
    inStream.close();
}