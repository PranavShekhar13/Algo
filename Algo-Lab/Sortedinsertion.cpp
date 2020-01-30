#include <bits/stdc++.h>

using namespace std;

int* insertionSort(int *arr)
{
    int n = 100, key,j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }

    int *a = new int[100];

    for (int i = 0; i < n; i++)
    {
        a[i] = arr[i]; 
    }

    return a;
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


    int *arr = insertionSort(a1);

    start = clock();

    int *a2 = insertionSort(arr);

    end = clock();

    displaySequence(a2);

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}