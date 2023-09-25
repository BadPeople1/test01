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

void AddMatrix(int A[][3], int B[][3], int C[][3], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

template< typename T, size_t M, size_t N >
void addmatrix(T(&A)[M][N], T(&B)[M][N], T(&C)[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

template< typename T, size_t M, size_t N, size_t O >
void multiplymatrix (T(&A)[M][N], T(&B)[N][O], T(&C)[N][O])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < O; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < N; k++)
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
		}
	}
}

int A1[4][3] = { {1,2,3,}, {4,5,6}, {7,8,9}, {10,11,12} };
int B1[4][3] = { {0,1,2}, {3,4,5}, {6,7,8}, {9,10,11} };
int C1[4][3] = { 0 };
int C2[4][3] = { 0 };

int A2[3][2] = { {1,2},{3,4},{5,6} };
int B2[2][4] = { {0,1,1,2},{4,0,-1,3} };
int C3[3][4] = { 0 };

int main()
{
	int list1[8] = { 5,25,11,26,39,18,120,50 };
	PrintArray(list1, 8);
	int list2[8] = {0};
	ArrayCopy(list2, list1, 8);
	PrintArray(list2, 8);
	ArrayInsert(list1, 8, 27, 3);
	PrintArray(list1, 8);
	addmatrix(A1, B1, C2);;

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
