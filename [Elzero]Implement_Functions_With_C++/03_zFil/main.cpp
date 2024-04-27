#include<iostream>


using namespace std;

string zfil(string l_str, unsigned int l_len, string l_fill = " ")
{
    string result="";

    for(int i = 0; i<=(int)(l_len - l_str.length()); i++)
    {
        result+=l_fill;
    }

    result+=l_str;

    return result;
}


int main()
{
    cout << zfil("hello" , 10) << endl;
    cout << zfil("10.000" , 10) << endl;
    cout << zfil("welcome to the jungle" , 10) << endl;


    return 0;
}