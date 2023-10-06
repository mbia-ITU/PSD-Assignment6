// run (fromFile "exer7.2.iii.rewrite.c") [0];;
void main(int n){
    int arr[7];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 1;
    arr[5] = 2;
    arr[6] = 0;

    int freq[8];

    histogram(7, arr, 3, freq);

    printArr(freq, 4);
    println;
}

void histogram(int n, int ns[], int max, int freq[]){
    int i;

    for(i = 0;i<max+1; i = i + 1){
        freq[i] = 0;
        
    }
    
    for(i = 0;i<n;i = i+1){
        int item;
        item = ns[i];
        freq[item] = freq[item] + 1; 
    }
}

void printArr(int arr[], int n){
    int i;
    
    for(i = 0;i<n; i = i+1){
        print arr[i];
    }
}