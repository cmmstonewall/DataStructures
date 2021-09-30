#include <iostream>

using namespace std;


int binarySearch(int *L, int min, int max, int n)
{
  int middle = (max + min)/2;
	cout << middle << endl;
  if(min > max)
    return 0;
  if(L[middle] == n)
		//cout << middle << endl;
    return middle;

  if(n > L[middle]){
		cout << middle + 1  << ", " << max << endl;
    return binarySearch(L, middle +  1, max, n);
}
  else{
		cout << min << ", " << middle - 1<< endl;
    return binarySearch(L, min, middle - 1, n);
	}
}

int main()
{
int nums[15] = {16, 18,	24,	32,	36,	48,	55,	64,	72,	75,	77,	83,	90,	96, 99};
binarySearch(nums, 0, 15, 80);
}