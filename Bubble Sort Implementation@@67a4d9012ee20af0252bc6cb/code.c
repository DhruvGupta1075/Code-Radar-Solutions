int bubbleSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    return arr;
}
int printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
