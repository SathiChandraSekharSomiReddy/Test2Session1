#include<stdio.h>
int input()
{
  int n;
  printf("enter the number:\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int i,n1=0,n2=1,n3;
  for(i=2;i<n;++i)
    {
      n3=n1+n2;
      n1=n2;
      n2=n3;
    }
  return n2;
}
void output(int fibo,int n)
{
  printf("the %d th term fibonaci series is %d",fibo,n );
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}