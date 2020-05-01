#include<stdio.h>
int main(){
	char s[100]={0};
	int i,n=0;
	for(i=0;i<100;i++){
		scanf("%c",&s[i]);
		if(s[i]=='\n')break;
		n=n+1;
	}
	for(i=0;i<n;i++){
		if(s[i]>=65&&s[i]<=90){
			s[i]=155-s[i];
		}
		else if(s[i]>=97&&s[i]<=122){
			s[i]=219-s[i];
		}
	}
	for(i=0;i<n;i++)
	printf("%c",s[i]);
	return 0;
} 