#include<stdio.h>
#include<conio.h>

int MoveZeroes(int arr[], int n){
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }
    return (n-count);
}
void main(){
    int n = 0;
    printf("Enter n : ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    int zeroes = MoveZeroes(arr, n);
    printf("Array after modification : ");
    for(int i=0 ; i<n ; i++){

        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Number of zeroes : %d", zeroes);
}
