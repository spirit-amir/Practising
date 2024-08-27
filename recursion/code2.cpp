#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
	vector<int> temp;

	int left = low;
	int right = mid+1;

// storing elements in the temporary array 
	while(left <= mid && right <= high)
  {
	 if(arr[left] <= arr[right])
	  { temp.push_back(arr[left]);
	  left++;
 }
	 else {
	  temp.push_back(arr[right]);
	  right++;
	 }
  }

// if elements on the left half are still left 
	while(left<=mid) {
	  temp.push_back(arr[left]);
	  left++;
  }

// if elemtnts of the right half are still left
	while(right <= high) {
	  temp.push_back(arr[right]);
	  right++;
  }

// transfering all elements from temporary to  arr

	for(int i = low; i<=high; i++) {
	  arr[i] = temp[i - low];
  }
}

void mSort(vector<int> &arr, int low, int high)
{
	if(low < high) {
 	 int mid = (low + high) / 2;
 	 mSort(arr, low, mid); // left half
	 mSort(arr, mid+1, high); // right half
	 merge(arr,low, mid, high);  // merging sorted
	}
}

int main() 
{
	vector<int> arr = {9,4,7,6,3,1,5};
	int n = arr.size();

	cout << "Before Sorting Array: " << endl;
	for(int i = 0; i<n; i++) {
	  cout << arr[i] << " " ;
	}
	cout << endl; 

	mSort(arr, 0, n-1);

	cout << "After Sorting Array: " << endl;
	for(int i = 0; i< n; i++)  {
	  cout << arr[i] << " " ;
	}
	cout << endl;
	return 0;
}
