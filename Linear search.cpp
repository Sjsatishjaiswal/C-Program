#include <iostream>
using namespace std;
class linear
{
    int a[50],item,n ,i;
public:
    void input()
    {
        cout <<"Enter the array size to fill value <=50:";
        cin>>n;
        for (i=1;i<=n;i++)

        cin>>a[i];

    }

    void not_search()
    {
        cout<<"thank you"<<endl;
        cout<<"AAp KA DIN SUBH HO"<<endl;
    }
    void want()
    {
        cout <<"Enter the value to want :"<<endl;
        cin>>item;
        for(i=0;i<=n;i++)
            if(item==a[i])
        {
            cout<<"item  found at location "<<endl<<i<<endl<<endl;
            break;

        }
        if (i>n)
        {
            cout<<"Sorry"<<endl;
            cout <<"item does not exist"<<endl<<endl;
            cout<<"FOR EXIT"<<"\t\tPRESS THE :\t5"<<endl;



            cout<<" OR"<<endl<<endl;
            cout<<"Try again"<<endl;
            want();
           //t();
            }
    }
} ;
int main()
{
linear search;
search.input();
search.want();
search.not_search();
}
