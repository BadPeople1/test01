#include <iostream>
using namespace std;
void PrintArray(int list[], int n)
{
	for (int i = 0; i < n; i++)
			cout << list[i] << " ";
		cout << endl;
}
void ArrayCopy(int list1[], int list2[], int n){
	for (int i = 0; i < n; i++)
		list1[i] = list2[i];
}
void ArrayInsert(int list[], int n, int value, int i)
{
	for (int index = n - 1; index > 1; index--)
		list[index] = list[index - 1];
	list[i] = value;
}
void ArrayDelete(int list[], int n, int i)
{
	for (int index = i; index < n-1; index++)
		list[index] = list[index + 1];
	list[n-1] = 0;
}
void PrintMartix(int A[][4], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int list1[8] = { 5,25,11,26,39,18,120,50 };
	PrintArray(list1, 8);
	int list2[8] = {0};
	ArrayCopy(list2, list1, 8);
	PrintArray(list2, 8);
	ArrayInsert(list1, 8, 27, 3);
	PrintArray(list1, 8);

	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
			
		cout << endl;
	}
	PrintMartix(arr, 3, 4);
}
