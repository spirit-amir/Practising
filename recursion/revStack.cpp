#include<iostream>
using namespace std;

void fun(int i, int arr[], int n)
{
    if(i>=n/2) 
     return;
    swap(arr[i],arr[n-i-1]);
    fun(i+1, arr, n);
}

void swap(int a, int b)
{
   int y;
    y = a;
    a = b;
    b = y;
}

int main()
{
  int n;
 cin>>n;
  int arr[n];

 for(int i=0; i<n; i++)
   cin>>arr[i];

fun(0,arr,n);
for( int i = 0; i<n;i++) cout<< arr[i] << " ";
return 0;
}
