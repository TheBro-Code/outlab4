#include<iostream>
#include<vector>
using namespace std;
int n;
void partition(int a[],int l,int h,int &q,int &w)
{
  int pivot = a[h];
  vector<int> v1,v2,v3;

  for(int i=l;i<=h;i++)
  {
    if(a[i]<pivot)       v1.push_back(a[i]);
    else if(a[i]==pivot) v2.push_back(a[i]);
    else if(a[i]>pivot)  v3.push_back(a[i]);
  }

  for(int i=0;i<v1.size();i++) {a[i]=v1[i]; }
  for(int i=0;i<v2.size();i++) {a[i+v1.size()]=v2[i];}
  for(int i=0;i<v3.size();i++) {a[i+v1.size()+v2.size()]=v3[i];}

  q = v1.size();
  w = v1.size()+v2.size()-1; 
  for(int i=l;i<h;i++) cout<<a[i]<<" ";
  cout<<endl;
  return;
}

void quickSort(int a[], int l, int h)
{
    if (h<=l) return;
    int g,m;
    partition(a,l,h,g,m);
    quickSort(a, l, g-1);
    quickSort(a,m+1, h);


}

int main()
{
  cin>>n; int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  quickSort(a,0,n-1);
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  return 0;
}
