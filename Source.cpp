/*HW Assignment_B.Green.cpp
Bryce Green
3/28/2021
Version 1.0
The program takes the identical arrays and uses the bubble sort algorithm for the first array and the 
selction sort algorithm for the other to put them into ascending order!*/

#include <iostream>
using namespace std;



//Selection Sort Function to sort the array of 20 values, I included a counter and also inputted one of the identical arrays from main function
void selectionSort(int array[], int size)
{
	int counter2 = 0;


	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
				counter2++;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}

	//outputs the values in the array that has been newly sorted
	cout << endl <<  "Selection Sort for second array in ascending order that took " << counter2 << " exchanges:\n";
	for (int i = 0; i <= 19; i++)
	{
		cout << array[i] << endl;
	}

}

//Bubble Sort Function to sort the array of 20 values, I included a counter and also inputted one of the identical arrays from main function
void bubbleSort(int array[], int size)
{
	int i, j;

	int counter1 = 0;

	for (i = 0; i <= 18; i++)
	{
		for (j = i + 1; j <= 19; j++)
		{
			int value;
			if (array[i] > array[j])
			{
				value = array[i];
				array[i] = array[j];
				array[j] = value;
				counter1++;
			}
		}
	}

	//outputs the values in the array that has been newly sorted
	cout << "Bubble Sort for first array in ascending order that took " << counter1 << " exchanges:\n";
	for (i = 0; i <= 19; i++)
	{
		cout << array[i] << endl;
	}
}


//holds both identical arrays to be called upon later, also calls upon the other functions to use the bubble and selection sort algorithms
int main()
{
	int identicalarray1[20] = { 12, 54, 97, 65, 10, 1, 9, 5, 48, 94, 39, 73, 19, 83, 94, 109, 198, 33, 62, 51 };
	int identicalarray2[20] = { 12, 54, 97, 65, 10, 1, 9, 5, 48, 94, 39, 73, 19, 83, 94, 109, 198, 33, 62, 51 };


	bubbleSort(identicalarray1, 20);
	selectionSort(identicalarray2, 20);
}
