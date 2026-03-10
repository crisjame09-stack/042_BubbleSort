// Bubble Sort Algorithm in C++

#include <iostream>
#include <string>
using namespace std;

int arr[20];  
int n;         

void input()
{
    
    int i;

    while (true)
    {
        cout << "Enter number of elements in the array: ";   
        cin >> n;                                            

        if (n <= 20)                                         
            break;                                           
        else
            cout << "\nArray can have a maximum of 20 elements.\n";
    }

    cout << endl;
    cout << "Enter Array Elements" << endl;
    cout << endl;

    for (i = 0; i < n; i++)        // Loop from 0 to n-1
    {
        cout << "Data element-" << (i + 1) << " : ";  // Output to screen
        cin >> arr[i];                                // Input from user
    }
}

void bubbleSortArray()
{
    // procedure to sort array using bubble sort method
    int pass = 1;
    int j, k, temp;

    do
    {
        for (j = 0; j <= n - 1 - pass; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        cout << "\nPass " << pass << " : ";
        for (k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }

        pass++;

    } while (pass <= n - 1);
}

void display()
{
    cout << "\n\nSorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    input();
    bubbleSortArray();
    display();

    return 0;

}







