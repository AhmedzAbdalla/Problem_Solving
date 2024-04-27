/**
 * @file string_reverse.cpp
 * This file contains the implementation of functions to reverse strings and reverse the order of words in a string.
 */

#include<iostream>
#include <string>

using namespace std;

/**
 * @brief Helper function to reverse a string.
 * 
 * This function takes a string as input and returns its reverse.
 * 
 * @param l_str The string to be reversed.
 * @return The reversed string.
 */
static string string_reverse_helper(string l_str)
{
    string result;
    
    if(l_str.length()!=0)
    {
        // Iterate through the string in reverse and construct the reversed string
        for(unsigned int i=((unsigned int)(l_str.length())) - 1; i >0; i--)
        {
            result+=l_str[i];
        }
        // Add the first character of the original string to the end of the reversed string
        result+=l_str[0];
    }
    else 
    {
        // If the string is empty, return an empty string
        /*Nothing*/
    }

    return result;
}

/**
 * @brief Function to reverse the order of words in a string.
 * 
 * This function takes a string as input, splits it into words separated by spaces,
 * reverses the order of the words, and returns the resulting string.
 * 
 * @param l_str The string whose words need to be reversed.
 * @return The string with the words reversed.
 */
string string_reverse(string l_str)
{
    string result="";
    string temp="";
    char str2=' ';

    // Iterate through each character of the input string
    for(unsigned int i=0; i<(unsigned int )(l_str.length()); i++)
    {
        // If the current character is a space, reverse the temporary string and append it to the result
        if(l_str[i] == str2)
        {
            result += string_reverse_helper(temp);
            result+=" ";
            temp="";
        }
        else
        {
            // If the current character is not a space, append it to the temporary string
            temp+= l_str[i];
        }
    }
    // Append the last word (or the only word if there are no spaces in the string) to the result
    result+=temp;

    return result;
}

/**
 * @brief Main function.
 * 
 * This function demonstrates the usage of the string_reverse function by reversing
 * two example strings and printing the results.
 * 
 * @return 0 on successful execution.
 */
int main()
{
    // Example string 1
    string str="Ahmed Mohamed Abdalla";
    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << string_reverse(str)<< endl;

    // Example string 2
    str="Long Live Egypt";
    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << string_reverse(str)<< endl;

    return 0; 
}
