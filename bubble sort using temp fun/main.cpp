#include <iostream>
using namespace std;
template<typename T>
void BubbleSort(T arr[], int n)
{
	for(int i=0;i<n-1;++i){
		for(int j=0;j<n-i-1;++j){
			if(arr[j]>arr[j+1]){
				T temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
template<typename T>
void PrintArray(T arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{

    int arr[] = { 1, 10, 90, 100, -1, 11, 9, 14, 3, 2, 20, 19 };
    int n = sizeof(arr) / sizeof(int);
    char arr1[100] = { 'c', 'z', 'a', 'e', 'd', 'r', 'k', 'o', 'o', 'f', 'f', 'p' };
    int n1 = sizeof(arr1) / sizeof(int);
    float arr2[] = { 1.1, 1.2, 9.2, 10.1, 1.0, 1.0, 9.2, 1.3, 3.2, 2.5, 20.6, 19.8 };
    int n2 = sizeof(arr2) / sizeof(int);

    cout << "Array Before Sorting: " << endl;
    PrintArray(arr, n);

    BubbleSort(arr, n);

    cout << "Array After Sorting: " << endl;
    PrintArray(arr, n);


     cout << "Array Before Sorting: " << endl;
    PrintArray(arr2, n2);

    BubbleSort(arr2, n2);

    cout << "Array After Sorting: " << endl;
    PrintArray(arr2, n2);




       cout << "Array Before Sorting: " << endl;
    PrintArray(arr1, n1);

    BubbleSort(arr1, n1);

    cout << "Array After Sorting: " << endl;
    PrintArray(arr1, n1);

}
