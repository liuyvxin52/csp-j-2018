/*
2.  对于一个 1 到 n 的排列 P（即 1 到 n 中每一个数在 P 中出现了恰好一次），
    令 q[i] 为第 i 个位置之后第一个比 P[i] 值更大的位置，
    如果不存在这样的位置，则 q[i] = n + 1。R[a[i]]
    举例来说，如果 n = 5 且 P 为 1 5 4 2 3 ，
    则 q 为2 6 6 5 6。
    下列程序读入了排列 P ，使用双向链表求解了答案。
    试补全程序。
*/
#include <iostream>
using namespace std;

const int N = 100010;
int n;
int L[N], R[N], a[N];

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        /*1->*/a[x]=i/*<-1*/;
    }
    
    for (int i = 1; i <= n; ++i) {
        R[i] = /*2->*/ i+1 /*<-2*/;
        L[i] = i - 1;
    }
    
    for (int i = 1; i <= n; ++i) {
        L[/*3->*/R[a[i]]/*<-3*/] = L[a[i]];
        R[L[a[i]]] = R[/*4->*/a[i]/*<-4*/];
    }
    
    for (int i = 1; i <= n; ++i) {
    	cout <</*5->*/ R[i] /*<-5*/<< " ";
    }
    
    cout << endl;
    return 0;
}
/*
参考答案：
a[x] = i
i+1
R[a[i]]
a[i]
R[i]
*/