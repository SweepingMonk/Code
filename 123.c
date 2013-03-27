#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const int maxn = 31270;
int t, n;
unsigned len[maxn], s[maxn];

void preprocess();

int main()
{

    int i, pos, length, val;
    len[1] = 1;
    s[1] = 1;
    for(i = 2; i < maxn; i++)
    {
        len[i] = len[i-1] + (unsigned int) log10((double)i) + 1;
        s[i] = s[i-1] + len[i];
    }

    scanf("%d", &t);
    while(t-- != 0)
    {
        length = 0;
        scanf("%d", &n);
        for(i = 1; s[i] < n; i++);

        pos = n - s[i-1];
        i = 1;
        while(length < pos)
        {
            length += (int)log10((double)i) + 1;
            i++;
        }

        val = ((i - 1) / (int) pow((double)10, length - pos)) % 10;
        printf("%d\n", val);
    }

    return 0;
}
