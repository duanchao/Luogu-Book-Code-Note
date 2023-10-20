#include<cstdio>
using namespace std;
int main()
{
    int n,m,s=0;scanf("%d%d",&n,&m);//入读
    bool visit[200]={0};//visit赋初始值
    for(int k=0;k<n;k++){//总共要出队n次
        for(int i=0;i<m;i++){if(++s>n)s=1;if(visit[s])i--;}//类似取模，而因为序列是从1开始的，所以不取模，加判断；若visit过，则i--，使其继续循环
        printf("%d ",s);visit[s]=true;//输出，记录已出队
    }
    return 0;
}
