#include<bits/stdc++.h>
using namespace std;
int random(int *at,int k)
{
  if(k==1)
    return 0;
  else
    return 1+rand()%5;
}
int main()
{
  srand(time(0));
  int cat[10],cdt[10],idt[10],wt[10],nat,ndt,ql[10],diff;

  int at[10]={0,10,15,35,30,10,5,5};
  int st[10]={20,15,10,5,15,15,10,10};
  at[0]=0;cat[0]=0;cdt[0]=st[0];ql[0]=0;
  for(int k=1;k<10;k++)   //initializing variables
  {
    idt[k]=0;
    ql[k]=0;
    cat[k]=cat[k-1]+at[k];
    //cout<<k<<" ArrTime "<<b<<" ServT "<<c<<" cat "<<cat[k]<<" "<<ql[k]<<idt[k]<<endl;
  }
  for(int i=1;i<10;i++)
{
  diff=cdt[i-1]-cat[i];
  if(diff>0)
  {
    ql[i]=ql[i-1]+1;
    wt[i]=diff;
    idt[i]=0;
  }
  else if(diff<0)
  {
    ql[i]=ql[i-1]-1;
    idt[i]=-diff;
    wt[i]=0;
  }
  else
  ql[i]=ql[i-1];
cdt[i]=cat[i]+wt[i]+st[i];
}
cout<<"i\tArT\tCAt\tDiF\tIDT\tWaT\tSVT\tCDT\tQue\n";
for(int i=1;i<10;i++)
cout<<i<<"\t "<<at[i]<<"\t "<<cat[i]<<"\t \t "<<idt[i]<<"\t "<<wt[i]<<"\t "<<st[i]<<"\t "<<cdt[i]<<"\t "<<ql[i]<<endl;
  return 0;
}
