#include<iostream>
using namespace std;

int main()
{
    char charCheck;
    cout<<"Enter a character: ";
    cin>>charCheck;
    //for uppercase alphabets
    if((charCheck >= 65) && (charCheck <= 90)) 
    {
        cout<<charCheck<<" is Uppercase Alphabet";
    }
    // for lowercase alphabets
    else if((charCheck >= 97) && (charCheck <= 122))
    {
        cout<<charCheck<<" is Lowercase Alphabet";
    }
    //for digits
    else if((charCheck >= 48) && (charCheck <= 57))
    {
        cout<<charCheck<<" is a Digit";
    }
    //all remaining are special characters
    else
    {
        cout<<charCheck<<" is a Special Character";
    }
    return 0;
}
