#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionSort(int*,int);
int *getRandom(int n);

void insertionSort(int *arr,int n)
{
        int key,j;
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

    printf("The Sorted Generated Sequence = \n");
    

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }

}



int *getRandom(int n)
{
    

    int *temp = (int *)malloc(n*sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        temp[i] = rand() % 100; //get random number
    }

    return temp;
}



int main()
{
    clock_t start, end;

    int n;
    printf("Enter the number of Random Numbers to be Generaed");
    scanf("%d",&n);

    int *a1 = getRandom(n);


    start = clock();

     insertionSort(a1,n);

    end = clock();

    double elapsed = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

    return 0;
}
