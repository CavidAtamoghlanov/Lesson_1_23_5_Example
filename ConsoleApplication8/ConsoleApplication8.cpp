#include <iostream>

using namespace std;

void Function_By_Elvin()
{
	cout << "\nFunction By Elvin" << endl << endl;

}

// Find Min
int FindMin(int arr[], int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}


// Find Max Element
int FindMax(int arr[], int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

void Ibrahim()
{
	cout << "Ibrhaim" << endl;
}


int main()
{
    cout << "Hello World!\n";
}

