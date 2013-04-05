#include <iostream>
#include <map>
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
    int next[10];
    char origin[11];
    cin>>origin;
    getNext(origin,next);
    for(int i=0;i<strlen(origin);i++)
        cout<<next[i]<<" ";
    cout<<endl;
    return 0;
}
