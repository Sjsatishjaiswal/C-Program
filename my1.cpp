#include<iostream>
using namespace std;
int main()
 {
     int n;
     char p[50],i,j,temp;
cout<<"enter the value of N:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter the value of letter no "<<i+1<<":";
cin>>p[i];
}
for(i=n-1;i>0;i--)
{
    for(j=0;j<i;j++)
    {
     if(p[j]>p[j+1])
     {
        temp=p[j];
        p[j]=p[j+1];
        p[j+1]=temp;
     }

    }
}
cout<<"sorted array:";
for(j=0;j<n;j++)
{
    cout<<p[j]<<"\n";
}
}
