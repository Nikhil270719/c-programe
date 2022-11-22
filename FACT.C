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
void sub()
{
  int a,b;
  printf("enter the a and b:");
scanf("%d%d",&a,&b)
  printf("sub:%d,%d",a-b);
  return 0;
}
