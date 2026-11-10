// Exercise Sheet 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/********************************************/
/*Krishnendu Mohan*/
/*Sheet 1,Exercise 3*/
/*Runnable*/
/*******************************************/

#include <iostream>
using namespace std;


void sortingarray(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            int v = a[i];
            int j = i;
            do
            {
                a[j] = a[j - 1];
                j--;
            } while (j>0 && v<a[j-1]);
            a[j] = v;
        }
    }
}

int main()
{
    int n,i;
  
    cout << "Enter the array size\n";
    cin >> n;
    if (n<=0)
    {
        cout << "invalid array size";
        return 1;
    }
    int* a = new int[n];
    cout << "Enter the elements of the array"<<endl;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    sortingarray(a, n);
    cout << "Sorted array:"<<endl;
    for (i = 0; i < n; i++) {
        cout << a[i]<<" ";
    }
    cout << endl;
    
    


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
