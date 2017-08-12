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
  }
  return ;
}

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

int partition(int a[],int l,int h)
{
  int pivot = a[h];
  int i = (l-1);

  for(int j=l;j<h;j++)
  {
    if(a[j]<=pivot)
    {
      i++;
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  }

  int temp1 = a[i+1];
  a[i+1] = a[h];
  a[h] = temp1;

  return (i+1) ;
}

void quicksort(int a[], int l, int h)
{
    if (l < h)
    {
        int pivot = partition(a, l, h);
        quicksort(a, l, pivot - 1);
        quicksort(a, pivot + 1, h);
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergesort(arr, l, m);
        mergesort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void insert(int a[],int i)
{
  int j;
  for(j=0;j<i;j++) if(a[j]>=a[i]) break;
  int temp = a[i];
  for(int k=(i-1);k>=j;k--) a[k+1]=a[k];
  a[j]=temp;
}
void insertionsort(int a[],int n)
{
  for(int i=1;i<n;i++) insert(a,i);
}

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
