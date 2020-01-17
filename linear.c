#include<stdio.h>
#include<stdlib.h>

void Search(int arr[], int n, int a);

int main(){

int n,arr[n],a;
printf("Enter  the size of the array \n");
scanf("%d",&n);

printf("Enter the %d elements of the array\n",n);

for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
		
printf("Enter the element to be Serached for : -\n");
scanf("%d",&a);

Search(arr,n,a);
return 0;
}

void Search(int arr[],int n, int a){
		

		
		for(int i=0;i<n;i++){
					if(arr[i]==a){
						printf("Element found at index:- %d",i);
						break;
					}
					else if(i==n-1){
							printf("Element not found \n");
					}
		}
}
