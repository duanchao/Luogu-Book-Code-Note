#include<iostream>
using namespace std;
int n,m,i,x,a[1000010];
int erfind(int s,int t,int x){
	while (s<t){     // 当还有可查找区间的时候 
	   int m = (s+t)/2;   // 1. 取中间位置m
	   
	   // 2. 根据中间位置与x的大小关系，调整下一次的查找范围 
	   if(a[m]>=x)t=m;
	   else  s=m+1;   
	}
	if(a[t]==x)return t;
	return -1;
}

int main(){
   cin>>n>>m;
   for(i=1;i<=n;i++)cin>>a[i];
   
   for(i=1;i<=m;i++){
   	   cin>>x;
   	   cout<<erfind(1,n,x)<<endl;
   }
  return 0;
}
