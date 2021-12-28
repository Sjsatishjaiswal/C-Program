
#include <iostream>
   class complex
{
    int real,img;
public:
    void input()
    {
        int p,q;
        cout<<"ENTER VALUE REAL AND IMGINARY:"<<endl;
        cin>>p>>q;
    }
void SetComplex(int comp1,int comp2)
{
    p=comp1.p+comp2.p;
    q=comp1.q+comp2.q;
}
void show()
{
    cout<<"sum="<<p<<" + "<<q<<"i"endl;
}

};
int main ()
{
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3.SetComplex(c1,c2);
    c3.show();
    return (0);
}
