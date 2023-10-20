#include <iostream>
using namespace std;
#define maxn 1000010
typedef long long LL;
LL a[maxn],n,m;

bool P(int h){
	LL tot=0;
	for( int i=1;i<=n;i++)
		if(a[i]>h)tot+=a[i]-h;
	return tot>=m; 
}

int main(){
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];

	
	int L=0,R=1e9,ans,mid;
	while(L<=R){
		mid=L+R>>1;   //mid=(L+r)/2  »ò   mid=L+(R-L)/2 
		
		if(P(mid))
			ans=mid,L=mid+1;
		else
			R=mid-1;
	}
	
	printf("%d",ans);
	return 0;
}

