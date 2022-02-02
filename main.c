#include<stdio.h>
void main()
{
float n=100,f;
int i;
for(i=1;i<=100;i++)
{
f=(n/100)*i;

n=n-f;
printf("\n%dth person has %f percentage",i,f);
  
}

}
