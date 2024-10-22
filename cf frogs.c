#include <stdio.h>
int main(){
long long  t,a,b,k,x=0;scanf("%lld",&t);
for(int i=1;i<=t;i++){
scanf("%lld",&a);scanf("%lld",&b);scanf("%lld",&k);x=0;
long long odd=(k+1)/2;
long long even=(k)/2;
x=odd*a-even*b;
printf("%lld\n",x);



}





}