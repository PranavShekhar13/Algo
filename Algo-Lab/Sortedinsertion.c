#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int *insertionSort(int*);
int *getRandom();
void displaySequence();

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


    int *a = (int *)malloc(100*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        a[i] = arr[i]; 
    }

    return a;
}

void displaySequence(int *arr){
    printf("The Sorted Generated Sequence = \n");
    
    int n=100;

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}

int *getRandom()
{

    int *temp = (int *)malloc(100*sizeof(int));
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

    double elapsed = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

    return 0;
}
