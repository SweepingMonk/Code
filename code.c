i#include <stdio.h>
#include <string.h>
int a[100][100];
int p[100][100];

void printRect(int n, int m)
{
    int i=1,j=1;
    int flag=0;
    while(!p[i][j])
    {
        switch(flag)
        {
        case 0:
            for(;j<=m && !p[i][j];j++)
            {
                printf("%d ",a[i][j]);
                p[i][j]=1;
            }
            i++;
            j--;
            break;
        case 1:
            for(;i<=n && !p[i][j];i++)
            {
                printf("%d ",a[i][j]);
                p[i][j]=1;
            }
            i--;
            j--;
            break;
        case 2:
            for(;j>=1 && !p[i][j];j--)
            {
                printf("%d ",a[i][j]);
                p[i][j]=1;
            }
            i--;
            j++;
            break;
        case 3:
            for(;i>=1 && !p[i][j];i--)
            {
                printf("%d ",a[i][j]);
                p[i][j]=1;
            }
            i++;
            j++;
            break;
        }
        printf("\n");
        flag=(flag+1) & 3;
    }
}

int main()
{
    freopen("in","r",stdin);
    int n,m;
    scanf("%d%d",&n,&m);
    memset(a,0,sizeof(a));
    memset(p,0,sizeof(a));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<=m;i++)
    {
        a[0][i]=1;
        a[n+1][0]=1;
    }
    for(int i=0;i<=n;i++)
    {
        a[i][0]=1;
        a[i][m+1]=1;
    }
    printRect(n,m);
    return 0;
}
