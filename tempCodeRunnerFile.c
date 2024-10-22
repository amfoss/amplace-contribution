#include <stdio.h>
int main(){
long long  t,a,b,k,x=0;scanf("%lld",&t);
for(int i=1;i<=t;i++){
scanf("%lld",&a);scanf("%lld",&b);scanf("%lld",&k);
for(int j=1;j<=k;j++){
   if(j%2==0){x=x-b;}
   else{x=x+a;} 
}
printf("%d",x);



}





}