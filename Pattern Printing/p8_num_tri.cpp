#include<iostream>
using namespace std;
int main()
{
    int n;
   
    cout<<"Enter number:";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=2*i;j++)
        {
            if(j%2!=0)
            cout<<j<<" ";
        }
        cout<<endl;
    }
}