#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int *selectionSort(int*, int);
int *getRandom(int n);
void displaySequence(int *, int);

int* selectionSort(int *arr, int n)
{
    int min, temp;
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

    int *a = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        a[i] = arr[i]; 
    }

    return a;
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


    int *arr = selectionSort(a1,n);

    start = clock();

    int *a2 = selectionSort(arr,n);

    end = clock();

    displaySequence(a2,n);

    double elapsed = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

    return 0;
}
