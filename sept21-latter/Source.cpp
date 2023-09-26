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


    //int aNumber = 2; 
    //char aLetter = 'z'; 
    //string someWord = "hello"; 
    //double pi = 3.14; 
    //float lessPrecisePi = 3.1f; 

    //bool lightsOn = false; 

    ////bool whichIsGreater = 5 > 6; //false

    //int negativeFive = -5; //single equal sign means "assign to"
    //int zero = 0; 

    //string correctPassword = "123456"; //Spaceballs 
    //cout << "Enter your password: " << endl; 
    //string enteredPassword; 
    //cin >> enteredPassword;

    //if (enteredPassword != correctPassword) //double equal sign means "ask if equal"
    //{
    //    cout << "Login successful - welcome to your wonderful social media app!" << endl; 
    //}

    //int numberToTest = 4; 

    //if (numberToTest % 2 == 1)
    //{
    //    cout << "Odd" << endl; 
    //}

    //else
    //{
    //    cout << "Even" << endl; 
    //}

    int age = 21; 
    cout << "Enter age: " << endl; 
    cin >> age; 

    //if (age > 0)
    //{

    //}
    if (age > 12  && age <= 21/* && age >= 0*/) //"edge case"
    {
        cout << "You are no longer a child - you are a teenager" << endl;
    }
    //if ... else if .... else
    else if (age > 21 && age < 35)
    {
        cout << "You are an adult now" << endl; 
        cout << "Some more text in the adult field" << endl; 
    }

    else if (age >= 35 && age < 60)
    {
        cout << "You feel old now - bad joints, bad knees, etc" << endl; 
    }

    else
    {
        cout << "You actually are old" << endl; 
    }
    return 0;
}