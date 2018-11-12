#include<bits/stdc++.h>
using namespace std;
long fact(int num)
{
  if(num==1)
    return 1;
  else
  return num*fact(num-1);
}
double erlangVarialble()
{
  //int t=rand()%10;
  int t=3;
  int m=1+rand()%5;
  //int b=1+rand()%4;
  int b=4;
  double x=1/(double)pow(b,m);
  double y=pow(t,m-1);
  double z=(double)1/exp(t/b);
  m=fact(m-1);
  double h=pow(m,-1)*x*y*z;
  return h;
}
int main()
{
  srand(time(0));
  for(int i=0;i<10;i++)
      cout<<erlangVarialble()<<"\n";
  return 0;
}
