#include <iostream>

using namespace std;


class ClassByElvin
{
	string name = "Elvin";

public:

	void Show()
	{
		cout << endl << name << endl;
	}
};

void Function_By_Elvin()
{
	cout << "\nFunction By Elvin" << endl << endl;

}



#pragma region Muhammad
void Muhammad()
{
	cout << "Salam men Mehemmed";
}
#pragma endregion




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

int main()
{
    cout << "Hello World!\n";
}

