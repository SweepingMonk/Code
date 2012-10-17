#include <stdio.h>

int main()
{
    int A[16]={4,6,2,6,1,9,12,64,43};
    int B[16]={4,6,8,15,31,26,43,17,41};
    int T = A[0]-B[0];
    int max = T;
    int sum= T * T;
    for(int i=1;i<10;i++){
        T =abs(A[i]-B[i]);
        if(T > max)
            max = T;
        sum += T * T;
    }
    if(sum = 0.0)
        return 0;

    /* 现在已经知道从A到B距离最大的一维的距离max， A到B的距离介于max
     * 和 sqrt(k) * max 之间 */
    
    return 0;
}
