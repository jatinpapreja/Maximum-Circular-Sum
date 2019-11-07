#include<iostream>
using namespace std;
void shifting(int a[],int n)
{
    int temp;
    temp=a[0];
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
int main()

{
    int t;cin>>t;
    for(int j=0;j<t;j++)
   {

    int n,cs,ms=INT8_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++)
    {
     cs=0;
    for(int i{};i<n;i++)
        {
            cs+=a[i];
            if(cs>ms)
            {
                ms=cs;
            }
            if(cs<0)
                cs=0;
        }
    shifting(a,n);
}
cout<<ms<<endl;}
return 0;
}
