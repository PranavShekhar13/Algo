#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void selectionSort(int*,int);
int *getRandom(int);
int *Reverse(int*,int);

void selectionSort(int *arr,int n)
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
    printf("The Sorted Generated Sequence = \n");
    

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }

}



int *getRandom(int n)
{

    int *temp = (int *)malloc(100*sizeof(int));
    for (int i = 1; i <= 100; i++)
    {
        temp[i] = rand() % 100; //get random number
    }

    return temp;
}

int *Reverse(int *a, int n) {

    int *temp = (int *)malloc(n*sizeof(int));
    for (int i = n; i > 0; i--)
    {

        temp[i] = a[i];
    }
    return temp;
}

int main()
{
    clock_t start, end;
    
    int n;
    
    printf("Enter the number of random numbers to be Generated: \n");
    scanf("%d", &n);

    int *a1 = getRandom(n);


    int *b=Reverse(a1,n);

    start = clock();

     selectionSort(b,n);

    end = clock();

    double elapsed = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

    return 0;
}
