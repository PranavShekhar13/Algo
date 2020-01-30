#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int *insertionSort(int*, int);
int *getRandom(int);
void displaySequence(int*, int);


int* bubbleSort(int *a,int n)
{
    int temp;

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

    int *arr = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i]; 
    }

    return arr;
}

void displaySequence(int *arr, int n){
    printf("The Sorted Generated Sequence = \n");

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}

int *getRandom(int n)
{
    

    int *temp = (int *)malloc(n*sizeof(int));
    for (int i = 1; i <= 100; i++)
    {
        temp[i] = rand() % 100; //get random number
    }

    return temp;
}

int main()
{
    clock_t start, end;
    
    int n;
    printf("Enter the number of numbers to be Generated:-\n");
    scanf("%d", &n);

    int *a1 = getRandom(n);


    int *arr = bubbleSort(a1,n);

    start = clock();

    int *a2 = bubbleSort(arr,n);

    end = clock();

    displaySequence(a2,n);

    double elapsed = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

    return 0;
}
