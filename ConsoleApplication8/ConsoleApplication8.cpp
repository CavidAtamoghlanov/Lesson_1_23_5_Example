#include <iostream>

using namespace std;


class ClassByElvin
{
	string name = "Elvin";
	int age = 16;

public:

	void Show()
	{
		cout << endl << name << endl << age << endl;
	}
};

void Function_By_Elvin()
{
	cout << "\nFunction By Elvin" << endl << endl;

}
void Function_By_Vaqif()
{
	cout << "Function By Vaqif" << endl;

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
<<<<<<< HEAD
=======

>>>>>>> dd6a2005a11613d276aab3e9d0db4a48073a5899

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

void Mirqafar() 
{
	cout << "Mirqafar" << endl;
}
=======
>>>>>>> c6c5ea6df3386641f2d8c40e7351ed23b7ee263e

void Mirtalib()
{
	cout << "Mirtalib"<<endl; 
}







int main()
{
    cout << "Hello World!\n";
}

