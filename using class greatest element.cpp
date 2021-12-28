#include<iostream>
using namespace std ;
class big
{
    int a, b, c;
    public:
    void input()
    {
        cout<<"Enter   A B C value  to compare: ";
        cin>>a>>b>>c;

    }
    void display()
    {
        if (a>b)
        {
            if(a>b)
                cout<<"A is greater";
            else
                cout <<"C is greater";

        }
        else
            if(b>c)
            cout<<"B is greater";
        else
            cout<<"C is greater";
    }
};
int main()
{
  big delhi;
    delhi.input();
    delhi.display();
}
