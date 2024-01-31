#include <iostream>



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

