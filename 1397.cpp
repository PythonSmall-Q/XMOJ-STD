#include<bits/stdc++.h>
using namespace std;
int w,n,ans=0,a[30010];
int main()
{
	cin>>w>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
	int l=1,r=n;
    while(l<=r)
        if(a[l]+a[r]<=w) l++,r--,ans++;
        else r--,ans++;
    cout<<ans;
    return 0;
}
