

#include <iostream>
using namespace std;
// задача 1
void aarroplus(int* arr, const int SIZE,int* sum,int* mult)
{
	
	for (int i = 0; i < SIZE; ++i)
	{
		*sum += arr[i];
		*mult *= arr[i];
	}
}
// задача 2
void arrsearch(int* arr, const int SIZE, int* minus, int* plus, int* zero)
{
	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] > 0)
		{
			*plus++;
		}
		else if (arr[i] < 0)
		{
			*minus++;
		}
		else
		{
			*zero++;
		}
	}
}
int* removeminusarr(int* arr, int size, int& newSize) {
	
	newSize = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 0) {
			newSize++;
		}
	}

	
	int* newArr = new int[newSize];
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 0) {
			newArr[index++] = arr[i];
		}
	}

	return newArr;
}int main()
{
	setlocale(LC_ALL, "");
	

}


