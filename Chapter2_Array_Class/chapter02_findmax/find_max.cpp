#include <cstdio>

int findMaxValue(int a[], int len)
{
	int maxVal = a[0];

	for (int i = 1; i < len; i++) {
		if (maxVal < a[i])
			maxVal = a[i];
	}
	return maxVal;
}

int findMaxPixel(int a[][5], int h, int w)
{
	int maxVal = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (maxVal < a[i][j])
				maxVal = a[i][j];
		}
	}
	return maxVal;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int img[4][5] = { {1,2,3,4,5},
	{6,7,8,9,10},
	{6,7,8,9,10},
	{6,7,8,9,10} };

	int maxVal = findMaxValue(arr, 10);

	printf("배열의 최댓값=%DWn", maxVal);


	int maxPixel = findMaxValue(arr, 10);

	printf("배열의 최댓값=%DWn", maxPixel);

	return 0;
}