#include<stdio.h>
#include<stdlib.h>

void Delete(int arr[], int n, int pos);

int main(){

int n,arr[n],pos;
printf("Enter  the size of the array \n");
scanf("%d",&n);

printf("Enter the %d elements of the array\n",n);

for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
	
printf("Enter the position to be Deleted : -\n");
scanf("%d",&pos);

Delete(arr,n,pos);

return 0;
}

void Delete(int arr[], int n, int pos){

if(pos>=n+1){
printf("Deletion not possible \n");
}

for(int j=pos;j<n-1;j++){
			arr[j]=arr[j+1];
}

printf("Resultant Array \n");

for(int k=0;k<n;k++){

printf("%d\t",arr[k]);
}

}
