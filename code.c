#include <stdio.h>

void sequence(int t)
{
    if(t<3)
        return;
    int small,big;
    int p=0;
    small=1;
    big=2;
    p=small+big;
    while(small<=(t>>1))
    {
        if(p==t)
        {
            printf("%d %d\n",small, big);
            p-=small;
            small++;
        }
        else if(p>t)
        {
            p-=small;
            small++;
        }
        else
        {
            big++;
            p+=big;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    sequence(n);
    return 0;
}
