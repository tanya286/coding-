//to find no of capital letters,small letters,digits and special characters in a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="HeLLo 12* whatSup";
    int uc=0,lc=0,dc=0,sc=0,sp=0;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch>='a'&& ch<='z')
        {
            lc++;
        }
        else if(ch>='A'&& ch<='Z')
        {
            uc++;
        }
        else if(ch>='0'&& ch<='9')
        {
            dc++;
        }
        else if(ch==' ')
        {
            sp++;
        }
        else 
        {
            sc++;
        }
    }
    cout<<lc<<endl;
    cout<<uc<<endl;
    cout<<dc<<endl;
    cout<<sp<<endl;
    cout<<sc<<endl;
return 0;

    
}