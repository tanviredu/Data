// writing item to the file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inStream;
    string passphrase;
    instream.open("passphrase.txt");
    ofstream outstream;
    outstream.open("second.txt");
    if (!instream.fail())
    {
        while (instream >> passphrase)
        {
            cout << "The PassPhrase is " << passphrase << endl;
            outstream << passphrase;
        }
    }
    inStream.close();
}