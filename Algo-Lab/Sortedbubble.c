#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int *bubbleSort(int*);
int *getRandom();
void displaySequence();

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

    int *arr = (int *)malloc(100*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i]; 
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


    int *arr = bubbleSort(a1);

    start = clock();

    int *a2 = bubbleSort(arr);

    end = clock();

    displaySequence(a2);

    double elapsed = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

    return 0;
}
