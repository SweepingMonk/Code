//1845
#include <iostream>
using namespace std;

int a,b;
int table[1000000],num[1000000];
int t,p;

void getMult(int a)
{
    int k=a;
    int count;
    p=0;
    for(int i=2; i*i<=a && k > 1;)
    {
        count=0;
        while(k%i==0)
        {
            count++;
            k/=i;
        }
        if(count>0)
        {
            table[p]=i;
            num[p++]=count;
        }
        if(i==2)
            i++;
        else
            i+=2;
    }
    if(k > 1)
    {
        table[p]=k;
        num[p++]=1;
    }
}

long long power(int base, int n)
{
    if(n==0)
        return 1;
    long long t=power(base,n/2) % 9901;
    t = (t * t) %9901;
    if(n%2)
        t=(t*base)%9901;
    return t;
}

long long getNP(int base, int n)
{
    if(n==0)
        return 1;
    else if(n%2)
        return (getNP(base,n/2) *(1+power(base,n/2+1))) % 9901;
    else if(n%2==0)
        return (getNP(base,n/2-1) * (1+power(base,n/2+1)) + power(base,n/2))%9901;
}

int main()
{
    long long sum;
    while(cin>>a>>b)
    {
        getMult(a);
        sum=1;
        for(int i=0;i<p;i++)
            sum = (sum * (getNP(table[i],num[i]*b) % 9901))%9901;
        cout<<sum<<endl;
    }
    return 0;
}
