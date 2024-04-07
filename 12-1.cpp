//Write a program that prompts the user to input a string and 
//outputs the string in uppercase letters. 
//(Use a dynamic character array to store the string.)

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //dynamically allocate memory for the string
    char *str = new char[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = toupper(str[i]);
    }

    cout << "Uppercase string converted: " << str << endl;

    //Deallocate the memory
    delete[] str;

    return 0;
}