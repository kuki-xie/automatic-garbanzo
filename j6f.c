#include<stdio.h>
struct Money{
	int code;
	int sum;
	float end;
}; 

int sushu(int n){
	int i,sum=0;
	if(n==1 || n==0)  return 0;//不是素数 
	for(i=2;i<n/2;i++){
		if(n%i==0) sum++;
	}
	if(sum==0) return 1; //是素数 
	else       return 0; //不是素数 
}

int main(){
	int n,i,j,sum=0;
	struct Money m[2000];
	struct Money temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %f",&m[i].code,&m[i].sum,&m[i].end);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(m[j].code>m[j+1].code){
				temp=m[j];
				m[j]=m[j+1];
				m[j+1]=temp;
			}
		}
	}

	for(i=0;i<n;i++){
		if(sushu(m[i].sum)==1){
			sum++;
			printf("%d %d %.2f\n",m[i].code,m[i].sum,m[i].end);
		}
	}
	if(sum==0)    //没有素数 
	{
		for(i=0;i<n;i++)
		{
			printf("%d %d %.2f\n",m[i].code,m[i].sum,m[i].end);
		 } 
	} 
	return 0;
} 
