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
        cout << "Enter the number of elements in the array: "; 
        cin >> n; // Input from user

        if (n <= 20)
            break; // Exit loop if less than or equal to 20
        else
        {
            cout << "\nArray can have a maximum of 20 elements.\n"; // Output message
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Enter Array Elements" << endl;
    cout << "=====================" << endl;
    for (int i = 0; i < n; i++) // Loop from 0 to n-1
    {
        cout << "Data-" << (i + 1) << ": "; // Output to screen
        cin >> arr[i]; // Input from user
    }
}
void bubblesortArray()
{
    // Procedure to sort the array using bubble sort method
    int pass = 1; // step 1

    do
    {
        for (int j = 0; j <= n - 1 - pass; j++)
        {
            // step 2: compare adjacent elements
            if (arr[j] > arr[j + 1])
            {
                // step 3: swap if out of order
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        pass += 1; // step 4: increment pass counter

        // Display the array after each pass
        cout << "Pass " << pass - 1 << ": "; // Number of pass
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " "; // Display data for this pass
        }
        cout << endl;

    } while (pass <= n - 1); // step 5: continue until all passes are done
}
void display()
{
    cout << endl;
    cout << "==========================" << endl;
    cout << "Sorted Array Elements" << endl;
    cout << "==========================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j]; // display array element
        if (j < n - 1)
        {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Number of passes = " << n - 1 << endl; // display number of passes
    cout << endl;
    cout << endl;
}

int main()
{
    input();
    bubblesortArray();
    display();

    system("pause");
    return 0;
}











