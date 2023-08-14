#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

#define MAX 7

int* solution001(int* arr, int len);

int main() {
	int arr[MAX] = { -4,-2,0,1,2,3,4 };
	int* ret = solution001(arr, MAX);
	for (int i = MAX - 1; i >= 0; i--)
	{
		printf("%d\n", ret[i]);
	}
	return 0;
}

int* solution001(int* arr, int len) {
	int low = 0;
	int high = len - 1;
	int indx = len - 1;	

	int* ret = malloc(sizeof (int) * len);
	while (low <= high) {
		if (arr[low] * arr[low] >= arr[high] * arr[high]) {
			ret[indx] = arr[low] * arr[low];
			low++;
		}
		else {
			ret[indx] = arr[high] * arr[high];
			high--;
		}
		indx--;
	}
	return ret;	
}