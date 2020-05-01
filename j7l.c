#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char id[15];
	int score;
	int english;
}sts[200];
int compare(student st1,student st2){
	if(st1.score==st2.score){
		if(st1.english==st2.english) return -strcmp(st1.id,st2.id);
		else return st1.english-st2.english;
	}
	else return st1.score-st2.score;
}
void sort(student sts[],int n){
	int i,j,k;
	for(i=0;i<n-1;i++){
		for(j=i,k=i+1;k<n;k++)
		if(compare(sts[k],sts[j])>0) j=k;
		if(j!=i){
			student st=sts[i];
			sts[i]=sts[j];
			sts[j]=st;
		}
	}
}
int main(){
	int m,n,i;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		scanf("%s%d%d",sts[i].id,&sts[i].score,&sts[i].english);
	}
	sort(sts,m);
	for(i=0;i<n;i++){
		printf("%s %d %d\n",sts[i].id,sts[i].score,sts[i].english);
	}
	return 0;
}