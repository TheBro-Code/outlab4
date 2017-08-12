#include<iostream>
using namespace std;
/*
int max(int a[],n)
{
  max = a[0];
  for(int i=0;i<n;i++)
  {
    if(max<a[i]) max = a[i];
  }
  return max;
}

int min(int a[],n)
{
  min = a[0];
  for(int i=0;i<n;i++)
  {
    if(min>a[i]) min = a[i];
  }
  return min;
}
*/
void countsort(int a[],int n,int l)
{
  int count[l],count_sum[l];
  for(int i=0;i<l;i++) {count[i]=0;}
  for(int j=0;j<l;j++)
  {
    for(int i=0;i<n;i++)
    {
      if(j==a[i]) {count[j]++;}
    }
  }
  int j=0;
  for(int i=0;i<l;i++)
  {
    while(count[i]>0)
    {
      a[j]=i;
      count[i]--;
      j++;
    }
  }

}

int main()
{
  int n;cin>>n;int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  countsort(a,n,10);
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
