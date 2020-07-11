// program in c++ starts here

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    //  this is the output program
    string favFood;
    cout << "Hello world" << endl; 
    cout << "This is my first Cpp Programming" << endl;

    // take the input the name
    string name;
    cout << "Please Enter your name  " << endl;
    cin >> name;  //that means the input goes to the name
    cout << "your name is : " << name << " and you are awesome" << endl;
    //  prompt it the user

    cout << "Hello " << name << " what is your fac food" << endl;
    cin >> favFood;

    cout << name << " your fav food is " << favFood << endl;

    return  0;


}
