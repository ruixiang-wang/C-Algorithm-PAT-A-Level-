// Double linked list.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

const int N = 100010;
int m;
int e[N], l[N], r[N], idx;

void init() {
    r[0] = 1, l[1] = 0;
    idx = 2;
}

// 在下标是k的点的后边插入
void add(int k, int x) {
    e[idx] = x;
    r[idx] = r[k];
    l[idx] = k;
    r[k] = idx;
    l[r[idx]] = idx;
}

// 删除第k个点
void remove(int k) {
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}

int main()
{
    std::cout << "Hello World!\n";
}
