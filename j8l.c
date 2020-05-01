#include<stdio.h>
struct lian{
	int n;
	int a[100];
}st[1000];
int main(){
	int i,j,m;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&st[i].n);
		for(j=0;j<st[i].n;j++){
			scanf("%d",&st[i].a[j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=st[i].n-1;j>=0;j--){
			printf("%d ",st[i].a[j]);
		}
		printf("\n");
	}
	return 0;
}