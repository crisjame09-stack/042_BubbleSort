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
        cin >> n; 

        if (n <= 20)
            break; 
        else
        {
            cout << "\nArray can have a maximum of 20 elements.\n"; 
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Enter Array Elements" << endl;
    cout << "=====================" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Data-" << (i + 1) << ": ";
        cin >> arr[i]; 
    }
}
void bubblesortArray()
{
    
    int pass = 1;

    do
    {
        for (int j = 0; j <= n - 1 - pass; j++)
        {
            
            if (arr[j] > arr[j + 1])
            {
                
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        pass += 1; 

        
        cout << "Pass " << pass - 1 << ": "; 
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;

    } while (pass <= n - 1);
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
        cout << arr[j]; 
        if (j < n - 1)
        {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Number of passes = " << n - 1 << endl; 
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












