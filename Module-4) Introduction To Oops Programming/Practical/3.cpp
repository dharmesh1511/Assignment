// #include<iostream>
// using namespace std;
// int main()
// {
//     int length,width,area;

//     cout<<"Enter area of lenth::";
//     cin>>length;
//     cout<<"Enter area of width::";
//     cin>>width;

//     area=length*width;

//     cout<<"Area of rectangle is "<<area;
// }

#include<iostream>
using namespace std;
class Ractangle
{
    private:
    int length,width;
    public:
    int area()
    {
        cout<<"Enter area of length::";
        cin>>length;
        cout<<"Enter area of width::";
        cin>>width;
        return length*width;
    }
};
int main()
{
    Ractangle rect;
    cout<<"Area of rectangle is "<<rect.area();
}