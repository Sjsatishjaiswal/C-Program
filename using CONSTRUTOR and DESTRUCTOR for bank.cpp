#include <iostream>
using namespace std;
class Bank
{
    float bel;
public:
    Bank()//default constructor
    {
        bel=5000;

    }
    void show()
{
    cout<<"bel="<<bel<<endl;
}
Bank(float b)//parameterization constructor
{
    bel=b;
}
Bank(Bank &r)//copy constructor
{
    bel=r.bel;

}
~Bank()//destructor
{
    cout<<"ok Alvida ";
}
};
int main()
{
    Bank amn ;//(call del) deceleration creation
    amn.show();//given value
    Bank rmn(81000.81);//call parameter constructor
    rmn .show();//81000.81
    BANK(rmn);
    chmn.show();
}
