void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
void heapify( int arr[], int n, int i){
    //maxheap 
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if (left < n && arr[left] > arr[largest])
    largest= left;

    if (right < n && arr[right] > arr[largest])
    largest= right;
    if ( largest != i ){
        swap(arr[i],arr[largest]);
        heapify(arr, n,largest);
    }

    // for (int i= i/2 +1 ; i >= 0 ; i--){
    //     heapify(arr, n,i);
    // }
}
void heapsort (int arr[], int n)
{  
    for (int i=n/2 -1 ; i >= 0 ; i--) 
        heapify(arr,n,i);

     for (int i = n - 1; i >= 0; i--) {
        
        swap(arr[0], arr[i]);
 
        
        heapify(arr, i, 0);
    }
}
int main (){
    int n ;
    int arr[1000];
    cout<<" nhap n";
        cin >> n;
    for(int i = 0; i < n; i++){
        cout<<" nhap phan tu a[i]";
        cin >> arr[i];
    }   
    heapsort(arr,n);
    for(int i = 0; i < n; i++){
        cout<<" mang sau sap sep " << arr[i] << "   ";
        
    }   
    return 0;
}