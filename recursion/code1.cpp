#include<iostream>
using namespace std;

int summ(int index, int s, int sum, int arr[], int n)
{
	if(index == n)
	{
	  if(s == sum) { return 1;}
	  else return 0;
	}

	s += arr[index];

	int l = summ(index+1, s, sum, arr, n);
	s-= arr[index];

	int r = summ(index+1, s, sum, arr, n);
	return l + r;
}

int main()
{
	int arr[] = {1,2,1};
	int n = 3;
	int sum = 2;
	cout << summ(0,0,sum, arr, n)<< endl;

	return 0;
}
