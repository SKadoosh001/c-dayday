//#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define MAX 8

int search001(int arr[], int target) {
	int low = 0;
	int high = MAX;
	while (low < high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] < target) {
			low = mid + 1;
		}
		else {
			high = mid;
		}
	}
	return -1;

}

int search002(int arr[], int target) {
	int low = 0;
	int high = MAX;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		else if(arr[mid]<target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}
int main() {
	int arr[MAX] = { 1,2,3,4,5,6,7,8 };
	int target = search002(arr, 8);
	printf("%d\n", target);
	return 0;
}