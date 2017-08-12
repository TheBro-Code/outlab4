#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
  a=a+b;
  b=a-b;
  a=a-b;
}

int max(int a[],int ind)
{
  int m = a[0];int index = 0;
  for(int i=0;i<=ind;i++)
  {
    if(a[i]>m)
    {
      m=a[i]; index = i;
    }
  }
  return index;
}

void selectionsort(int a[],int n)
{

for(int i=1;i<=n;i++)
{
  int max_index = max(a,n-i);
  int temp = a[n-i]; a[n-i] = a[max_index]; a[max_index] = temp;
}

}
int main()
{
  int n;cin>>n;int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  selectionsort(a,n);
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
