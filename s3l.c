#include<stdio.h>
int main(){
	char ch;
	int a[100],i,j,k,temp,m,n=0;
	for(i=0;i<100;i++){
		scanf("%d",&a[i]);
		n++;
		scanf("%c",&ch);
		if(ch=='\n'||ch=='\r') break;
		
	}
	scanf("%d",&m);
	for(i=0;i<m-1;i++){
		for(j=i,k=i+1;k<m;k++)
		if(a[k]<a[j]) j=k;
		if(j!=i) {
			temp=a[i]; a[i]=a[j]; a[j]=temp;
		}
	}
	for(i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}