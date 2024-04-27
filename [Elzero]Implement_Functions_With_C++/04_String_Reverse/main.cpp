#include<iostream>
#include <string>

using namespace std;

static string string_reverse_helper(string l_str)
{
    string result;
    
    if(l_str.length()!=0)
    {
        for(unsigned int i=((unsigned int)(l_str.length())) - 1; i >0; i--)
        {
            result+=l_str[i];
        }
        result+=l_str[0];
    }
    else 
    {/*Nothing*/}

    return result;
}

string string_reverse(string l_str)
{
    string result="";
    string temp="";
    char str2=' ';

    for(unsigned int i=0; i<(unsigned int )(l_str.length()); i++)
    {
        if(l_str[i] ==str2)
        {
            result += string_reverse_helper(temp);
            result+=" ";
            temp="";
        }
        else
        {
            temp+= l_str[i];
        }
        
    }
    result+=temp;

    return result;
}

int main()
{
    string str="Ahmed Mohamed Abdalla";
    cout << str << endl;
    cout << string_reverse(str)<< endl;
    str="Long Live Egypt";
    cout << str << endl;
    cout << string_reverse(str)<< endl;

    return 0; 
}