#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void bubbleSort(int*);
int *getRandom();

void bubbleSort(int *a)
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
    printf("The Sorted Generated Sequence = \n");
    

    for(int i=0;i<n;i++){
        printf("%d",a[i]);
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


    start = clock();

     bubbleSort(a1);

    end = clock();

    double elapsed = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

    return 0;
}
