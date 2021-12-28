#include<iostream>
using namespace std;
class complex
{
    int real, img ;
public:
    void setcom(int r, int i)
    {
        real =r;
        img=i;

    }
    void show()
    {
        cout<<real<<" + "<<img<<"i"<<endl;

    }
    void compsum1(complex &iobj)
    {
        real=real+iobj.real;
        img=img+iobj.img;
    }
    complex compsum2(complex robj)
    {
        complex hero;
        hero.real=real+robj.real;
        hero.img=img+robj.img;
        return(hero);

    }
};
int main ()
{
    complex a, b;
    int x,y,p,q;

   cout<<"\t\t\t\t\t\t"<<"SUM OF TWO COMPLEX NUMBER"<<endl<<endl<<endl<<endl;
    cout<<"Enter the  value of first complex number :   "<<endl;
    cin>>x>>y;
    cout<<"Enter the value of second complex number: ";
    cin>>p>>q;
    a.setcom(x,y);
    b.setcom(p,q);
    a.compsum1(b);
    a.show();
    b.show();
    complex c;
    c=b.compsum2(a);
    c.show();
    {

    cout <<"NOTE: i=imaginary"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"Made by :_-"<<endl;

    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\SATISH JAISWAL"<<endl<<endl;
    cout<<"Thank  you for  watching "<<endl<<endl;
    cout<<"AAP KA DIN SUBH HO"<<endl<<endl<<endl;
    }
}
