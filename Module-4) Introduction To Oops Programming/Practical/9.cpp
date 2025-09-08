#include<iostream>
using namespace std;
int main()
{
    int num,total;
    cout<<"Enter your table no::";
    cin>>num;
    for (int i=1;i<=10;i++)
    {
        total=num*i;
        cout<<num<<" "<<i<<" "<<total<<"\n";
    }
}