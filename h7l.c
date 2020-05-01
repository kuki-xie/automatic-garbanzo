#include<stdio.h>
int function(int n){
 int sum=0;
 if(n/10==0) return n;
 else{
  while(n!=0){
   sum=sum+n%10;
   n=n/10;
  }
  return function(sum);
 }
} 
int main(){
 int n=0,a[1000],i;
 for(i=0;i<1000;i++){
  scanf("%d",&a[i]);
  if(a[i]==0) break;
  n++;
 }
 for(i=0;i<n;i++){
  printf("%d\n",function(a[i]));
 }
 return 0;
}
数字处理

