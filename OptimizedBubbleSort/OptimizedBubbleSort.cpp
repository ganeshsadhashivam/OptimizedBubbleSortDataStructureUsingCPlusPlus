#include<iostream>
using namespace std;

void optimizedBubbleSort(int a[])

{
	int rounds = 0;
	for (int i = 0; i < 5; i++) {

		rounds++;
		int flag = false;
		for (int j = 0; j < (5 - i - 1); j++) {

			if (a[j] > a[j + 1])
			{
				flag = true;
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}
		if (flag == false) {
			break;
		}
	}
	cout << "No of rounds " << rounds<< endl;
}

int main() {

	int myarr[5];
	cout << "Enter 5 integers in any order" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> myarr[i];
	}


	cout << "Before sorting" << endl;
	for (int i = 0; i < 5; i++) {
		cout << myarr[i] << " ";

	}

      optimizedBubbleSort(myarr);

	cout << endl << "After sorting" << endl;
	for (int i = 0; i < 5; i++) {
		cout << myarr[i] << " ";

	}
	return 0;
}