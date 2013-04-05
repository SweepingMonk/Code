#include <iostream>
<<<<<<< HEAD
#include <map>
=======
#include <fstream>
#include <math.h>
>>>>>>> a69145c9a01031160de9ea8929a5cd1664589427
using namespace std;

void getNext(char * origin, int * next)
{
    int i=0;
    int j=-1;
    next[0]=-1;
    while(i<strlen(origin))
    {
        if(j==-1 || origin[i]==origin[j])
        {
            i++;
            j++;
            next[i]=j;
        }
        else
            j=next[j];
    }
}

int kmp(char * target, char * origin)
{
    int i,j;
    i=j=0;
    while(i<strlen(target) && j<strlen(origin))
    {
        if(j==-1 || target[i]==origin[j])
        {
            i++;
            j++;
        }
        else
            j=next[j];
    }
    if(j>=strlen(traget))
        return i-strlen(origin);
    return -1;
}

int main()
{
<<<<<<< HEAD
    int next[10];
    char origin[11];
    cin>>origin;
    getNext(origin,next);
    for(int i=0;i<strlen(origin);i++)
        cout<<next[i]<<" ";
    cout<<endl;
=======
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
>>>>>>> a69145c9a01031160de9ea8929a5cd1664589427
    return 0;
}
