#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c,d,p,q;
    cout<<"Enter the number:"<<endl;
    cin>>a>>b>>c>>d;
    p=((c-a)*(c-a)+(d-b)*(d-b));
    q=sqrt(p);
    cout<<"The diff b/w (a-b)-(c-d) is:"<<q<<endl;

    return 0;
}