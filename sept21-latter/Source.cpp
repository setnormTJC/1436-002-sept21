#include <iostream>

#include<fstream>

using namespace std;

int main()
{
    cout << "NOT hello world" << endl; 

    cout << "Something else!" << endl; 

    ifstream inputFile{ "input.txt" };

    string input; 

    inputFile >> input; 

    cout << input << endl;

    return 0;
}