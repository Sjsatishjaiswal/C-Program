#include <iostream >
using namespace std ;
class rect
{
    int  l,b ,a;

public :
    void input ()

    {
        cout <<"Ënter the value of length & breadth:";
        cin>>l>>b;


    }
    void area()
    {
        a=l*b;
        cout<<"Area:"<<a;

    }
};
int main ()
{
    rect *pobj=new rect ();//or
    //rect*pobj;
    pobj=new rect();
    (*pobj).input();
    (*pobj).area();
    /*pobj ->area ();
    delete pobj;
    pobj=0;*/
}
