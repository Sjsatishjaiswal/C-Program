#include <iostream>
using namespace std;
class factorial
{
    int  i=1, num , f=1;
public:
    void input()
    {
        cout<<"value enter number to find factorial:"<<endl;
        cin>>num;
    }
    void cal()
    {


    while(i<=num)
    {
    f=f*i;
    i++;
    }}
    void show()
    {
        cout<<"The factorial of:"<<f;

    }

};
int main ()
{
     factorial delhi;
     delhi.input();
     delhi.cal();
     delhi.show();
}
