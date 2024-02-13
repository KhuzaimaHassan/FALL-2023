#include <iostream>
using namespace std;

void CheckIfExists(int b[], int index)
{
    for (int i = 0; i < index; i++)
    {
        if (b[index] == b[i])
        {
            return;
        }
    }
    cout << b[index] << " ";
}

int main()
{
    int i;
    int numArray[20] = {0};
    cout << "\n\nPlease input numbers in the range between 10 to 100 only."<<endl;
    cout << "Enter 20 numbers: ";
    for (i = 0; i < 20; i++)
    {
        cin >> numArray[i];
    }
    for (i = 0; i < 20; i++)
    {
        if (numArray[i] >= 10 && numArray[i] <= 100)
        {
            cout << "You input:\n";
            for (i = 0; i < 20; i++)
            {
                cout << numArray[i] << " ";
            }
            cout << "\n";
            cout << "THE NON-DUPLICATE VALUES ARE: \n";
            cout << numArray[0] << " ";
            for (i = 1; i < 20; i++)
            {
                CheckIfExists(numArray, i);
            }
            cout << endl;
            break;
        }
        else
        {
            cout << "\n\nPlease input numbers in the range between 10 to 100 only.";
            break;
        }
    }
    return 0;
}
