#include <iostream >
using namespace std;
class height;
class  radios
{
    float  rs;
public:
    void input()
    {
        cout<<"Enter the value of radios:";
        cin>>rs;

    }
    friend void cylinder(radios r,height h);

};
class height
{
    float ht;
public:
    void input ()
    {
        cout <<"Enter the value of height :";
        cin>>ht;
    }
        friend void cylinder (radios r,height h);



};
void cylinder (radios r,height h)
{
    float total=3.14*r.rs*r.rs*h.ht;
    cout<<"volume of cylinder is"<<total;
}
int main ()
{
    radios r;
    height h;
    r.input();
    h.input();
    cylinder (r,h);
}
