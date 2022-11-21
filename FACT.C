#include<stdio.h>
main()
{
  int i,fact=1,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    fact=fact*i;
  }
  printf("%d",fact);
}
void add()
{
  int a,b,c;
  printf("\nEnter a number: ");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("%d",c);
}
