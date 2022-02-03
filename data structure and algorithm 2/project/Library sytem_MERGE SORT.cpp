/*
OBEID SALEM AHMED BASHWAR
1813179

WARSAME ABDI YUSUF AHMED
1724685

MOHAMED MOUBARAK MOHAMED MISBAHOU MKOUBOI
1820705

This program sorts books based on their Title, Autor or date of publish
Using Merge Sort Algorithm
*/

#include <iostream>
using namespace std;

// Book structure 
struct Book{
	string bookTitle; 
	string author; 
	int yearOfPublish; 
};

int typeOfSort = 0; //1 = sort by book title,	2 = sort by Author name,	3 = sort by date of publish

//function Protoypes
void merge(Book [], int, int, int);
void mergeSort(Book [], int, int);
void printArray(Book [], int);


int main()
{
	//initilize the books of array
	int n = 4;
	Book array[n];
	
	// Details of Book 1
	array[0].bookTitle = "Introduction to Algorithms";
	array[0].author = "Thomas	";
	array[0].yearOfPublish = 2022;
	
	// Details of Book 2
	array[1].bookTitle = "Grokking Algorithms	";
	array[1].author = "Aditya Bhargava";
	array[1].yearOfPublish = 2016;
	
	// Details of Book 3
	array[2].bookTitle = "The Algorithm Design Manual";
	array[2].author = "Steven	";
	array[2].yearOfPublish = 1999;
	
	// Details of Book 4
	array[3].bookTitle = "Advanced Data Structures";
	array[3].author = "Peter Brass";
	array[3].yearOfPublish = 2002;
	
	int arraySize = sizeof(array) / sizeof(array[0]); // save the size of the array to be able to divide them
	
	cout << " ********************************************************************* \n";
	cout << " This program sort books based on it's Title, Autor or date of publesh \n using Merge Sort Algorithm \n";
	cout << "\n ********************************************************************* \n";

	cout << "\n\n Raw data, No sorting applied on books:\n\n";
	printArray(array, arraySize);
	
	do {
		cout <<" How would you like to sort the books?"
		<<"\n 1 - Sort based on the book title"
		<<"\n 2 - Sort based on the author name"
		<<"\n 3 - Sort based on year of publish\n ";
		cin >> typeOfSort;
	} while (typeOfSort<1 || typeOfSort>3);
	
	mergeSort(array, 0, arraySize - 1); //fuction call to sort the books
	printArray(array, arraySize);

	return 0;
}

void printArray(Book array[], int arraySize){
	cout <<"\n Order	Book Title			Aurhor		Publish Date"
		<<"\n____________________________________________________________________"<<endl;
		
	for (int i = 0; i < arraySize; i++)
		cout <<	"  " <<i+1 << "	" 
			<< array[i].bookTitle << "	" 
			<< array[i].author <<"	"
			<< array[i].yearOfPublish<<endl;
	cout <<endl;
}

void mergeSort(Book array[], int const start, int const end){
	if (start >= end){ //no more diviton could be performed
		return; 
	}

	int mid;
	mid = start + (end - start) / 2; //to caculate the middle 
	mergeSort(array, start, mid); 	//divid recursivly the first half
	mergeSort(array, mid + 1, end);	//divid recursivly the second half
	merge(array, start, mid, end); // finally conqer the dividens by marging them in acending order
}


void merge(Book array[], int const left, int const mid, int const right){
	int subLeft = mid - left + 1;
	int subRight = right - mid;

	// temp arrays
	Book *leftArray = new Book[subLeft];
	Book *rightArray = new Book[subRight];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (int i = 0; i < subLeft; i++){
		leftArray[i] = array[left + i];
	}
	
	for (int j = 0; j < subRight; j++){
		rightArray[j] = array[mid + 1 + j];
	}

	int indexOfSubLeft = 0; // Initial index of left sub-array
	int	indexOfSubRight = 0; // Initial index of right sub-array
	int indexOfMergedArray = left; // Initial index of merged array

	// Merge the temp arrays back into array[left..right]
	while (indexOfSubLeft < subLeft && indexOfSubRight < subRight && typeOfSort == 1) {
		if (leftArray[indexOfSubLeft].bookTitle <= rightArray[indexOfSubRight].bookTitle) {
			array[indexOfMergedArray] = leftArray[indexOfSubLeft];
			indexOfSubLeft++;
		}
		else {
			array[indexOfMergedArray] = rightArray[indexOfSubRight];
			indexOfSubRight++;
		}
		indexOfMergedArray++;
	}
	
	// Merge the temp arrays back into array[left..right]
	while (indexOfSubLeft < subLeft && indexOfSubRight < subRight && typeOfSort == 2) {
		if (leftArray[indexOfSubLeft].author <= rightArray[indexOfSubRight].author) {
			array[indexOfMergedArray] = leftArray[indexOfSubLeft];
			indexOfSubLeft++;
		}
		else {
			array[indexOfMergedArray] = rightArray[indexOfSubRight];
			indexOfSubRight++;
		}
		indexOfMergedArray++;
	}
	
	// Merge the temp arrays back into array[left..right]
	while (indexOfSubLeft < subLeft && indexOfSubRight < subRight && typeOfSort == 3) {
		if (leftArray[indexOfSubLeft].yearOfPublish >= rightArray[indexOfSubRight].yearOfPublish) {
			array[indexOfMergedArray] = leftArray[indexOfSubLeft];
			indexOfSubLeft++;
		}
		else {
			array[indexOfMergedArray] = rightArray[indexOfSubRight];
			indexOfSubRight++;
		}
		indexOfMergedArray++;
	}
	
	// Copy the remaining elements of
	// left[], if there are any
	while (indexOfSubLeft < subLeft) {
		array[indexOfMergedArray] = leftArray[indexOfSubLeft];
		indexOfSubLeft++;
		indexOfMergedArray++;
	}
	
	// Copy the remaining elements of
	// right[], if there are any
	while (indexOfSubRight < subRight) {
		array[indexOfMergedArray] = rightArray[indexOfSubRight];
		indexOfSubRight++;
		indexOfMergedArray++;
	}
}
