#include<iostream>
using namespace std;
int main()
{
    int n,count =0;
    cout<<"Enter n:";
    cin>>n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<count;

}