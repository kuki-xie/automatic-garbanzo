#include<stdio.h>
int main(){
	char s[1000]={0},ch,str[1000];
	int i,n=0,t=0,num=0;
	for(i=0;i<1000;i++){
		scanf("%c",&s[i]);
		if(s[i]=='\n') break;
		n++;
	}
	scanf("%c",&ch);
	for(i=0;i<n;i++){
		if(s[i]==ch) t++;
		else{
			str[num]=s[i];
			num++;
		}
	}
	if(t==0) printf("Did not find");
	else{
		for(i=0;i<num;i++) printf("%c",str[i]);
	}
	return 0;
}