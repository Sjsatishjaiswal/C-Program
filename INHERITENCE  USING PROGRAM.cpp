#include<iostream>
using namespace std;
class maths
{
public:
    float get square(float r)
    {
        return (r*r);
    }
}  ;
class circle
{
    float ar ,r;
public:
    void circle ()
    {
        cout <<"Enter radiou:";
        cin>>r;
        ar=3.14*getsquare(r);
        cout <<"Area :"<<ar;
    }
};
int main()
{
    circle am;
    am.circle();
}
