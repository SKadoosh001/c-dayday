#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int remove_val(int nums[], int leng, int val) {
	int low = 0;
	int high = leng - 1;
	while (low <= high)
	{
		while (low <= high && nums[low] != val) {
			low++;
		}
		while (low <= high && nums[high] == val) {
			high--;
		}
		if (low < high) {
			nums[low] = nums[high];
			low++;
			high--;
		}
	}
	return low;
}

int
int main() {
	int arr[9] = { 1,2,3,4,4,4,5,6,7 };
	int len = remove_val(arr,9,5);
	printf("%d\n", len);
	return 0;
}