#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int *selectionSort(int*);
int *getRandom();
void displaySequence();

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


    int *arr = selectionSort(a1);

    start = clock();

    int *a2 = selectionSort(arr);

    end = clock();

    displaySequence(a2);

    double elapsed = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

    return 0;
}
