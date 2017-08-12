#include<iostream>
#include "sortingalgorithms.h"

using namespace std;
int main()
{
int n; cin>>n; int a[n];
for(int i=0;i<n;i++) cin>>a[i];
//quicksort(a,0,n-1);
//bubblesort(a,n);
//int k; cin>>k; countingsort(a,n,k);
//insertionsort(a,n);
//mergesort(a,0,n-1);
//selectionsort(a,n);
for(int i=0;i<n;i++) cout<<a[i]<<" ";
return 0;
}
