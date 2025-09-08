#include<iostream>
using namespace std;
int main()
{
    char playagin='y';

    while(playagin =='y' || playagin =='Y')
    {
        int target;
        int guss;
        cout<<"Enter the target number (0 to 100)::";
        cin>>target;
        guss=0;
        while(guss!=target)
        {
            cout<<"\n"<<"Enter guss number::";
            cin>>guss;

            if(guss>target)
            {
                cout<<"Too high! Try agin.";
            }
            else if(guss<target)
            {
                cout<<"Too low! Trt agin.";
            }
            else
            {
                cout<<"Congratulations! You gussed the correct number."<<"\n";
            }
        }

    cout<<"Do you want playagin(y/n)::";
    cin>>playagin;
}
    return 0;
}