#include <iostream>

#include<fstream>

using namespace std;

int main()
{
    //cout << "NOT hello world" << endl; 

    //cout << "Something else!" << endl; 
    //int a = 2; 
    //int b = a * 2; 

    //cout << b << endl; 

    //ifstream inputFile{ "input.txt" };

    //string input; 

    //inputFile >> input; 

    //cout << input << endl;


    int aNumber = 2; 
    char aLetter = 'z'; 
    string someWord = "hello"; 
    double pi = 3.14; 
    float lessPrecisePi = 3.1f; 

    bool lightsOn = false; 

    //bool whichIsGreater = 5 > 6; //false

    int negativeFive = -5; //single equal sign means "assign to"
    int zero = 0; 

    string correctPassword = "123456"; //Spaceballs 
    cout << "Enter your password: " << endl; 
    string enteredPassword; 
    cin >> enteredPassword;

    if (enteredPassword != correctPassword) //double equal sign means "ask if equal"
    {
        cout << "Login successful - welcome to your wonderful social media app!" << endl; 
    }

    return 0;
}