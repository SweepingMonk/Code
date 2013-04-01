#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    ifstream cin("in");
    long long a,b,c,t;
    int k;
    while(cin>>a>>b>>c>>k)
    {
        if(a==0 && b==0 && c==0 && k==0)
            break;
        t =1 <<k;
        if(((t-a+b)%t)%c!=0)
            cout<<"FOREVER"<<endl;
        else
        {
            if(a<=b)
                cout<<(b-a)/c<<endl;
            else
                cout<<(t-a+b)/c<<endl;
        }
    }
    return 0;
}
