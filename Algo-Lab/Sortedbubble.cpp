#include <bits/stdc++.h>

using namespace std;

int* bubbleSort(int *a)
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

    int *arr = new int[100];

    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i]; 
    }

    return arr;
}

void displaySequence(int *arr){
    cout<<"The Sorted Generated Sequence = "<<endl;
    
    int n=100;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
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


    int *arr = bubbleSort(a1);

    start = clock();

    int *a2 = bubbleSort(arr);

    end = clock();

    displaySequence(a2);

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}