#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=100005;
const int mod=1e9+7;
int tree[2005][27];
int tot;
void pushin(){
	string s;
	cin>>s;
	int len=s.size();
	int root=0;
	for(int i=0;i<len;i++){
		if(!tree[root][s[i]-'a']){
			tree[root][s[i]-'a']=++tot;
		}
		root=tree[root][s[i]-'a'];
	}
}
bool found(){
	string s;
	cin>>s;
	int len=s.size();
	int root=0;
	for(int i=0;i<len;i++){
		if(!tree[root][s[i]-'a'])return false;
		root=tree[root][s[i]-'a'];
	}
	return true;
}
signed main(){
	int n,m;
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++){
		pushin();
	}
	for(int i=1;i<=m;i++){
		if(found()){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
