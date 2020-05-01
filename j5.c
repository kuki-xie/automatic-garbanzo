#include <stdio.h>
 
#define N 30
#define M 9
 
int yoself(void);
int main(int argc, char const* argv[])
{
    int ans;
    ans = yoself();
    printf("%d",ans);
    return 0;
}
int yoself(void)
{
    int i, j, a[N] = { 0 }, left = N;//a[N]标志位，1表示出列，0表示留下，left是剩下的人数
    for (i = 0, j = 1; left > 1; i++, j++) {//i-标志数组下标，j-报数倍数下标
        if (a[i % N] == 1) {
            j--;
            continue;
        }
        if (j % M == 0) {
            a[i % N] = 1;
            left--;
        }
    }
    i = 0;
    while (a[i++] != 0)//找到留下的那位的坐标，注意到数组下标和原来位置差一
        ;
    return i;

