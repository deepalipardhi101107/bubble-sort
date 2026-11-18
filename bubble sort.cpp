
#include <iostream>
using namespace std;

void bubbleSort(float a[], int n)
{
    int comparisons = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            comparisons++;

            if (a[j] > a[j + 1])
            {
                float temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Percentage:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nTop Five Scores: ";
    for (int i = n - 1; i >= n - 5 && i >= 0; i--)
        cout << a[i] << " ";

    cout << "\nTotal Comparisons = " << comparisons << endl;
}

int main()
{
    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid Number of Students!";
        return 0;
    }

    float per[n];

    cout << "Enter Percentages:\n";
    for (int i = 0; i < n; i++)
        cin >> per[i];

    bubbleSort(per, n);

    return 0;
}

