#include<stdio.h>
int fib(int n){
 if(n==1||n==2) return 1;
 else return fib(n-1)+fib(n-2);
}
int sushu(int n){
 int i;
 if(n==1) return 0;
 else{
  for(i=2;i<n/2;i++){
  if(n%i==0){
   return 0;
   break;
  }
 } 
 if(i>=n/2) return 1;
 }
}
int main(){
 int n,k;
 scanf("%d",&n);
 k=fib(n);
 if(sushu(k)==0) printf("%d",k);
 else printf("yes");
 return 0;
}