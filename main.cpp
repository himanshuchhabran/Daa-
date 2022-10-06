#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter any number:"<<endl;
    cin>>a;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    a=a*b;      //a=5,b=10 a=50
    b=a/b;      //b=50/10=5
    a=a/b;      //a=50,b=5
    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
