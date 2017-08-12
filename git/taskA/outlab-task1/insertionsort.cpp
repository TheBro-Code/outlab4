#include<iostream>
using namespace std;
// void insert(int a[],int i)
// {
//   int j;
//   for(j=0;j<i;j++) if(a[j]>=a[i]) break;
//   int temp = a[i];
//   for(int k=(i-1);k>=j;k--) a[k+1]=a[k];
//   a[j]=temp;
// }
// void InsertionSort(int a[],int n)
// {
//   for(int i=1;i<n;i++) insert(a,i);
// }

// void InsertionSort(int a[],int n)
// {
//   for(int j=1;j<n;j++)
//   {
//   int key = a[j];
//   int i = j-1;
//   while(i>=0 && a[i]>key)
//   {
//     a[i+1]=a[i];
//     i--;
//   }
//   a[i+1]=key;
//   }
// }

void InsertionSort(int a[],int start,int end)
{
  if(start==end)
  {
    return;
  }
  if(start==end-1)
  {
    if(a[start]>a[end])
    {
      int temp = a[start];
      a[start] = a[end];
      a[end] = temp;
    }
    return;
  }
  int key = a[end];
  InsertionSort(a,start,end-1);
  for(int i=0; i<end; i++) cout<<a[i]<<" ";
  cout<<"\n";
  for(int i=0;i<end;i++)
  {
    if(a[end]<=a[i])
    {
      //cout<<a[end-1]<<"\n";
      //cout<<key<<" ";
      for(int j=i;j<end;j++) {/*cout<<a[j]<<" ";*/ a[j+1]=a[j];}
      //cout<<"\n";
      a[i]=key;
      return;
    }
  }
}

int main()
{
int n; cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
InsertionSort(a,0,n-1);
for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
