
#include <stdio.h>
char s[55*2-1],w[55];
int main(){
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d%s",&n,s+1);
		for(i=1;i<=n;i++)w[i]=s[2*i-1];//打印奇数位置的字母
		for(i=1;i<=n;i++)printf("%c",w[i]);
		printf("\n");
	}
	return 0;
}