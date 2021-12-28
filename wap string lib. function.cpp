#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    char s1[20],s2[20];
    cout<<" Enter string:"<<endl;
    cin.getline(s1,20);
    int l=strlen(s1);
    cout<<"length ="<<l<<endl;
    char ch ='a';
    ch=ch-32;
    cout <<"\n ch ="<<" "<<ch<<endl;
    strlwr(s1);
    cout<<"\n lower case :"<<s1<<endl;
    strupr(s1);
    cout<<" "<<"upper case :"<<"\t"<<s1<<endl;
    strcpy(s1,s2);
    cout<<"\n copied string :"<<s2[]<<endl;

}
