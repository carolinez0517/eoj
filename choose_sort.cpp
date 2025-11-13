#include <iostream>
using namespace std;
#define MAXN 100
int main()
{
    int n;
    int data[MAXN];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> data[i];

    for (int i=n-1;i>0;i--) {
        //执行n-1轮
        int maxpos = 0;    //maxpos标记当前最大元素的下标
        for (int j=1;j<=i;j++){    //每一轮找出当前最大的元素所在的位置（下标）
            if (data[j] > data[maxpos]){
                maxpos = j;
            }
        }
        int t = data[i];
        data[i] = data[maxpos];    //交换元素
        data[maxpos] = t;
    }

    for (int k=0;k<n;k++)
        cout<<data[k]<<(k==n-1?"\n":" ");

    return 0;
}

