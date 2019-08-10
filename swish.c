#include<stdio.h>
#include<math.h>
int main()
{
  float X,P,disc,res=0;
  scanf("%f",&X);
  scanf("%f",&P);
  if(X<=0 || X>=10000) return 0;
  if(P<=1 || P>=100){ return 0;}
  while(X!=0)
  {
    res += X;
    disc=(X*P)/100;
    X = X - ceil(disc);
    if(X==1){ res++; break;}
   }
   printf("%.0f\n",res);  
}
