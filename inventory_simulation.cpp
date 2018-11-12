#include<stdio.h>
using namespace std;

void inventory inventory (int s,int S)
{
  int demand=9;
  int i=0;
  int Inv[10],ord[10],dem[10];

  Inv[0]=S;
  while(demand>0)
  {
    i++;
    if (Inv[i-1]<s) {
      ord[i]=S-Inv[i-1];
    }
    else
    ord[i]=0;

  }
}
