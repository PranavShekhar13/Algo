#include<stdio.h>
#include<stdlib.h>

void binarySearch(int arr[], int n, int a);

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

binarySearch(arr,n,a);
return 0;
}

void binarySearch(int arr[], int n, int a){
int front =0, rear = n, mid;

while(front<=rear){

mid =(front+rear)/2;

if(arr[mid]==a){
										printf("Element found at index =%d",mid);
										break;
							}
							else if(arr[mid]<a)
							front=front+1;
							else
							rear=mid-1;

		}
		if (front>rear){
		
			printf("Element not Found \n");
		}
}
