#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Enter value of N:";
    cin>>n;
   // int *a=new int [n]; //or
    int *a=new int [n+i];
    for(i=0;i<n;i++)
    {
        cout <<"Enter value of N but in array";
        cin>>a[i];

    }
    cout<<"\n out put \n";
    for (i=0;i<n;i++)
    {
        cout <<a[i]<<endl;

    }
    delete[]a;
}
