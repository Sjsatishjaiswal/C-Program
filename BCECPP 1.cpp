#include <iostream>
#include <conio.h>
using namespace std ;
class v
{
     float vol, r, h;
 public :
    void put()
    {
        cout<<"Enter the  radius , hight :";
        cin>>r>>h>>endl;

    }
    void volum()
    {
        vol=(22*r*r*h)/7;

    }
    void show ()
    {
        cout<<"volume of cylinder is :"<<vol<<endl;

    }
};
int main()
{
    v volume;
    volume.put();
    volume.volum();
    volume.show();
}
