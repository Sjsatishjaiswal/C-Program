#include <iostream>
using namespace std;
class Bank
{
private:
    int sb, cb;
public:

        void setbel(int S, int C)
        {

        sb=S;
        cb=C;
    }
    void show()
    {
        cout<<sb<<" \t\t \t"<<cb<<endl;
    }
    void party(Bank &robj)//not use comma
    {
        sb=sb+robj.sb;
        cb=cb+robj.cb;
    }
    Bank party2(Bank satishobj)
    {
        Bank bhei;
        bhei.sb=sb+satishobj.sb;
        bhei.cb=cb+satishobj.cb;
        return(bhei);
    }
};
int main ()
{
    Bank satish, sahil;

    satish.setbel(4,2);
   sahil.setbel(100,4);
   satish.show();
   sahil.show();
   satish.party(sahil);//passing object
   satish.show();
   sahil.show();
   Bank chmn;
   chmn=sahil.party2(satish);
   chmn.show();
}
