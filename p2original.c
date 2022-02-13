#include<stdio.h>
int input_side()
{
  int side;
  printf("enter a side of a triangle\n");
  scanf("%d",&side);
  return side;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && a!=c && b!=c)
  {
    return 1;
  }
  return 0;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("the triangle with sides %d ,%d and %d is scalene\n",a,b,c);
  }
  else
  {
    printf("the triangle with sides %d , %d and %d is not scalene \n",a,b,c);
  }
}
int main()
{
  int AB,BC,AC;
  AB=input_side();
  BC=input_side();
  AC=input_side();
  int result;
  result= check_scalene(AB,BC,AC);
  output(AB,BC,AC,result);
  return 0;
}
