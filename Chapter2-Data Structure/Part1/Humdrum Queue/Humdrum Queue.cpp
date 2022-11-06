// Humdrum Queue.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 滑动窗口的最大值最小值

#include <iostream>
using namespace std;

const int N = 1000010;
int n, k;
int a[N], q[N];

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)scanf("%d", &a[i]);
    int hh = 0, tt = -1;
    for (int i = 0; i < n; i++) {
        // 是否超出长度
        if (hh <= tt && i - k + 1 > q[hh]) hh++;
        // 删去比新来的数据大的全部旧数据
        while (hh <= tt && a[q[tt]] >= a[i]) tt--;
        q[++tt] = i;
        if (i >= k - 1)printf("%d ", a[q[hh]]);
    }

    puts("");

    hh = 0, tt = -1;
    for (int i = 0; i < n; i++) {
        if (hh <= tt && i - k + 1 > q[hh]) hh++;
        while (hh <= tt && a[q[tt]] <= a[i]) tt--;
        q[++tt] = i;
        if (i >= k - 1)printf("%d ", a[q[hh]]);
    }

    puts("");
    return 0;
}

