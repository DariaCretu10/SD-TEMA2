#include <iostream>
using namespace std;
int n, arr[100],i;
void bubble(int v[],int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}
void countsort(int v[], int n)
{long long fr[100001],maxi=-1;
 for(i=0;i<=100001;i++)
    fr[i]=0;
 for(int i=1;i<=n;i++)
    {fr[v[i]]++;
     if (maxi<v[i])
        maxi=v[i];
    }
for(i=0;i<=maxi;i++)
    while (fr[i])
        {cout<<i<<" ";
         fr[i]--;
        }
}

int main()
{cin>>n;
for(i=1;i<=n;i++)
    cin>>arr[i];
countsort(arr,n);
    return 0;
}
