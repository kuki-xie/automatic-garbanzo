#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isoperator(char ch){
	if(ch<'0' || ch>'9') return 1;
	else                 return 0;
}
int main(){
	char a[10],b[10],c[10],op;
	int la,lb,lc,n1,n2,result;
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	
	if(strlen(a)==1 && isoperator(a[0])==1){
		op=a[0];
		n1=atoi(b);
		n2=atoi(c);
	}
	else if(strlen(b)==1 && isoperator(b[0])==1){
		op=b[0];
		n1=atoi(a);
		n2=atoi(c);
	}
	else{
		op=c[0];
		n1=atoi(a);
		n2=atoi(b);
	}
	switch(op){
		case '+': result=n1+n2;break;
		case '-': result=n1-n2;break;
		case '*': result=n1*n2;break;
		case '/': result=n1/n2;break;
		case '%': result=n1%n2;break;
		default:break; 
	}
	printf("%d\n",result);
	return 0;
} 