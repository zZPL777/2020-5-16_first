#include<iostream>

using namespace std;
int com(int a,int b)
{
    return (a>b)? a:b;
}
int main()
{
    cout<<"this is my first file";
    int a=1,b=2;
    cout<<com(a,b)<<endl;
    return 0;
}