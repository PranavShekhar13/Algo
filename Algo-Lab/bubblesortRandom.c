#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void bubbleSort(int*,int);
int *getRandom(int n);

void bubbleSort(int *a,int n)
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
    printf("The Sorted Generated Sequence = \n");
    

    for(int i=0;i<n;i++){
        printf("%d",a[i]);
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

     bubbleSort(a1,n);

    end = clock();

    double elapsed = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
    printf("Time elapsed in ms: %f", elapsed);

    return 0;
}
