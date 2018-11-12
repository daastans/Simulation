#include<bits/stdc++.h>
using namespace std;
int poissonVariable(double l)
{
  double lambda=l;
  double limit=exp(-lambda);
  int k=0;
  float p=(double)rand()/RAND_MAX;
  while(p>limit)
  {
    k++;
    p*=(double)rand()/RAND_MAX;
  }
  return k;
}
int main()
{
  srand(time(0));
  cout<<" lambda \t Random Variables\n";
for(double i=100;i<200;i++)
{
  cout<<i<<"\t\t\t"<<poissonVariable(i)<<endl;
}
  return 0;
}
