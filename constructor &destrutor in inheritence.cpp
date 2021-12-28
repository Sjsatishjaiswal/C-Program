#include <iostream>
using namespace std ;
class b
{
public:
    b()
    {
        cout <<"cout of class b\n";

    }
    ~b()
    {
        cout <<"derived of class b\n";

    }
};
class d:public b
{
public:
    d()
    {
        cout<<"cout of class d:\n";

    }

        ~d()
        {
            cout <<" \n rest of class\n";
        }

};
int main ()
{
    d obj;

}
