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
    a.setcom(4,7);
    b.setcom(9,5);
    a.compsum1(b);
    a.show();
    b.show();
    complex c;
    c=b.compsum2(a);
    c.show();

}
