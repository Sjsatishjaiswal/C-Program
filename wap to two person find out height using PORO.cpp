#include<iostream>
#include<cmath>
using namespace std ;
class Height
{
    int feet,inch;
public:
    void seth(int f,int i)
    {
        feet=f;
        inch=i;

    }
    void show()
    {
        cout<<feet<<" "<<inch<<endl;

    }
    Height diff2(Height robj)
    {
        Height Don;
        int d=abs((feet*12+inch)-(robj.feet*12+robj.inch));
        Don.feet=d/12;
        Don.inch=d%12;
        return(Don);
    }
};
int main ()
{


Height S, T;
S.seth( 12,9);
T.seth(18 ,12);
S.show();
T.show();
Height big;
big=T.diff2(S);
big.show();
}
