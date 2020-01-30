#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int *a)
{
    int n = 100, temp;

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "The Sorted Generated Numbers =" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

int *getRandom()
{

    int *temp = new int[100];
    for (int i = 1; i <= 100; i++)
    {
        temp[i] = rand() % 100; //get random number
    }

    return temp;
}

int main()
{
    clock_t start, end;


    int *a1 = getRandom();

    start = clock();

    bubbleSort(a1);

    end = clock();

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}