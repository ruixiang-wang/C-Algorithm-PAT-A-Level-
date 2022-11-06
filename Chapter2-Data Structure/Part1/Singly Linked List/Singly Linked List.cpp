// Singly Linked List.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

const int N = 100010;
// head 表示头结点的下标
// idx 表示存储当前已经用到的下标
int head, e[N], ne[N], idx;

void init() {
    head = -1;
    idx = 0;
}

void add_to_head(int x) {
    e[idx] = x, ne[idx] = head, head = idx++;
}

// 插入到k结点后面
void add(int k, int x) {
    e[idx] = x, ne[idx] = ne[k], ne[k] = idx++;
}

// 删除k后面的节点
void remove(int k) {
    ne[k] = ne[ne[k]];
}

int main()
{
    int m;
    cin >> m;

    init();

    while (m--) {
        int k, x;
        char op;
        cin >> op;
        if (op == 'H') {
            cin >> x;
            add_to_head(x);
        }
        else if (op == 'D') {
            cin >> k;
            if (!k) head = ne[head]; //删除头结点
            remove(k - 1);
        }
        else if (op == 'I') {
            cin >> k >> x;
            add(k - 1, x);
        }
    }

    for (int i = head; i != -1; i = ne[i])cout << e[i] << ' ';
    cout << endl;
}

