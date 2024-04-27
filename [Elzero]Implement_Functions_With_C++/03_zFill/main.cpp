/**
 * @file zfil.cpp
 * This file contains the implementation of a function to left-fill a string with a specified character.
 */

#include<iostream>
using namespace std;

/**
 * @brief Function to left-fill a string with a specified character.
 * 
 * This function takes a string, a desired length, and an optional fill character as input.
 * It pads the input string on the left with the fill character until it reaches the desired length,
 * and returns the resulting string.
 * 
 * @param l_str The input string to be left-filled.
 * @param l_len The desired length of the resulting string.
 * @param l_fill The fill character to use (default is a space character).
 * @return The left-filled string.
 */
string zfil(string l_str, unsigned int l_len, string l_fill = " ")
{
    string result="";

    // Calculate the number of characters to pad
    int pad_length = l_len - l_str.length();

    // Add the fill character to the result 'pad_length' times
    for(int i = 0; i <= pad_length; i++)
    {
        result += l_fill;
    }

    // Append the input string to the padded characters
    result += l_str;

    return result;
}

/**
 * @brief Main function.
 * 
 * This function demonstrates the usage of the zfil function by left-filling
 * three example strings with spaces to make them of equal length and prints the results.
 * 
 * @return 0 on successful execution.
 */
int main()
{
    // Example 1: Left-fill "hello" with spaces to make it 30 characters long
    cout << zfil("hello", 30) << endl;

    // Example 1: Left-fill "welcome to the jungle" with spaces to make it 30 characters long
    cout << zfil("welcome to the jungle", 30) << endl;

    // Example 3: Left-fill "10.000" with spaces to make it 30 characters long
    cout << zfil("10.000", 30) << endl;

    return 0;
}
