// Monotone stack.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
using namespace std;

const int N = 100010;

int n;
int stk[N], tt;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false); // 加快读入时间
    // scanf 和 printf 速度比 cin cout要快，更保险。

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        while (tt && stk[tt] >= x) tt--;
        if (tt) cout << stk[tt] << ' ';
        else cout << -1 << ' ';
        stk[++tt] = x;
    }
    return 0;
}
