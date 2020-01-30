#include <bits/stdc++.h>

using namespace std;

int* selectionSort(int *arr)
{
    int n = 100, min, temp;
    for (int i = 0; i < n - 1; i++)
    {

        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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


    int *arr = selectionSort(a1);

    start = clock();

    int *a2 = selectionSort(arr);

    end = clock();

    displaySequence(a2);

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    return 0;
}