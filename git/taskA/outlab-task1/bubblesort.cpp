#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    int count = 0;
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        a[j+1]=a[j+1]+a[j];
        a[j]=a[j+1]-a[j];
        a[j+1]=a[j+1]-a[j];
        count ++;
      }
    }
   if(count==0)
       return;
   }
}
int main()
{
int n; cin>>n; int a[n];
for(int i=0;i<n;i++) cin>>a[i];
bubblesort(a,n);
for(int i=0;i<n;i++) cout<<a[i]<<" ";
return 0;
}
