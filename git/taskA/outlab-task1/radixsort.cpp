#include<iostream>
using namespace std;
void 
int main()
{
int n; cin>>n; int a[n];
for(int i=0;i<n;i++) cin>>a[i];
radixsort(a,n);
for(int i=0;i<n;i++) cout<<a[i]<<" ";
return 0;
}
